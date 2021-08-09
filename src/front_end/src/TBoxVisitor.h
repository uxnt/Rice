
// Generated from ./TBox.g4 by ANTLR 4.7.2

#pragma once


#include "antlr4-runtime.h"
#include "TBoxParser.h"


namespace tbox::language {

/**
 * This class defines an abstract visitor for a parse tree
 * produced by TBoxParser.
 */
class  TBoxVisitor : public antlr4::tree::AbstractParseTreeVisitor {
public:

  /**
   * Visit parse trees produced by TBoxParser.
   */
    virtual antlrcpp::Any visitNum(TBoxParser::NumContext *context) = 0;

    virtual antlrcpp::Any visitConstant(TBoxParser::ConstantContext *context) = 0;

    virtual antlrcpp::Any visitPrimExpr(TBoxParser::PrimExprContext *context) = 0;

    virtual antlrcpp::Any visitPostExpr(TBoxParser::PostExprContext *context) = 0;

    virtual antlrcpp::Any visitPostOp(TBoxParser::PostOpContext *context) = 0;

    virtual antlrcpp::Any visitUnaryExpr(TBoxParser::UnaryExprContext *context) = 0;

    virtual antlrcpp::Any visitUnaryOp(TBoxParser::UnaryOpContext *context) = 0;

    virtual antlrcpp::Any visitIncOrDecOp(TBoxParser::IncOrDecOpContext *context) = 0;

    virtual antlrcpp::Any visitCastExpr(TBoxParser::CastExprContext *context) = 0;

    virtual antlrcpp::Any visitMulExpr(TBoxParser::MulExprContext *context) = 0;

    virtual antlrcpp::Any visitMulOp(TBoxParser::MulOpContext *context) = 0;

    virtual antlrcpp::Any visitAddExpr(TBoxParser::AddExprContext *context) = 0;

    virtual antlrcpp::Any visitAddOp(TBoxParser::AddOpContext *context) = 0;

    virtual antlrcpp::Any visitShiftExpr(TBoxParser::ShiftExprContext *context) = 0;

    virtual antlrcpp::Any visitShiftOp(TBoxParser::ShiftOpContext *context) = 0;

    virtual antlrcpp::Any visitCmpExpr(TBoxParser::CmpExprContext *context) = 0;

    virtual antlrcpp::Any visitCmpOp(TBoxParser::CmpOpContext *context) = 0;

    virtual antlrcpp::Any visitAndExpr(TBoxParser::AndExprContext *context) = 0;

    virtual antlrcpp::Any visitXorExpr(TBoxParser::XorExprContext *context) = 0;

    virtual antlrcpp::Any visitOrExpr(TBoxParser::OrExprContext *context) = 0;

    virtual antlrcpp::Any visitLogicAndExpr(TBoxParser::LogicAndExprContext *context) = 0;

    virtual antlrcpp::Any visitLogicOrExpr(TBoxParser::LogicOrExprContext *context) = 0;

    virtual antlrcpp::Any visitQuesExpr(TBoxParser::QuesExprContext *context) = 0;

    virtual antlrcpp::Any visitAssignExpr(TBoxParser::AssignExprContext *context) = 0;

    virtual antlrcpp::Any visitAssignOp(TBoxParser::AssignOpContext *context) = 0;

    virtual antlrcpp::Any visitArgs(TBoxParser::ArgsContext *context) = 0;

    virtual antlrcpp::Any visitExpr(TBoxParser::ExprContext *context) = 0;

    virtual antlrcpp::Any visitLibrary(TBoxParser::LibraryContext *context) = 0;

    virtual antlrcpp::Any visitImportStmt(TBoxParser::ImportStmtContext *context) = 0;

    virtual antlrcpp::Any visitType(TBoxParser::TypeContext *context) = 0;

    virtual antlrcpp::Any visitArgsNeed(TBoxParser::ArgsNeedContext *context) = 0;

    virtual antlrcpp::Any visitProgram(TBoxParser::ProgramContext *context) = 0;

    virtual antlrcpp::Any visitStmt(TBoxParser::StmtContext *context) = 0;

    virtual antlrcpp::Any visitReturnStmt(TBoxParser::ReturnStmtContext *context) = 0;

    virtual antlrcpp::Any visitDefVarStmt(TBoxParser::DefVarStmtContext *context) = 0;

    virtual antlrcpp::Any visitStmtBody(TBoxParser::StmtBodyContext *context) = 0;

    virtual antlrcpp::Any visitIfStmt(TBoxParser::IfStmtContext *context) = 0;

    virtual antlrcpp::Any visitForStmt(TBoxParser::ForStmtContext *context) = 0;

    virtual antlrcpp::Any visitWhileStmt(TBoxParser::WhileStmtContext *context) = 0;

    virtual antlrcpp::Any visitDoWhileStmt(TBoxParser::DoWhileStmtContext *context) = 0;

    virtual antlrcpp::Any visitBreakStmt(TBoxParser::BreakStmtContext *context) = 0;

    virtual antlrcpp::Any visitDefFuncStmt(TBoxParser::DefFuncStmtContext *context) = 0;

    virtual antlrcpp::Any visitDefGlobalVarStmt(TBoxParser::DefGlobalVarStmtContext *context) = 0;

    virtual antlrcpp::Any visitExternFuncStmt(TBoxParser::ExternFuncStmtContext *context) = 0;

    virtual antlrcpp::Any visitStat(TBoxParser::StatContext *context) = 0;

    virtual antlrcpp::Any visitStatStmts(TBoxParser::StatStmtsContext *context) = 0;


};

}  // namespace tbox::language
