
#pragma once

#include "antlr4-runtime.h"
#include "TBoxVisitor.h"

namespace tbox::language {

/**
 * This class provides an empty implementation of TBoxVisitor, which can be
 * extended to create a visitor which only needs to handle a subset of the available methods.
 */
class TBoxFunctionExporter: public TBoxVisitor {
public:
    virtual antlrcpp::Any visitNum(TBoxParser::NumContext *ctx);

    virtual antlrcpp::Any visitConstant(TBoxParser::ConstantContext *ctx);

    virtual antlrcpp::Any visitPrimExpr(TBoxParser::PrimExprContext *ctx);

    virtual antlrcpp::Any visitPostExpr(TBoxParser::PostExprContext *ctx);

    virtual antlrcpp::Any visitUnaryExpr(TBoxParser::UnaryExprContext *ctx);

    virtual antlrcpp::Any visitUnaryOp(TBoxParser::UnaryOpContext *ctx);

    virtual antlrcpp::Any visitIncOrDecOp(TBoxParser::IncOrDecOpContext *ctx);

    virtual antlrcpp::Any visitCastExpr(TBoxParser::CastExprContext *ctx);

    virtual antlrcpp::Any visitMulExpr(TBoxParser::MulExprContext *ctx);

    virtual antlrcpp::Any visitMulOp(TBoxParser::MulOpContext *ctx);

    virtual antlrcpp::Any visitAddExpr(TBoxParser::AddExprContext *ctx);

    virtual antlrcpp::Any visitAddOp(TBoxParser::AddOpContext *ctx);

    virtual antlrcpp::Any visitShiftExpr(TBoxParser::ShiftExprContext *ctx);

    virtual antlrcpp::Any visitShiftOp(TBoxParser::ShiftOpContext *ctx);

    virtual antlrcpp::Any visitCmpExpr(TBoxParser::CmpExprContext *ctx);

    virtual antlrcpp::Any visitCmpOp(TBoxParser::CmpOpContext *ctx);

    virtual antlrcpp::Any visitAndExpr(TBoxParser::AndExprContext *ctx);

    virtual antlrcpp::Any visitXorExpr(TBoxParser::XorExprContext *ctx);

    virtual antlrcpp::Any visitOrExpr(TBoxParser::OrExprContext *ctx);

    virtual antlrcpp::Any visitLogicAndExpr(TBoxParser::LogicAndExprContext *ctx);

    virtual antlrcpp::Any visitLogicOrExpr(TBoxParser::LogicOrExprContext *ctx);

    virtual antlrcpp::Any visitQuesExpr(TBoxParser::QuesExprContext *ctx);

    virtual antlrcpp::Any visitAssignExpr(TBoxParser::AssignExprContext *ctx);

    virtual antlrcpp::Any visitAssignOp(TBoxParser::AssignOpContext *ctx);

    virtual antlrcpp::Any visitArgs(TBoxParser::ArgsContext *ctx);

    virtual antlrcpp::Any visitExpr(TBoxParser::ExprContext *ctx);

    virtual antlrcpp::Any visitLibrary(TBoxParser::LibraryContext *ctx);

    virtual antlrcpp::Any visitImportStmt(TBoxParser::ImportStmtContext *ctx);

    virtual antlrcpp::Any visitType(TBoxParser::TypeContext *ctx);

    virtual antlrcpp::Any visitArgsNeed(TBoxParser::ArgsNeedContext *ctx);

    virtual antlrcpp::Any visitProgram(TBoxParser::ProgramContext *ctx);

    virtual antlrcpp::Any visitStmt(TBoxParser::StmtContext *ctx);

    virtual antlrcpp::Any visitReturnStmt(TBoxParser::ReturnStmtContext *ctx);

    virtual antlrcpp::Any visitDefVarStmt(TBoxParser::DefVarStmtContext *ctx);

    virtual antlrcpp::Any visitIfStmt(TBoxParser::IfStmtContext *ctx);

    virtual antlrcpp::Any visitForStmt(TBoxParser::ForStmtContext *ctx);

    virtual antlrcpp::Any visitWhileStmt(TBoxParser::WhileStmtContext *ctx);

    virtual antlrcpp::Any visitDoWhileStmt(TBoxParser::DoWhileStmtContext *ctx);

    virtual antlrcpp::Any visitDefFuncStmt(TBoxParser::DefFuncStmtContext *ctx);

    virtual antlrcpp::Any visitDefGlobalVarStmt(TBoxParser::DefGlobalVarStmtContext *ctx);

    virtual antlrcpp::Any visitStat(TBoxParser::StatContext *ctx);
};

}    // namespace tbox::language
