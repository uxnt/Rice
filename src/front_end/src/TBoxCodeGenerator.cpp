
// Generated from ./TBox.g4 by ANTLR 4.7.2


#include "TBoxCodeGenerator.h"

using namespace std;
using namespace tbox::language;
using namespace llvm;

Type* getRes(string op, Type* op_num) {
    return op_num;
}

Type* getRes(string op, Type* left, Type* right) {
    if (left->getTypeID() == Type::TypeID::FloatTyID || right->getTypeID() == Type::TypeID::FloatTyID)
        return Type::getFloatTy(*Context);
    return Type::getInt32Ty(*Context);
}

TBoxNormalValue::TBoxNormalValue() {
}

TBoxNormalValue::TBoxNormalValue(llvm::Value* value, llvm::Type* type) : value(value), type(type) {
}

llvm::Value* TBoxNormalValue::getValue() {
    return value;
}

llvm::Type* TBoxNormalValue::getType() {
    return type;
}

TBoxVariable::TBoxVariable() {
}

TBoxVariable::TBoxVariable(llvm::Value* address, llvm::Type* type) : address(address), type(type){
}

llvm::Value* TBoxVariable::getValue() {
    return Builder->CreateLoad(address, "load_tmp");
}

llvm::Value* TBoxVariable::getAddress() {
    return address;
}

llvm::Type* TBoxVariable::getType() {
    return type;
}

VariableTableManager::VariableTableManager(Function* func_ptr, llvm::Module* mod_ptr) : function(func_ptr), mod(mod_ptr) {
}

AllocaInst* VariableTableManager::createVar(string var_name, llvm::Type* ty) {
    //TODO
    typeTable[var_name] = ty;
    return variableTable[var_name] = Builder->CreateAlloca(ty, 0, var_name.c_str());
}

uptr<TBoxValue> VariableTableManager::getVar(string var_name) {
    //TODO
    if (hasVar(var_name)) {
        return uptr<TBoxValue>((TBoxValue*)new TBoxVariable(variableTable[var_name], typeTable[var_name]));
    }
    else if (mod->getGlobalVariable(var_name)) {
        return uptr<TBoxValue>((TBoxValue*)new TBoxVariable(mod->getGlobalVariable(var_name), mod->getGlobalVariable(var_name)->getType()));
    }
    else if (mod->getFunction(var_name)) {
        return uptr<TBoxValue>((TBoxValue*)new TBoxNormalValue(mod->getFunction(var_name), mod->getFunction(var_name)->getType()));
    }
    return 0;
}

Type* VariableTableManager::getType(string var_name) {
    //TODO
    if (hasVar(var_name)) {
        return typeTable[var_name];
    }
    else if (mod->getGlobalVariable(var_name)) {
        return mod->getGlobalVariable(var_name)->getType();
    }
    else if (mod->getFunction(var_name)) {
        return mod->getFunction(var_name)->getType();
    }
    return 0;
}

bool VariableTableManager::hasVar(string var_name) {
    //TODO
    return variableTable[var_name] || mod->getGlobalVariable(var_name);
}

void VariableTableManager::removeVar(string var_name) {
    //TODO
    variableTable[var_name] = 0;
}

uptr<TBoxValue> TBoxCodeGenerator::visitNum(TBoxParser::NumContext *ctx) {
    //TODO
    if (ctx->FloatNum()) {
        return uptr<TBoxValue>((TBoxValue*)new TBoxNormalValue(
            ConstantFP::get(*Context, APFloat(atof(ctx->FloatNum()->getText().c_str()))),
            Type::getFloatTy(*Context)
        ));
    }
    int value = 0;
    char* ptr;
    if (ctx->BinNum()) {
        string num = ctx->BinNum()->getText();
        num.erase(num.length() - 1);
        value = strtol(num.c_str(), &ptr, 2);
    }
    if (ctx->OctNum()) {
        string num = ctx->OctNum()->getText();
        num.erase(0);
        value = strtol(num.c_str(), &ptr, 8);
    }
    if (ctx->DecNum()) {
        string num = ctx->DecNum()->getText();
        value = strtol(num.c_str(), &ptr, 10);
    }
    if (ctx->HexNum()) {
        string num = ctx->HexNum()->getText();
        num.erase(0);
        num.erase(1);
        value = strtol(num.c_str(), &ptr, 16);
    }
    return uptr<TBoxValue>((TBoxValue*)new TBoxNormalValue(
        ConstantInt::get(*Context, APInt(32, value)),
        Type::getInt32Ty(*Context)
    ));
}

uptr<TBoxValue> TBoxCodeGenerator::visitConstant(TBoxParser::ConstantContext *ctx) {
    //TODO
    if (ctx->num()) {
        return visitNum(ctx->num());
    }
    else if (ctx->StringConstant()) {
        string str = ctx->StringConstant()->getText();
        str.erase(0).erase(str.length() - 1);
        //TODO
    }
    return uptr<TBoxValue>((TBoxValue*)0);
}

