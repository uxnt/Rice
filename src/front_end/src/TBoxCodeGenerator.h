
#pragma once

#include "antlr4-runtime.h"
#include "TBoxVisitor.h"
#include "TBoxHeader.h"

namespace tbox::language {

class VariableTableManager {
    std::map<std::string, llvm::AllocaInst*> variableTable;
    llvm::Function* function;
    llvm::Module* mod;
public:
    VariableTableManager(llvm::Function* func_ptr, llvm::Module* mod_ptr);
    llvm::AllocaInst* createVar(std::string var_name);
    llvm::Value* getVar(std::string var_name);
    llvm::Value* getOrCreateVar(std::string var_name);
    bool hasVar(std::string var_name);
    void removeVar(std::string var_name);
};

class TBoxCodeGenerator {
    std::unique_ptr<VariableTableManager> var_manager;
    std::map<llvm::GlobalVariable*, TBoxParser::ExprContext*> globalVariables;
    llvm::Module* curMod;
    llvm::BasicBlock* endBlock;
    virtual void createSystemFunctions(llvm::Module* mod);
    virtual void createSomethingInInit(llvm::Module* mod);
    virtual void createSomethingInEntry(llvm::Module* mod);
public:
    virtual llvm::Value* visitNum(TBoxParser::NumContext *ctx);

    virtual llvm::Value* visitConstant(TBoxParser::ConstantContext *ctx);

    virtual llvm::Value* visitPrimExpr(TBoxParser::PrimExprContext *ctx);

    virtual llvm::Value* visitPostExpr(TBoxParser::PostExprContext *ctx);

    virtual llvm::Value* visitUnaryExpr(TBoxParser::UnaryExprContext *ctx);

    virtual llvm::Value* visitUnaryOp(TBoxParser::UnaryOpContext *ctx);

    virtual llvm::Value* visitIncOrDecOp(TBoxParser::IncOrDecOpContext *ctx);

    virtual llvm::Value* visitCastExpr(TBoxParser::CastExprContext *ctx);

    virtual llvm::Value* visitMulExpr(TBoxParser::MulExprContext *ctx);

    virtual std::function<llvm::Value*(llvm::Value*, llvm::Value*)> visitMulOp(TBoxParser::MulOpContext *ctx);

    virtual llvm::Value* visitAddExpr(TBoxParser::AddExprContext *ctx);

    virtual std::function<llvm::Value*(llvm::Value*, llvm::Value*)> visitAddOp(TBoxParser::AddOpContext *ctx);

    virtual llvm::Value* visitShiftExpr(TBoxParser::ShiftExprContext *ctx);

    virtual std::function<llvm::Value*(llvm::Value*, llvm::Value*)> visitShiftOp(TBoxParser::ShiftOpContext *ctx);

    virtual llvm::Value* visitCmpExpr(TBoxParser::CmpExprContext *ctx);

    virtual llvm::CmpInst::Predicate visitCmpOp(TBoxParser::CmpOpContext *ctx);

    virtual llvm::Value* visitAndExpr(TBoxParser::AndExprContext *ctx);

    virtual llvm::Value* visitXorExpr(TBoxParser::XorExprContext *ctx);

    virtual llvm::Value* visitOrExpr(TBoxParser::OrExprContext *ctx);

    virtual llvm::Value* visitLogicAndExpr(TBoxParser::LogicAndExprContext *ctx);

    virtual llvm::Value* visitLogicOrExpr(TBoxParser::LogicOrExprContext *ctx);

    virtual llvm::Value* visitQuesExpr(TBoxParser::QuesExprContext *ctx);

    virtual llvm::Value* visitAssignExpr(TBoxParser::AssignExprContext *ctx);

    virtual llvm::Value* visitAssignOp(TBoxParser::AssignOpContext *ctx);

    virtual std::vector<llvm::Value*> visitArgs(TBoxParser::ArgsContext *ctx);

    virtual llvm::Value* visitExpr(TBoxParser::ExprContext *ctx);

    virtual llvm::Value* visitLibrary(TBoxParser::LibraryContext *ctx);

    virtual llvm::Value* visitImportStmt(TBoxParser::ImportStmtContext *ctx);

    virtual llvm::Type* visitType(TBoxParser::TypeContext *ctx);

    virtual void visitStmtBody(TBoxParser::StmtBodyContext *ctx);

    virtual void visitBreakStmt(TBoxParser::BreakStmtContext *ctx);

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
