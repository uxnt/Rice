
// Generated from ./TBox.g4 by ANTLR 4.7.2


#include "TBoxCodeGenerator.h"

using namespace std;
using namespace tbox::language;
using namespace llvm;

TBoxNormalValue::TBoxNormalValue() {
}

TBoxNormalValue::TBoxNormalValue(llvm::Value* value) : value(value){
}

llvm::Value* TBoxNormalValue::getValue() {
    return value;
}

TBoxVariable::TBoxVariable() {
}

TBoxVariable::TBoxVariable(llvm::Value* address) : address(address){
}

llvm::Value* TBoxVariable::getValue() {
    return Builder->CreateLoad(address, "load_tmp");
}

llvm::Value* TBoxVariable::getAddress() {
    return address;
}


VariableTableManager::VariableTableManager(Function* func_ptr, llvm::Module* mod_ptr) : function(func_ptr), mod(mod_ptr) {
}

AllocaInst* VariableTableManager::createVar(string var_name) {
    //TODO
    return variableTable[var_name] = Builder->CreateAlloca(Type::getInt32Ty(*Context), 0, var_name.c_str());
}

Value* VariableTableManager::getVar(string var_name) {
    //TODO
    if (hasVar(var_name)) {
        return variableTable[var_name];
    }
    else if (mod->getGlobalVariable(var_name)) {
        return mod->getGlobalVariable(var_name);
    }
    return 0;
}

Value* VariableTableManager::getOrCreateVar(string var_name) {
    //TODO
    if (hasVar(var_name)) {
        return getVar(var_name);
    }
    else if (mod->getGlobalVariable(var_name)) {
        return mod->getGlobalVariable(var_name);
    }
    return createVar(var_name);
}

bool VariableTableManager::hasVar(string var_name) {
    //TODO
    return variableTable[var_name] || mod->getGlobalVariable(var_name);
}

void VariableTableManager::removeVar(string var_name) {
    //TODO
    variableTable[var_name] = 0;
}