uptr<TBoxValue> TBoxCodeGenerator::visitPrimExpr(TBoxParser::PrimExprContext *ctx) {
    //TODO
    if (ctx->constant()) {
        return visitConstant(ctx->constant());
    }
    else if (ctx->Identifier()) {
        return var_manager->getVar(ctx->Identifier()->getText());
    }
    else if (ctx->expr()) {
        return visitExpr(ctx->expr());
    }
    return 0;
}

uptr<TBoxValue> TBoxCodeGenerator::visitPostExpr(TBoxParser::PostExprContext *ctx) {
    //TODO
    auto opnum = visitPrimExpr(ctx->primExpr());
    for (auto op : ctx->postOp()) {
        if (op->LeftBracket()) {
            //array
        }
        if (op->LeftParen()) {
            //function call
            auto args = visitArgs(op->args());
            auto func = (Function*)visitPrimExpr(ctx->primExpr())->getValue();
            opnum = uptr<TBoxValue>((TBoxValue*)new TBoxNormalValue(
                Builder->CreateCall(func, args, "call_tmp"),
                func->getReturnType()
            ));
        }
        if (op->Dot()) {
            //object
        }
    }
    auto value = opnum->getValue();
    for (auto op : ctx->incOrDecOp()) {
        value = visitIncOrDecOp(op)(value);
    }
    if (ctx->incOrDecOp().size()) {
        auto v = opnum->getValue();
        Builder->CreateStore(value, ((TBoxVariable*)opnum.get())->getAddress());
        opnum = uptr<TBoxValue>((TBoxValue*)new TBoxNormalValue(v, opnum->getType()));
    }
    return opnum;
}

uptr<TBoxValue> TBoxCodeGenerator::visitUnaryExpr(TBoxParser::UnaryExprContext *ctx) {
    //TODO
    uptr<TBoxValue> opnum;
    if (ctx->postExpr())
        opnum = visitPostExpr(ctx->postExpr());
    else {
        opnum = visitCastExpr(ctx->castExpr());
        opnum = uptr<TBoxValue>((TBoxValue*)new TBoxNormalValue(
            visitUnaryOp(ctx->unaryOp())(opnum->getValue()),
            opnum->getType()
        ));
    }
    auto value = opnum->getValue();
    for (auto op : ctx->incOrDecOp()) {
        value = visitIncOrDecOp(op)(value);
    }
    if (ctx->incOrDecOp().size())
        Builder->CreateStore(value, ((TBoxVariable*)opnum.get())->getAddress());
    return uptr<TBoxValue>((TBoxValue*)new TBoxNormalValue(
            value,
            value->getType()
        ));
}

function<Value*(Value*)> TBoxCodeGenerator::visitUnaryOp(TBoxParser::UnaryOpContext *ctx) {
    //TODO
    if (ctx->Not()) {
        return [](Value* o){return Builder->CreateNot(o, "not_tmp");};
    }
    if (ctx->Minus()) {
        return [](Value* o){return o->getType()->getTypeID() == Type::TypeID::FloatTyID ? Builder->CreateFNeg(o, "neg_tmp") : Builder->CreateNeg(o, "neg_tmp");};
    }
    if (ctx->Tilde()) {
        return [](Value* o){return Builder->CreateXor(o, ConstantInt::get(Type::getInt32Ty(*Context), APInt(32, -1)), "turn_tmp");};
    }
    return [](Value* o){return (Value*)0;};
}

function<Value*(Value*)> TBoxCodeGenerator::visitIncOrDecOp(TBoxParser::IncOrDecOpContext *ctx) {
    //TODO
    if (ctx->Increase()) {
        return [](Value* o){return Builder->CreateAdd(o, ConstantInt::get(Type::getInt32Ty(*Context), APInt(32, 1)), "inc_tmp");};
    }
    else if (ctx->Decrease()) {
        return [](Value* o){return Builder->CreateSub(o, ConstantInt::get(Type::getInt32Ty(*Context), APInt(32, 1)), "inc_tmp");};
    }
    return [](Value* o){return (Value*)0;};
}

uptr<TBoxValue> TBoxCodeGenerator::visitCastExpr(TBoxParser::CastExprContext *ctx) {
    //TODO
    if (ctx->unaryExpr()) {
        return visitUnaryExpr(ctx->unaryExpr());
    }
    if (ctx->num()) {
        return visitNum(ctx->num());
    }
    return 0;
}

uptr<TBoxValue> TBoxCodeGenerator::visitMulExpr(TBoxParser::MulExprContext *ctx) {
    //TODO
    auto left = visitCastExpr(ctx->castExpr(0));
    for (int i = 0 ; i < ctx->mulOp().size() ; i ++) {
        auto right = visitCastExpr(ctx->castExpr(i + 1));
        auto v = visitMulOp(ctx->mulOp(i))(left->getValue(), right->getValue());
        left = uptr<TBoxValue>((TBoxValue*)new TBoxNormalValue(
            v, v->getType()
        ));
    }
    return left;
}

