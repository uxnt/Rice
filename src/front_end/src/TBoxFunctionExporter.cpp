
// Generated from ./TBox.g4 by ANTLR 4.7.2


#include "TBoxFunctionExporter.h"

using namespace std;
using namespace tbox::language;

antlrcpp::Any TBoxFunctionExporter::visitNum(TBoxParser::NumContext *ctx) {
    //TODO
    return string("");
}

antlrcpp::Any TBoxFunctionExporter::visitConstant(TBoxParser::ConstantContext *ctx) {
    //TODO
    return string("");
}

antlrcpp::Any TBoxFunctionExporter::visitPrimExpr(TBoxParser::PrimExprContext *ctx) {
    //TODO
    return string("");
}

antlrcpp::Any TBoxFunctionExporter::visitPostExpr(TBoxParser::PostExprContext *ctx) {
    //TODO
    return string("");
}

antlrcpp::Any TBoxFunctionExporter::visitUnaryExpr(TBoxParser::UnaryExprContext *ctx) {
    //TODO
    return string("");
}

antlrcpp::Any TBoxFunctionExporter::visitUnaryOp(TBoxParser::UnaryOpContext *ctx) {
    //TODO
    return string("");
}

antlrcpp::Any TBoxFunctionExporter::visitIncOrDecOp(TBoxParser::IncOrDecOpContext *ctx) {
    //TODO
    return string("");
}

antlrcpp::Any TBoxFunctionExporter::visitCastExpr(TBoxParser::CastExprContext *ctx) {
    //TODO
    return string("");
}

antlrcpp::Any TBoxFunctionExporter::visitMulExpr(TBoxParser::MulExprContext *ctx) {
    //TODO
    return string("");
}

antlrcpp::Any TBoxFunctionExporter::visitMulOp(TBoxParser::MulOpContext *ctx) {
    //TODO
    return string("");
}

antlrcpp::Any TBoxFunctionExporter::visitAddExpr(TBoxParser::AddExprContext *ctx) {
    //TODO
    return string("");
}

antlrcpp::Any TBoxFunctionExporter::visitAddOp(TBoxParser::AddOpContext *ctx) {
    //TODO
    return string("");
}

antlrcpp::Any TBoxFunctionExporter::visitShiftExpr(TBoxParser::ShiftExprContext *ctx) {
    //TODO
    return string("");
}

antlrcpp::Any TBoxFunctionExporter::visitShiftOp(TBoxParser::ShiftOpContext *ctx) {
    //TODO
    return string("");
}

antlrcpp::Any TBoxFunctionExporter::visitCmpExpr(TBoxParser::CmpExprContext *ctx) {
    //TODO
    return string("");
}

antlrcpp::Any TBoxFunctionExporter::visitCmpOp(TBoxParser::CmpOpContext *ctx) {
    //TODO
    return string("");
}

antlrcpp::Any TBoxFunctionExporter::visitAndExpr(TBoxParser::AndExprContext *ctx) {
    //TODO
    return string("");
}

antlrcpp::Any TBoxFunctionExporter::visitXorExpr(TBoxParser::XorExprContext *ctx) {
    //TODO
    return string("");
}

antlrcpp::Any TBoxFunctionExporter::visitOrExpr(TBoxParser::OrExprContext *ctx) {
    //TODO
    return string("");
}

antlrcpp::Any TBoxFunctionExporter::visitLogicAndExpr(TBoxParser::LogicAndExprContext *ctx) {
    //TODO
    return string("");
}

antlrcpp::Any TBoxFunctionExporter::visitLogicOrExpr(TBoxParser::LogicOrExprContext *ctx) {
    //TODO
    return string("");
}

antlrcpp::Any TBoxFunctionExporter::visitQuesExpr(TBoxParser::QuesExprContext *ctx) {
    //TODO
    return string("");
}

antlrcpp::Any TBoxFunctionExporter::visitAssignExpr(TBoxParser::AssignExprContext *ctx) {
    //TODO
    return string("");
}