Value* TBoxCodeGenerator::visitNum(TBoxParser::NumContext *ctx) {
    //TODO
    if (ctx->FloatNum()) {
        return ConstantFP::get(*Context, APFloat(atof(ctx->FloatNum()->getText().c_str())));
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
    return ConstantInt::get(*Context, APInt(32, value));
}

Value* TBoxCodeGenerator::visitConstant(TBoxParser::ConstantContext *ctx) {
    //TODO
    if (ctx->num()) {
        return visitNum(ctx->num());
    }
    else if (ctx->StringConstant()) {
        string str = ctx->StringConstant()->getText();
        str.erase(0).erase(str.length() - 1);
        //TODO
    }
    return 0;
}

uptr<TBoxValue> TBoxCodeGenerator::visitPrimExpr(TBoxParser::PrimExprContext *ctx) {
    //TODO
    if (ctx->constant()) {
        return uptr<TBoxValue>((TBoxValue*)new TBoxNormalValue(visitConstant(ctx->constant())));
    }
    else if (ctx->Identifier()) {
        return uptr<TBoxValue>((TBoxValue*)new TBoxVariable(var_manager->getVar(ctx->Identifier()->getText())));
    }
    else if (ctx->expr()) {
        return uptr<TBoxValue>((TBoxValue*)new TBoxNormalValue(visitExpr(ctx->expr())));
    }
    return 0;
}

uptr<TBoxValue> TBoxCodeGenerator::visitPostExpr(TBoxParser::PostExprContext *ctx) {
    //TODO
    if (ctx->postOp().size() == 0 && ctx->incOrDecOp().size() == 0) {
        return visitPrimExpr(ctx->primExpr());
    }
    for (auto op : ctx->postOp()) {
        if (op->LeftBracket()) {
            //array
        }
        if (op->LeftParen()) {
            //function call
            auto args = visitArgs(op->args());
            string func_name = ctx->primExpr()->Identifier()->getText();
            return uptr<TBoxValue>((TBoxValue*)new TBoxNormalValue(Builder->CreateCall(curMod->getFunction(func_name), args, "call_tmp")));
        }
        if (op->Dot()) {
            //object
        }
    }
    auto value = visitPrimExpr(ctx->primExpr())->getValue();
    auto origin_value = visitPrimExpr(ctx->primExpr());
    for (auto op : ctx->incOrDecOp()) {
        value = visitIncOrDecOp(op)(value);
    }
    auto var = visitPrimExpr(ctx->primExpr());
    Builder->CreateStore(var->getValue(), ((TBoxVariable*)var.get())->getAddress());
    return origin_value;
}

Value* TBoxCodeGenerator::visitUnaryExpr(TBoxParser::UnaryExprContext *ctx) {
    //TODO
    if (ctx->postExpr()) {
        return visitPostExpr(ctx->postExpr())->getValue();
    }
    return 0;
}

Value* TBoxCodeGenerator::visitUnaryOp(TBoxParser::UnaryOpContext *ctx) {
    //TODO
    return 0;
}

function<Value*(Value*)> TBoxCodeGenerator::visitIncOrDecOp(TBoxParser::IncOrDecOpContext *ctx) {
    //TODO
    if (ctx->Increase()) {
        return [](Value* o){return Builder->CreateAdd(o, ConstantInt::get(Type::getInt32Ty(*Context), APInt(32, 1)));};
    }
    else if (ctx->Decrease()) {
        return [](Value* o){return Builder->CreateSub(o, ConstantInt::get(Type::getInt32Ty(*Context), APInt(32, 1)));};
    }
    return [](Value* o){return (Value*)0;};
}

Value* TBoxCodeGenerator::visitCastExpr(TBoxParser::CastExprContext *ctx) {
    //TODO
    if (ctx->unaryExpr()) {
        return visitUnaryExpr(ctx->unaryExpr());
    }
    if (ctx->num()) {
        return visitNum(ctx->num());
    }
    return 0;
}

Value* TBoxCodeGenerator::visitMulExpr(TBoxParser::MulExprContext *ctx) {
    //TODO
    Value* left = visitCastExpr(ctx->castExpr(0));
    for (int i = 0 ; i < ctx->mulOp().size() ; i ++) {
        Value* right = visitCastExpr(ctx->castExpr(i + 1));
        left = visitMulOp(ctx->mulOp(i))(left, right);
    }
    return left;
}

function<Value*(Value*, Value*)> TBoxCodeGenerator::visitMulOp(TBoxParser::MulOpContext *ctx) {
    if (ctx->Star()) {
        return [](Value* l, Value* r) {
            return Builder->CreateMul(l, r, "mul_tmp");
        };
    }
    else if (ctx->Div()) {
        return [](Value* l, Value* r) {
            return Builder->CreateSDiv(l, r, "div_tmp");
        };
    }
    else if (ctx->Mod()) {
        return [](Value* l, Value* r) {
            return Builder->CreateSRem(l, r, "mod_tmp");
        };
    }
    //TODO
    return [](Value* l, Value* r){return (Value*)0;};
}

Value* TBoxCodeGenerator::visitAddExpr(TBoxParser::AddExprContext *ctx) {
    //TODO
    Value* left = visitMulExpr(ctx->mulExpr(0));
    for (int i = 0 ; i < ctx->addOp().size() ; i ++) {
        Value* right = visitMulExpr(ctx->mulExpr(i + 1));
        left = visitAddOp(ctx->addOp(i))(left, right);
    }
    return left;
}

function<Value*(Value*, Value*)> TBoxCodeGenerator::visitAddOp(TBoxParser::AddOpContext *ctx) {
    //TODO
    if (ctx->Plus()) {
        return [](Value* l, Value* r) {
            return Builder->CreateAdd(l, r, "add_tmp");
        };
    }
    else if (ctx->Minus()) {
        return [](Value* l, Value* r) {
            return Builder->CreateSub(l, r, "sub_tmp");
        };
    }
    return [](Value* l, Value* r){return (Value*)0;};
}

Value* TBoxCodeGenerator::visitShiftExpr(TBoxParser::ShiftExprContext *ctx) {
    //TODO
    Value* left = visitAddExpr(ctx->addExpr(0));
    for (int i = 0 ; i < ctx->shiftOp().size() ; i ++) {
        Value* right = visitAddExpr(ctx->addExpr(i + 1));
        left = visitShiftOp(ctx->shiftOp(i))(left, right);
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

Value* TBoxCodeGenerator::visitCmpExpr(TBoxParser::CmpExprContext *ctx) {
    //TODO
    Value* left = visitShiftExpr(ctx->shiftExpr(0));
    for (int i = 0 ; i < ctx->cmpOp().size() ; i ++) {
        Value* right = visitShiftExpr(ctx->shiftExpr(i + 1));
        left = Builder->CreateCmp(visitCmpOp(ctx->cmpOp(i)), left, right, "cmp_tmp");
    }
    return left;
}

CmpInst::Predicate TBoxCodeGenerator::visitCmpOp(TBoxParser::CmpOpContext *ctx) {
    //TODO
    if (ctx->Equal()) {
        return CmpInst::Predicate::ICMP_EQ;
    }
    else if (ctx->NotEqual()) {
        return CmpInst::Predicate::ICMP_EQ;
    }
    else if (ctx->Greater()) {
        return CmpInst::Predicate::ICMP_SGT;
    }
    else if (ctx->GreaterEqual()) {
        return CmpInst::Predicate::ICMP_SGE;
    }
    else if (ctx->Less()) {
        return CmpInst::Predicate::ICMP_SLT;
    }
    else if (ctx->LessEqual()) {
        return CmpInst::Predicate::ICMP_SLE;
    }
    return CmpInst::Predicate::BAD_ICMP_PREDICATE;
}

Value* TBoxCodeGenerator::visitAndExpr(TBoxParser::AndExprContext *ctx) {
    //TODO
    Value* left = visitCmpExpr(ctx->cmpExpr(0));
    for (int i = 0 ; i < ctx->And().size() ; i ++) {
        Value* right = visitCmpExpr(ctx->cmpExpr(i + 1));
        left = Builder->CreateAnd(left, right, "and_tmp");
    }
    return left;
}

Value* TBoxCodeGenerator::visitXorExpr(TBoxParser::XorExprContext *ctx) {
    //TODO
    Value* left = visitAndExpr(ctx->andExpr(0));
    for (int i = 0 ; i < ctx->Xor().size() ; i ++) {
        Value* right = visitAndExpr(ctx->andExpr(i + 1));
        left = Builder->CreateXor(left, right, "xor_tmp");
    }
    return left;
}

Value* TBoxCodeGenerator::visitOrExpr(TBoxParser::OrExprContext *ctx) {
    //TODO
    Value* left = visitXorExpr(ctx->xorExpr(0));
    for (int i = 0 ; i < ctx->Or().size() ; i ++) {
        Value* right = visitXorExpr(ctx->xorExpr(i + 1));
        left = Builder->CreateOr(left, right, "or_tmp");
    }
    return left;
}

Value* TBoxCodeGenerator::visitLogicAndExpr(TBoxParser::LogicAndExprContext *ctx) {
    //TODO
    return visitOrExpr(ctx->orExpr(0));
}

Value* TBoxCodeGenerator::visitLogicOrExpr(TBoxParser::LogicOrExprContext *ctx) {
    //TODO
    return visitLogicAndExpr(ctx->logicAndExpr(0));
}

Value* TBoxCodeGenerator::visitQuesExpr(TBoxParser::QuesExprContext *ctx) {
    //TODO
    Value* condition = visitLogicOrExpr(ctx->logicOrExpr());
    if (ctx->expr()) {
        Value* left = visitExpr(ctx->expr());
        Value* right = visitQuesExpr(ctx->quesExpr());
        return Builder->CreateSelect(condition, left, right, "ques_tmp");
    }
    return condition;
}

Value* TBoxCodeGenerator::visitAssignExpr(TBoxParser::AssignExprContext *ctx) {
    //TODO
    if (ctx->constant()) {
        return visitConstant(ctx->constant());
    }
    if (ctx->quesExpr()) {
        return visitQuesExpr(ctx->quesExpr());
    }
    if (ctx->postExpr()) {
        Builder->CreateStore(visitAssignExpr(ctx->assignExpr()), var_manager->getVar(ctx->postExpr()->primExpr()->Identifier()->getText()));
    }
    return 0;
}

Value* TBoxCodeGenerator::visitAssignOp(TBoxParser::AssignOpContext *ctx) {
    //TODO
    return 0;
}

vector<Value*> TBoxCodeGenerator::visitArgs(TBoxParser::ArgsContext *ctx) {
    //TODO
    vector<Value*> args;
    for (auto expr : ctx->expr()) {
        args.push_back(visitExpr(expr));
    }
    return args;
}

Value* TBoxCodeGenerator::visitExpr(TBoxParser::ExprContext *ctx) {
    //TODO
    return visitAssignExpr(ctx->assignExpr());
}

Value* TBoxCodeGenerator::visitLibrary(TBoxParser::LibraryContext *ctx) {
    //TODO
    return 0;
}

Value* TBoxCodeGenerator::visitImportStmt(TBoxParser::ImportStmtContext *ctx) {
    //TODO
    return 0;
}

Type* TBoxCodeGenerator::visitType(TBoxParser::TypeContext *ctx) {
    //TODO
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
        Builder->CreateRet(visitExpr(ctx->expr()));
        return;
    }
    Builder->CreateRetVoid();
}

void TBoxCodeGenerator::visitDefVarStmt(TBoxParser::DefVarStmtContext *ctx) {
    //TODO
    auto var = var_manager->getOrCreateVar(ctx->Identifier()->getText());
    if (ctx->expr()) {
        Builder->CreateStore(visitExpr(ctx->expr()), var);
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
    BasicBlock* end_block = BasicBlock::Create(*Context, "if_end_tmp");
    Function *func = Builder->GetInsertBlock()->getParent();
    for (int i = 0 ; i < ctx->logicOrExpr().size() ; i ++) {
        func->getBasicBlockList().push_back(block);
        Builder->SetInsertPoint(block);
        auto condition = Builder->CreateCmp(CmpInst::Predicate::ICMP_NE,
         visitLogicOrExpr(ctx->logicOrExpr(i)), ConstantInt::get(Type::getInt32Ty(*Context), APInt(32, 0)),
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
    func->getBasicBlockList().push_back(end_block);
    Builder->SetInsertPoint(end_block);
}

void TBoxCodeGenerator::visitForStmt(TBoxParser::ForStmtContext *ctx) {
    //TODO
}

void TBoxCodeGenerator::visitWhileStmt(TBoxParser::WhileStmtContext *ctx) {
    //TODO
    Function *func = Builder->GetInsertBlock()->getParent();
    BasicBlock* startBlock = BasicBlock::Create(*Context, "while_start_tmp", func);
    BasicBlock* programBlock = BasicBlock::Create(*Context, "while_program_tmp");
    endBlock = BasicBlock::Create(*Context, "while_end_tmp");
    Builder->SetInsertPoint(startBlock);

    auto condition = Builder->CreateCmp(CmpInst::Predicate::ICMP_NE,
         visitLogicOrExpr(ctx->logicOrExpr()), ConstantInt::get(Type::getInt32Ty(*Context), APInt(32, 0)),
         "while_cmp_tmp");
    Builder->CreateCondBr(condition, programBlock, endBlock);

    func->getBasicBlockList().push_back(programBlock);
    Builder->SetInsertPoint(programBlock);
    visitStmtBody(ctx->stmtBody());
    Builder->CreateBr(startBlock);

    func->getBasicBlockList().push_back(endBlock);
    Builder->SetInsertPoint(endBlock);
    endBlock = 0;
}

void TBoxCodeGenerator::visitDoWhileStmt(TBoxParser::DoWhileStmtContext *ctx) {
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
        Builder->CreateStore(&arg, var_manager->createVar(name));
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
        Builder->CreateStore(visitExpr(gv_exp.second), gv_exp.first);
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