function<Value*(Value*, Value*)> TBoxCodeGenerator::visitMulOp(TBoxParser::MulOpContext *ctx) {
    if (ctx->Star()) {
        return [](Value* l, Value* r) {
            if (getRes("mul", l->getType(), r->getType())->getTypeID() == Type::TypeID::FloatTyID)
                return Builder->CreateFMul(l, r, "mul_tmp");
            else
                return Builder->CreateMul(l, r, "mul_tmp");
        };
    }
    else if (ctx->Div()) {
        return [](Value* l, Value* r) {
            if (getRes("div", l->getType(), r->getType())->getTypeID() == Type::TypeID::FloatTyID)
                return Builder->CreateFDiv(l, r, "div_tmp");
            else
                return Builder->CreateSDiv(l, r, "div_tmp");
        };
    }
    else if (ctx->Mod()) {
        return [](Value* l, Value* r) {
            if (getRes("mod", l->getType(), r->getType())->getTypeID() == Type::TypeID::FloatTyID)
                return Builder->CreateFRem(l, r, "mod_tmp");
            else
                return Builder->CreateSRem(l, r, "mod_tmp");
        };
    }
    //TODO
    return [](Value* l, Value* r){return (Value*)0;};
}

uptr<TBoxValue> TBoxCodeGenerator::visitAddExpr(TBoxParser::AddExprContext *ctx) {
    //TODO
    auto left = visitMulExpr(ctx->mulExpr(0));
    for (int i = 0 ; i < ctx->addOp().size() ; i ++) {
        auto right = visitMulExpr(ctx->mulExpr(i + 1));
        left = uptr<TBoxValue>((TBoxValue*)new TBoxNormalValue(
            visitAddOp(ctx->addOp(i))(left->getValue(), right->getValue()),
            getRes("", left->getType(), right->getType())
        ));
    }
    return left;
}

function<Value*(Value*, Value*)> TBoxCodeGenerator::visitAddOp(TBoxParser::AddOpContext *ctx) {
    //TODO
    if (ctx->Plus()) {
        return [](Value* l, Value* r) {
            if (getRes("add", l->getType(), r->getType())->getTypeID() == Type::TypeID::FloatTyID)
                return Builder->CreateFAdd(l, r, "add_tmp");
            else
                return Builder->CreateAdd(l, r, "add_tmp");
        };
    }
    else if (ctx->Minus()) {
        return [](Value* l, Value* r) {
            if (getRes("sub", l->getType(), r->getType())->getTypeID() == Type::TypeID::FloatTyID)
                return Builder->CreateFSub(l, r, "sub_tmp");
            else
                return Builder->CreateSub(l, r, "sub_tmp");
        };
    }
    return [](Value* l, Value* r){return (Value*)0;};
}

uptr<TBoxValue> TBoxCodeGenerator::visitShiftExpr(TBoxParser::ShiftExprContext *ctx) {
    //TODO
    auto left = visitAddExpr(ctx->addExpr(0));
    for (int i = 0 ; i < ctx->shiftOp().size() ; i ++) {
        auto right = visitAddExpr(ctx->addExpr(i + 1));
        left = uptr<TBoxValue>((TBoxValue*)new TBoxNormalValue(
            visitShiftOp(ctx->shiftOp(i))(left->getValue(), right->getValue()),
            getRes("", left->getType(), right->getType())
        ));
    }
    return left;
}

function<Value*(Value*, Value*)> TBoxCodeGenerator::visitShiftOp(TBoxParser::ShiftOpContext *ctx) {
    //TODO
    if (ctx->LeftShift()) {
        return [](Value* l, Value* r) {
            return Builder->CreateShl(l, r, "shl_tmp");
        };
    }
    else if (ctx->ARightShift()) {
        return [](Value* l, Value* r) {
            return Builder->CreateAShr(l, r, "ashr_tmp");
        };
    }
    else if (ctx->LRightShift()) {
        return [](Value* l, Value* r) {
            return Builder->CreateLShr(l, r, "lshr_tmp");
        };
    }
    return [](Value* l, Value* r){return (Value*)0;};
}

uptr<TBoxValue> TBoxCodeGenerator::visitCmpExpr(TBoxParser::CmpExprContext *ctx) {
    //TODO
    auto left = visitShiftExpr(ctx->shiftExpr(0));
    for (int i = 0 ; i < ctx->cmpOp().size() ; i ++) {
        auto right = visitShiftExpr(ctx->shiftExpr(i + 1));
        left = uptr<TBoxValue>((TBoxValue*)new TBoxNormalValue(
            Builder->CreateCmp(visitCmpOp(ctx->cmpOp(i), getRes("cmp", left->getType(), right->getType())->getTypeID()), left->getValue(), right->getValue(), "cmp_tmp"),
            Type::getInt8Ty(*Context)
        ));
    }
    return left;
}

