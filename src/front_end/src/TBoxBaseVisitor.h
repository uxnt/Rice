
// Generated from ./TBox.g4 by ANTLR 4.7.2

#pragma once


#include "antlr4-runtime.h"
#include "TBoxVisitor.h"


namespace tbox::language {

/**
 * This class provides an empty implementation of TBoxVisitor, which can be
 * extended to create a visitor which only needs to handle a subset of the available methods.
 */
class  TBoxBaseVisitor : public TBoxVisitor {
public:

  virtual antlrcpp::Any visitNum(TBoxParser::NumContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitConstant(TBoxParser::ConstantContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitPrimExpr(TBoxParser::PrimExprContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitPostExpr(TBoxParser::PostExprContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitPostOp(TBoxParser::PostOpContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitUnaryExpr(TBoxParser::UnaryExprContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitUnaryOp(TBoxParser::UnaryOpContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitIncOrDecOp(TBoxParser::IncOrDecOpContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCastExpr(TBoxParser::CastExprContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitMulExpr(TBoxParser::MulExprContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitMulOp(TBoxParser::MulOpContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAddExpr(TBoxParser::AddExprContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAddOp(TBoxParser::AddOpContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitShiftExpr(TBoxParser::ShiftExprContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitShiftOp(TBoxParser::ShiftOpContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCmpExpr(TBoxParser::CmpExprContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCmpOp(TBoxParser::CmpOpContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAndExpr(TBoxParser::AndExprContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitXorExpr(TBoxParser::XorExprContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitOrExpr(TBoxParser::OrExprContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitLogicAndExpr(TBoxParser::LogicAndExprContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitLogicOrExpr(TBoxParser::LogicOrExprContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitQuesExpr(TBoxParser::QuesExprContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitSigmaExpr(TBoxParser::SigmaExprContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAssignExpr(TBoxParser::AssignExprContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAssignOp(TBoxParser::AssignOpContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitArgs(TBoxParser::ArgsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitExpr(TBoxParser::ExprContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitLibrary(TBoxParser::LibraryContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitImportStmt(TBoxParser::ImportStmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitType(TBoxParser::TypeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitArgsNeed(TBoxParser::ArgsNeedContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitProgram(TBoxParser::ProgramContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitStmt(TBoxParser::StmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitReturnStmt(TBoxParser::ReturnStmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitDefVarStmt(TBoxParser::DefVarStmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitStmtBody(TBoxParser::StmtBodyContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitIfStmt(TBoxParser::IfStmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitForStmt(TBoxParser::ForStmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitWhileStmt(TBoxParser::WhileStmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitDoWhileStmt(TBoxParser::DoWhileStmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitBreakStmt(TBoxParser::BreakStmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitContinueStmt(TBoxParser::ContinueStmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitDefFuncStmt(TBoxParser::DefFuncStmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitDefGlobalVarStmt(TBoxParser::DefGlobalVarStmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitExternFuncStmt(TBoxParser::ExternFuncStmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitStat(TBoxParser::StatContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitStatStmts(TBoxParser::StatStmtsContext *ctx) override {
    return visitChildren(ctx);
  }


};

}  // namespace tbox::language
