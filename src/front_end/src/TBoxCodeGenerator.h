
#pragma once

#include "antlr4-runtime.h"
#include "TBoxVisitor.h"
#include "TBoxHeader.h"

namespace tbox::language {

class TBoxValue {
public:
    virtual llvm::Value* getValue() = 0;
    virtual llvm::Type* getType() = 0;
};

class TBoxNormalValue {
    llvm::Value* value;
    llvm::Type* type;
public:
    TBoxNormalValue();
    TBoxNormalValue(llvm::Value* value, llvm::Type* type);
    virtual llvm::Value* getValue();
    virtual llvm::Type* getType();
};

class TBoxVariable : TBoxValue{
    llvm::Value* address;
    llvm::Type* type;
public:
    TBoxVariable();
    TBoxVariable(llvm::Value* address, llvm::Type* type);
    virtual llvm::Value* getValue();
    virtual llvm::Value* getAddress();
    virtual llvm::Type* getType();
};

class VariableTableManager {
    std::map<std::string, llvm::AllocaInst*> variableTable;
    std::map<std::string, llvm::Type*> typeTable;
    llvm::Function* function;
    llvm::Module* mod;
public:
    VariableTableManager(llvm::Function* func_ptr, llvm::Module* mod_ptr);
    llvm::AllocaInst* createVar(std::string var_name, llvm::Type* ty);
    std::uptr<TBoxValue> getVar(std::string var_name);
    llvm::Type* getType(std::string var_name);
    bool hasVar(std::string var_name);
    void removeVar(std::string var_name);
};

class TBoxCodeGenerator {
    std::uptr<VariableTableManager> var_manager;
    std::map<llvm::GlobalVariable*, TBoxParser::ExprContext*> globalVariables;
    llvm::Module* curMod;
    llvm::BasicBlock* endBlock;
    llvm::BasicBlock* conBlock;
    virtual void createSystemFunctions(llvm::Module* mod);
    virtual void createSomethingInInit(llvm::Module* mod);
    virtual void createSomethingInEntry(llvm::Module* mod);
public:
    virtual std::uptr<TBoxValue> visitNum(TBoxParser::NumContext *ctx);

    virtual std::uptr<TBoxValue> visitConstant(TBoxParser::ConstantContext *ctx);

    virtual std::uptr<TBoxValue> visitPrimExpr(TBoxParser::PrimExprContext *ctx);

    virtual std::uptr<TBoxValue> visitPostExpr(TBoxParser::PostExprContext *ctx);

    virtual std::uptr<TBoxValue> visitUnaryExpr(TBoxParser::UnaryExprContext *ctx);

    virtual std::function<llvm::Value*(llvm::Value*)> visitUnaryOp(TBoxParser::UnaryOpContext *ctx);

    virtual std::function<llvm::Value*(llvm::Value*)> visitIncOrDecOp(TBoxParser::IncOrDecOpContext *ctx);

    virtual std::uptr<TBoxValue> visitCastExpr(TBoxParser::CastExprContext *ctx);

    virtual std::uptr<TBoxValue> visitMulExpr(TBoxParser::MulExprContext *ctx);

    virtual std::function<llvm::Value*(llvm::Value*, llvm::Value*)> visitMulOp(TBoxParser::MulOpContext *ctx);

    virtual std::uptr<TBoxValue> visitAddExpr(TBoxParser::AddExprContext *ctx);

    virtual std::function<llvm::Value*(llvm::Value*, llvm::Value*)> visitAddOp(TBoxParser::AddOpContext *ctx);

    virtual std::uptr<TBoxValue> visitShiftExpr(TBoxParser::ShiftExprContext *ctx);

    virtual std::function<llvm::Value*(llvm::Value*, llvm::Value*)> visitShiftOp(TBoxParser::ShiftOpContext *ctx);

    virtual std::uptr<TBoxValue> visitCmpExpr(TBoxParser::CmpExprContext *ctx);

    virtual llvm::CmpInst::Predicate visitCmpOp(TBoxParser::CmpOpContext *ctx, llvm::Type::TypeID ty);

    virtual std::uptr<TBoxValue> visitAndExpr(TBoxParser::AndExprContext *ctx);

    virtual std::uptr<TBoxValue> visitXorExpr(TBoxParser::XorExprContext *ctx);

    virtual std::uptr<TBoxValue> visitOrExpr(TBoxParser::OrExprContext *ctx);

    virtual std::uptr<TBoxValue> visitLogicAndExpr(TBoxParser::LogicAndExprContext *ctx);

    virtual std::uptr<TBoxValue> visitLogicOrExpr(TBoxParser::LogicOrExprContext *ctx);

    virtual std::uptr<TBoxValue> visitQuesExpr(TBoxParser::QuesExprContext *ctx);

    virtual std::uptr<TBoxValue> visitAssignExpr(TBoxParser::AssignExprContext *ctx);

    virtual std::function<llvm::Value*(llvm::Value*, llvm::Value*)> visitAssignOp(TBoxParser::AssignOpContext *ctx);

    virtual std::vector<llvm::Value*> visitArgs(TBoxParser::ArgsContext *ctx);

    virtual std::uptr<TBoxValue> visitExpr(TBoxParser::ExprContext *ctx);

    virtual std::uptr<TBoxValue> visitLibrary(TBoxParser::LibraryContext *ctx);

    virtual std::uptr<TBoxValue> visitImportStmt(TBoxParser::ImportStmtContext *ctx);

    virtual llvm::Type* visitType(TBoxParser::TypeContext *ctx);

    virtual void visitStmtBody(TBoxParser::StmtBodyContext *ctx);

    virtual void visitBreakStmt(TBoxParser::BreakStmtContext *ctx);

    virtual void visitContinueStmt(TBoxParser::ContinueStmtContext *ctx);

    virtual std::pair<std::vector<llvm::Type*>, std::vector<std::string>>  visitArgsNeed(TBoxParser::ArgsNeedContext *ctx);

    virtual void visitProgram(TBoxParser::ProgramContext *ctx);

    virtual void visitStmt(TBoxParser::StmtContext *ctx);

    virtual void visitReturnStmt(TBoxParser::ReturnStmtContext *ctx);

    virtual void visitDefVarStmt(TBoxParser::DefVarStmtContext *ctx);

    virtual void visitIfStmt(TBoxParser::IfStmtContext *ctx);

    virtual void visitForStmt(TBoxParser::ForStmtContext *ctx);

    virtual void visitWhileStmt(TBoxParser::WhileStmtContext *ctx);

    virtual void visitDoWhileStmt(TBoxParser::DoWhileStmtContext *ctx);

    virtual llvm::Function* visitDefFuncStmt(llvm::Module* mod, TBoxParser::DefFuncStmtContext *ctx);

    virtual llvm::Function* visitExternFuncStmt(llvm::Module* mod, TBoxParser::ExternFuncStmtContext *ctx);

    virtual void visitDefGlobalVarStmt(llvm::Module* mod, TBoxParser::DefGlobalVarStmtContext *ctx);

    virtual llvm::Module* visitStat(llvm::Module* mod, TBoxParser::StatContext *ctx);
};

}    // namespace tbox::language