CmpInst::Predicate TBoxCodeGenerator::visitCmpOp(TBoxParser::CmpOpContext *ctx, Type::TypeID ty) {
    //TODO
    if (ctx->Equal()) {
        if (ty == Type::TypeID::FloatTyID)
            return CmpInst::Predicate::FCMP_OEQ;
        else
            return CmpInst::Predicate::ICMP_EQ;
    }
    else if (ctx->NotEqual()) {
        if (ty == Type::TypeID::FloatTyID)
            return CmpInst::Predicate::FCMP_ONE;
        else
            return CmpInst::Predicate::ICMP_NE;
    }
    else if (ctx->Greater()) {
        if (ty == Type::TypeID::FloatTyID)
            return CmpInst::Predicate::FCMP_OGT;
        else
            return CmpInst::Predicate::ICMP_SGT;
    }
    else if (ctx->GreaterEqual()) {
        if (ty == Type::TypeID::FloatTyID)
            return CmpInst::Predicate::FCMP_OGE;
        else
            return CmpInst::Predicate::ICMP_SGE;
    }
    else if (ctx->Less()) {
        if (ty == Type::TypeID::FloatTyID)
            return CmpInst::Predicate::FCMP_OLT;
        else
            return CmpInst::Predicate::ICMP_SLT;
    }
    else if (ctx->LessEqual()) {
        if (ty == Type::TypeID::FloatTyID)
            return CmpInst::Predicate::FCMP_OLE;
        else
            return CmpInst::Predicate::ICMP_SLE;
    }
    return CmpInst::Predicate::BAD_ICMP_PREDICATE;
}

uptr<TBoxValue> TBoxCodeGenerator::visitAndExpr(TBoxParser::AndExprContext *ctx) {
    //TODO
    auto left = visitCmpExpr(ctx->cmpExpr(0));
    for (int i = 0 ; i < ctx->And().size() ; i ++) {
        auto right = visitCmpExpr(ctx->cmpExpr(i + 1));
        left = uptr<TBoxValue>((TBoxValue*)new TBoxNormalValue(
            Builder->CreateAnd(left->getValue(), right->getValue(), "and_tmp"),
            Type::getInt8Ty(*Context)
        ));
    }
    return left;
}

uptr<TBoxValue> TBoxCodeGenerator::visitXorExpr(TBoxParser::XorExprContext *ctx) {
    //TODO
    auto left = visitAndExpr(ctx->andExpr(0));
    for (int i = 0 ; i < ctx->Xor().size() ; i ++) {
        auto right = visitAndExpr(ctx->andExpr(i + 1));
        left = uptr<TBoxValue>((TBoxValue*)new TBoxNormalValue(
            Builder->CreateXor(left->getValue(), right->getValue(), "xor_tmp"),
            Type::getInt8Ty(*Context)
        ));
    }
    return left;
}

uptr<TBoxValue> TBoxCodeGenerator::visitOrExpr(TBoxParser::OrExprContext *ctx) {
    //TODO
    auto left = visitXorExpr(ctx->xorExpr(0));
    for (int i = 0 ; i < ctx->Or().size() ; i ++) {
        auto right = visitXorExpr(ctx->xorExpr(i + 1));
        left = uptr<TBoxValue>((TBoxValue*)new TBoxNormalValue(
            Builder->CreateOr(left->getValue(), right->getValue(), "or_tmp"),
            Type::getInt8Ty(*Context)
        ));
    }
    return left;
}

uptr<TBoxValue> TBoxCodeGenerator::visitLogicAndExpr(TBoxParser::LogicAndExprContext *ctx) {
    //TODO
    return visitOrExpr(ctx->orExpr(0));
}

uptr<TBoxValue> TBoxCodeGenerator::visitLogicOrExpr(TBoxParser::LogicOrExprContext *ctx) {
    //TODO
    return visitLogicAndExpr(ctx->logicAndExpr(0));
}

uptr<TBoxValue> TBoxCodeGenerator::visitQuesExpr(TBoxParser::QuesExprContext *ctx) {
    //TODO
    auto condition = visitLogicOrExpr(ctx->logicOrExpr());
    if (ctx->expr()) {
        auto left = visitExpr(ctx->expr());
        auto right = visitQuesExpr(ctx->quesExpr());
        return uptr<TBoxValue>((TBoxValue*)new TBoxNormalValue(
            Builder->CreateSelect(condition->getValue(), left->getValue(), right->getValue(), "ques_tmp"),
            left->getType()
        ));
    }
    return condition;
}