antlrcpp::Any TBoxFunctionExporter::visitAssignOp(TBoxParser::AssignOpContext *ctx) {
    //TODO
    return string("");
}

antlrcpp::Any TBoxFunctionExporter::visitArgs(TBoxParser::ArgsContext *ctx) {
    //TODO
    return string("");
}

antlrcpp::Any TBoxFunctionExporter::visitExpr(TBoxParser::ExprContext *ctx) {
    //TODO
    return string("");
}

antlrcpp::Any TBoxFunctionExporter::visitLibrary(TBoxParser::LibraryContext *ctx) {
    //TODO
    return string("");
}

antlrcpp::Any TBoxFunctionExporter::visitImportStmt(TBoxParser::ImportStmtContext *ctx) {
    //TODO
    return string("");
}

antlrcpp::Any TBoxFunctionExporter::visitType(TBoxParser::TypeContext *ctx) {
    //TODO
    return string("i32");
}

antlrcpp::Any TBoxFunctionExporter::visitArgsNeed(TBoxParser::ArgsNeedContext *ctx) {
    //TODO
    string code = "[";
    for (int i = 0 ; i < ctx->type().size() ; i ++) {
        code += "{type:" + visitType(ctx->type(i)).as<string>() + ", name:" + ctx->Identifier(i)->getText() + "},";
    }
    if (ctx->type().size() > 0)
        code.erase(code.size() - 1);
    code += "]";
    return code;
}

antlrcpp::Any TBoxFunctionExporter::visitProgram(TBoxParser::ProgramContext *ctx) {
    //TODO
    return string("");
}

antlrcpp::Any TBoxFunctionExporter::visitStmt(TBoxParser::StmtContext *ctx) {
    //TODO
    return string("");
}

antlrcpp::Any TBoxFunctionExporter::visitReturnStmt(TBoxParser::ReturnStmtContext *ctx) {
    //TODO
    return string("");
}

antlrcpp::Any TBoxFunctionExporter::visitDefVarStmt(TBoxParser::DefVarStmtContext *ctx) {
    return string("var: {name:") + ctx->Identifier()->getText() + ", type:" + visitType(ctx->type()).as<string>() + "}";
}

antlrcpp::Any TBoxFunctionExporter::visitIfStmt(TBoxParser::IfStmtContext *ctx) {
    //TODO
    return string("");
}

antlrcpp::Any TBoxFunctionExporter::visitForStmt(TBoxParser::ForStmtContext *ctx) {
    //TODO
    return string("");
}

antlrcpp::Any TBoxFunctionExporter::visitWhileStmt(TBoxParser::WhileStmtContext *ctx) {
    //TODO
    return string("");
}

antlrcpp::Any TBoxFunctionExporter::visitDoWhileStmt(TBoxParser::DoWhileStmtContext *ctx) {
    //TODO
    return string("");
}

antlrcpp::Any TBoxFunctionExporter::visitDefFuncStmt(TBoxParser::DefFuncStmtContext *ctx) {
    //TODO
    if (! ctx->Export()) {
        return string();
    }
    return string("func: {name:") + ctx->Identifier()->getText() + ", args:" + visitArgsNeed(ctx->argsNeed()).as<string>() + ", return_type:" + (!ctx->type() ? "void" : visitType(ctx->type()).as<string>()) +"}";
}

antlrcpp::Any TBoxFunctionExporter::visitDefGlobalVarStmt(TBoxParser::DefGlobalVarStmtContext *ctx) {
    if (! ctx->Export()) {
        return string();
    }
    return visitDefVarStmt(ctx->defVarStmt());
}

antlrcpp::Any TBoxFunctionExporter::visitStat(TBoxParser::StatContext *ctx) {
    string code = string("");
    for (auto stmt : ctx->statStmts()) {
        if (stmt->defGlobalVarStmt())
            code += visitDefGlobalVarStmt(stmt->defGlobalVarStmt()).as<string>();
        if (stmt->defFuncStmt())
            code += visitDefFuncStmt(stmt->defFuncStmt()).as<string>();
    }
    return code;
}