uptr<TBoxValue> TBoxCodeGenerator::visitAssignExpr(TBoxParser::AssignExprContext *ctx) {
    //TODO
    if (ctx->constant()) {
        return visitConstant(ctx->constant());
    }
    if (ctx->quesExpr()) {
        return visitQuesExpr(ctx->quesExpr());
    }
    if (ctx->postExpr()) {
        Value* value= visitAssignExpr(ctx->assignExpr())->getValue();
        if (! ctx->assignOp()->Assign()) {
            value = visitAssignOp(ctx->assignOp())(visitPostExpr(ctx->postExpr())->getValue(), value);
        }
        Builder->CreateStore(value, ((TBoxVariable*)visitPostExpr(ctx->postExpr()).get())->getAddress());
    }
    return 0;
}

std::function<llvm::Value*(llvm::Value*, llvm::Value*)> TBoxCodeGenerator::visitAssignOp(TBoxParser::AssignOpContext *ctx) {
    //TODO
    if (ctx->MulAssign()) {
        return [](Value* l, Value* r) {
            if (getRes("mul", l->getType(), r->getType())->getTypeID() == Type::TypeID::FloatTyID)
                return Builder->CreateFMul(l, r, "mul_tmp");
            else
                return Builder->CreateMul(l, r, "mul_tmp");
        };
    }
    else if (ctx->DivAssign()) {
        return [](Value* l, Value* r) {
            if (getRes("div", l->getType(), r->getType())->getTypeID() == Type::TypeID::FloatTyID)
                return Builder->CreateFDiv(l, r, "div_tmp");
            else
                return Builder->CreateSDiv(l, r, "div_tmp");
        };
    }
    else if (ctx->ModAssign()) {
        return [](Value* l, Value* r) {
            if (getRes("mod", l->getType(), r->getType())->getTypeID() == Type::TypeID::FloatTyID)
                return Builder->CreateFRem(l, r, "mod_tmp");
            else
                return Builder->CreateSRem(l, r, "mod_tmp");
        };
    }
    else if (ctx->PlusAssign()) {
        return [](Value* l, Value* r) {
            if (getRes("add", l->getType(), r->getType())->getTypeID() == Type::TypeID::FloatTyID)
                return Builder->CreateFAdd(l, r, "add_tmp");
            else
                return Builder->CreateAdd(l, r, "add_tmp");
        };
    }
    else if (ctx->MinusAssign()) {
        return [](Value* l, Value* r) {
            if (getRes("sub", l->getType(), r->getType())->getTypeID() == Type::TypeID::FloatTyID)
                return Builder->CreateFSub(l, r, "sub_tmp");
            else
                return Builder->CreateSub(l, r, "sub_tmp");
        };
    }
    else if (ctx->LeftShiftAssign()) {
        return [](Value* l, Value* r) {
            return Builder->CreateShl(l, r, "shl_tmp");
        };
    }
    else if (ctx->ARightShiftAssign()) {
        return [](Value* l, Value* r) {
            return Builder->CreateAShr(l, r, "ashr_tmp");
        };
    }
    else if (ctx->LRightShiftAssign()) {
        return [](Value* l, Value* r) {
            return Builder->CreateLShr(l, r, "lshr_tmp");
        };
    }
    else if (ctx->AndAssign()) {
        return [](Value* l, Value* r) {
            return Builder->CreateAnd(l, r, "or_tmp");
        };
    }
    else if (ctx->OrAssign()) {
        return [](Value* l, Value* r) {
            return Builder->CreateOr(l, r, "and_tmp");
        };
    }
    else if (ctx->XorAssign()) {
        return [](Value* l, Value* r) {
            return Builder->CreateXor(l, r, "xor_tmp");
        };
    }
    return [](Value* l, Value* r){return (Value*)0;};
}

vector<Value*> TBoxCodeGenerator::visitArgs(TBoxParser::ArgsContext *ctx) {
    //TODO
    vector<Value*> args;
    for (auto expr : ctx->expr()) {
        args.push_back(visitExpr(expr)->getValue());
    }
    return args;
}

uptr<TBoxValue> TBoxCodeGenerator::visitExpr(TBoxParser::ExprContext *ctx) {
    //TODO
    return visitAssignExpr(ctx->assignExpr());
}

uptr<TBoxValue> TBoxCodeGenerator::visitLibrary(TBoxParser::LibraryContext *ctx) {
    //TODO
    return 0;
}

uptr<TBoxValue> TBoxCodeGenerator::visitImportStmt(TBoxParser::ImportStmtContext *ctx) {
    //TODO
    return 0;
}

Type* TBoxCodeGenerator::visitType(TBoxParser::TypeContext *ctx) {
    //TODO
    if (ctx->Float())
        return Type::getFloatTy(*Context);
    if (ctx->Function()) {
        std::vector<Type*> args;
        for (int i = 0 ; i < ctx->type().size() - 1 ; i ++) {
            args.push_back(visitType(ctx->type(i)));
        }
        return FunctionType::get(visitType(ctx->type(ctx->type().size() - 1)), args, false);
    }
    return Type::getInt32Ty(*Context);
}

pair<vector<Type*>, vector<string>> TBoxCodeGenerator::visitArgsNeed(TBoxParser::ArgsNeedContext *ctx) {
    //TODO
    vector<Type*> args_type;
    vector<string> args_name;
    for (int i = 0 ; i < ctx->type().size() ; i ++) {
        args_type.push_back(visitType(ctx->type(i)));
        args_name.push_back(ctx->Identifier(i)->getText());
    }
    return make_pair(args_type, args_name);
}

void TBoxCodeGenerator::visitProgram(TBoxParser::ProgramContext *ctx) {
    //TODO
    for (auto stmt : ctx->stmt()) {
        visitStmt(stmt);
    }
}

void TBoxCodeGenerator::visitStmt(TBoxParser::StmtContext *ctx) {
    //TODO
    if (ctx->expr()) {
        visitExpr(ctx->expr());
    }
    else if (ctx->returnStmt()) {
        visitReturnStmt(ctx->returnStmt());
    }
    else if (ctx->defVarStmt()) {
        visitDefVarStmt(ctx->defVarStmt());
    }
    else if (ctx->ifStmt()) {
        visitIfStmt(ctx->ifStmt());
    }
    else if (ctx->breakStmt()) {
        visitBreakStmt(ctx->breakStmt());
    }
    else if (ctx->continueStmt()) {
        visitContinueStmt(ctx->continueStmt());
    }
    else if (ctx->forStmt()) {
        visitForStmt(ctx->forStmt());
    }
    else if (ctx->whileStmt()) {
        visitWhileStmt(ctx->whileStmt());
    }
    else if (ctx->doWhileStmt()) {
        visitDoWhileStmt(ctx->doWhileStmt());
    }
}

void TBoxCodeGenerator::visitReturnStmt(TBoxParser::ReturnStmtContext *ctx) {
    //TODO
    if (ctx->expr()) {
        //FIXME:缓兵之计
        Builder->CreateRet(visitExpr(ctx->expr())->getValue());
        return;
    }
    Builder->CreateRetVoid();
}

void TBoxCodeGenerator::visitDefVarStmt(TBoxParser::DefVarStmtContext *ctx) {
    //TODO
    auto var = var_manager->createVar(ctx->Identifier()->getText(), visitType(ctx->type()));
    if (ctx->expr()) {
        Builder->CreateStore(visitExpr(ctx->expr())->getValue(), var);
    }
}

void TBoxCodeGenerator::visitStmtBody(TBoxParser::StmtBodyContext *ctx) {
    if (ctx->stmt()) {
        visitStmt(ctx->stmt());
    }
    else {
        visitProgram(ctx->program());
    }
}

void TBoxCodeGenerator::visitIfStmt(TBoxParser::IfStmtContext *ctx) {
    //TODO
    BasicBlock* block = BasicBlock::Create(*Context, "if_tmp");
    Builder->CreateBr(block);
    BasicBlock* end_block = BasicBlock::Create(*Context, "if_end_tmp");
    Function *func = Builder->GetInsertBlock()->getParent();
    for (int i = 0 ; i < ctx->logicOrExpr().size() ; i ++) {
        func->getBasicBlockList().push_back(block);
        Builder->SetInsertPoint(block);
        auto condition = Builder->CreateCmp(CmpInst::Predicate::ICMP_NE,
         visitLogicOrExpr(ctx->logicOrExpr(i))->getValue(), ConstantInt::get(Type::getInt1Ty(*Context), APInt(1, 0)),
         "if_cmp_tmp");
        BasicBlock* if_block = BasicBlock::Create(*Context, "if_tmp", func);
        BasicBlock* else_block = BasicBlock::Create(*Context, "else_tmp");
        Builder->CreateCondBr(condition, if_block, else_block);
        Builder->SetInsertPoint(if_block);
        visitStmtBody(ctx->stmtBody(i));
        Builder->CreateBr(end_block);
        block = else_block;
    }
    func->getBasicBlockList().push_back(block);
    if (ctx->stmtBody().size() > ctx->logicOrExpr().size()) {
        Builder->SetInsertPoint(block);
        visitStmtBody(ctx->stmtBody(ctx->stmtBody().size() - 1));
    }
    Builder->SetInsertPoint(block);
    Builder->CreateBr(end_block);
    func->getBasicBlockList().push_back(end_block);
    Builder->SetInsertPoint(end_block);
}

void TBoxCodeGenerator::visitForStmt(TBoxParser::ForStmtContext *ctx) {
    //TODO
    Function *func = Builder->GetInsertBlock()->getParent();
    visitStmt(ctx->stmt());
    BasicBlock* startBlock = BasicBlock::Create(*Context, "for_start_tmp", func);
    BasicBlock* oldEndBlock = endBlock;
    endBlock = BasicBlock::Create(*Context, "for_end_tmp");
    BasicBlock* programBlock = BasicBlock::Create(*Context, "for_program_tmp");
    BasicBlock* tailBlock = BasicBlock::Create(*Context, "for_program_tail_tmp");
    BasicBlock* oldConBlock = conBlock;
    conBlock = tailBlock;

    Builder->CreateBr(startBlock);

    Builder->SetInsertPoint(startBlock);
    auto condition = Builder->CreateCmp(CmpInst::Predicate::ICMP_NE,
         visitLogicOrExpr(ctx->logicOrExpr())->getValue(), ConstantInt::get(Type::getInt1Ty(*Context), APInt(1, 0)),
         "for_cmp_tmp");
    Builder->CreateCondBr(condition, programBlock, endBlock);

    func->getBasicBlockList().push_back(programBlock);

    Builder->SetInsertPoint(programBlock);
    visitStmtBody(ctx->stmtBody());
    Builder->CreateBr(tailBlock);

    func->getBasicBlockList().push_back(tailBlock);

    Builder->SetInsertPoint(tailBlock);
    visitExpr(ctx->expr());
    Builder->CreateBr(startBlock);

    func->getBasicBlockList().push_back(endBlock);

    Builder->SetInsertPoint(endBlock);
    endBlock = oldEndBlock;
    conBlock = oldConBlock;

}

void TBoxCodeGenerator::visitWhileStmt(TBoxParser::WhileStmtContext *ctx) {
    //TODO
    Function *func = Builder->GetInsertBlock()->getParent();
    BasicBlock* startBlock = BasicBlock::Create(*Context, "while_start_tmp", func);
    Builder->CreateBr(startBlock);
    BasicBlock* programBlock = BasicBlock::Create(*Context, "while_program_tmp");
    BasicBlock* oldEndBlock = endBlock;
    endBlock = BasicBlock::Create(*Context, "while_end_tmp");
    BasicBlock* oldConBlock = conBlock;
    conBlock = startBlock;
    Builder->SetInsertPoint(startBlock);

    auto condition = Builder->CreateCmp(CmpInst::Predicate::ICMP_NE,
         visitLogicOrExpr(ctx->logicOrExpr())->getValue(), ConstantInt::get(Type::getInt1Ty(*Context), APInt(321, 0)),
         "while_cmp_tmp");
    Builder->CreateCondBr(condition, programBlock, endBlock);

    func->getBasicBlockList().push_back(programBlock);
    Builder->SetInsertPoint(programBlock);
    visitStmtBody(ctx->stmtBody());
    Builder->CreateBr(startBlock);

    func->getBasicBlockList().push_back(endBlock);
    Builder->SetInsertPoint(endBlock);
    endBlock = oldEndBlock;
    conBlock = oldConBlock;
}

void TBoxCodeGenerator::visitDoWhileStmt(TBoxParser::DoWhileStmtContext *ctx) {
    Function *func = Builder->GetInsertBlock()->getParent();
    BasicBlock* programBlock = BasicBlock::Create(*Context, "do_while_program_tmp", func);
    BasicBlock* judgeBlock = BasicBlock::Create(*Context, "do_while_judge_tmp");
    BasicBlock* oldConBlock = conBlock;
    conBlock = judgeBlock;
    BasicBlock* oldEndBlock = endBlock;
    endBlock = BasicBlock::Create(*Context, "do_while_end_tmp");

    Builder->CreateBr(programBlock);

    Builder->SetInsertPoint(programBlock);
    visitProgram(ctx->program());
    Builder->CreateBr(judgeBlock);

    func->getBasicBlockList().push_back(judgeBlock);

    Builder->SetInsertPoint(judgeBlock);
    auto condition = Builder->CreateCmp(CmpInst::Predicate::ICMP_NE,
         visitLogicOrExpr(ctx->logicOrExpr())->getValue(), ConstantInt::get(Type::getInt1Ty(*Context), APInt(1, 0)),
         "do_while_cmp_tmp");
    Builder->CreateCondBr(condition, programBlock, endBlock);

    func->getBasicBlockList().push_back(endBlock);
    Builder->SetInsertPoint(endBlock);
    endBlock = oldEndBlock;
    conBlock = oldConBlock;
    //TODO
}

void TBoxCodeGenerator::visitBreakStmt(TBoxParser::BreakStmtContext *ctx) {
    //TODO
    if (! endBlock) {
        err() << "error!\n";
        return;
    }
    Builder->CreateBr(endBlock);
}

void TBoxCodeGenerator::visitContinueStmt(TBoxParser::ContinueStmtContext *ctx) {
    //TODO
    if (! conBlock) {
        err() << "error!\n";
        return;
    }
    Builder->CreateBr(conBlock);
}

Function* TBoxCodeGenerator::visitDefFuncStmt(Module* mod, TBoxParser::DefFuncStmtContext *ctx) {
    //TODO
    std::string func_name = ctx->Identifier()->getText();
    Function* func;
    if (mod->getFunction(func_name)) {
        func = mod->getFunction(func_name);
    }
    else {
        auto arg_list = visitArgsNeed(ctx->argsNeed());
        FunctionType* func_type = FunctionType::get(visitType(ctx->type()), arg_list.first, false);
        func = Function::Create(func_type, Function::ExternalLinkage, ctx->Identifier()->getText(), mod);

        short index = 0;
        for (auto &arg : func->args())
            arg.setName(arg_list.second[index++]);
    }

    BasicBlock* block = BasicBlock::Create(*Context, "entry", func);
    Builder->SetInsertPoint(block);

    var_manager = make_unique<VariableTableManager>(func, mod);
    for (auto &arg : func->args()) {
        string name = "";
        name += arg.getName();
        Builder->CreateStore(&arg, var_manager->createVar(name, arg.getType()));
    }

    visitProgram(ctx->program());

    verifyFunction(*func);

    return func;
}

llvm::Function* TBoxCodeGenerator::visitExternFuncStmt(llvm::Module* mod, TBoxParser::ExternFuncStmtContext *ctx) {
    //TODO
    auto arg_list = visitArgsNeed(ctx->argsNeed());
    FunctionType* func_type = FunctionType::get(visitType(ctx->type()), arg_list.first, false);
    Function* func = Function::Create(func_type, Function::ExternalLinkage, ctx->Identifier()->getText(), mod);

    short index = 0;
    for (auto &arg : func->args())
        arg.setName(arg_list.second[index++]);
    return func;
}

void TBoxCodeGenerator::visitDefGlobalVarStmt(Module* mod, TBoxParser::DefGlobalVarStmtContext *ctx) {
    //TODO
    auto def_ctx = ctx->defVarStmt();
    auto GV = new GlobalVariable(*mod, visitType(def_ctx->type()), false,
     GlobalVariable::ExternalLinkage, 0,
     def_ctx->Identifier()->getText());
    GV->setInitializer(ConstantInt::get(*Context, APInt(32, 0)));
    if (def_ctx->expr()) {
        globalVariables[GV] = def_ctx->expr();
    }
}

void TBoxCodeGenerator::createSystemFunctions(Module* mod) {
    //TODO
    FunctionType* func_type = FunctionType::get(Type::getVoidTy(*Context), vector<Type*>(), false);
    Function* func = Function::Create(func_type, Function::LinkOnceAnyLinkage, "init_tbox_global_variables", mod);

    short index = 0;

    BasicBlock* block = BasicBlock::Create(*Context, "entry", func);

    verifyFunction(*func);
}

void TBoxCodeGenerator::createSomethingInInit(Module* mod) {
    //TODO
    //FIXME
    Function* initFunc = mod->getFunction("init_tbox_global_variables");
    IRBuilder<> tmpGlobal(&initFunc->getEntryBlock(), initFunc->getEntryBlock().begin());
    IRBuilder<>* originalBuilder = Builder;
    Builder = &tmpGlobal;
    for (auto gv_exp : globalVariables) {
        Builder->CreateStore(visitExpr(gv_exp.second)->getValue(), gv_exp.first);
    }
    Builder->CreateRetVoid();
    Builder = originalBuilder;
}

void TBoxCodeGenerator::createSomethingInEntry(Module* mod) {
    //TODO
    bool flag = false;
    if (! mod->getFunction("main")) {
        FunctionType* func_type = FunctionType::get(Type::getInt32Ty(*Context), vector<Type*>(), false);
        Function* func = Function::Create(func_type, Function::LinkOnceAnyLinkage, "main", mod);

        short index = 0;

        BasicBlock* block = BasicBlock::Create(*Context, "entry", func);

        verifyFunction(*func);
        flag = true;
    }
    Function* mainFunc = mod->getFunction("main");
    IRBuilder<> tmp(&mainFunc->getEntryBlock(), mainFunc->getEntryBlock().begin());
    tmp.CreateCall(mod->getFunction("init_tbox_global_variables"), std::vector<Value*>());
    if (flag) {
        tmp.CreateRet(ConstantInt::get(*Context, APInt(32, 0)));
    }
}

Module* TBoxCodeGenerator::visitStat(Module* mod, TBoxParser::StatContext *ctx) {
    //TODO
    curMod = mod;
    createSystemFunctions(mod);
    for (auto stmt : ctx->statStmts()) {
        if (stmt->defFuncStmt()) {
            auto func = visitDefFuncStmt(mod, stmt->defFuncStmt());
        }
        else if (stmt->externFuncStmt()) {
            auto func = visitExternFuncStmt(mod, stmt->externFuncStmt());
        }
        else if (stmt->defGlobalVarStmt()) {
            visitDefGlobalVarStmt(mod, stmt->defGlobalVarStmt());
        }
    }
    createSomethingInInit(mod);
    createSomethingInEntry(mod);
    return mod;
}

