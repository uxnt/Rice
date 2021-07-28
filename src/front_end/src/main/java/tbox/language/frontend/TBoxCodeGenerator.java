package tbox.language.frontend;

import org.antlr.v4.runtime.tree.*;

public class TBoxCodeGenerator extends AbstractParseTreeVisitor<String> implements TBoxVisitor<String> {
    @Override
    public String visitNum(TBoxParser.NumContext ctx) {
        if (ctx.BinNum() != null) {
            String num = ctx.BinNum().getText();
            return Integer.toString(Integer.parseInt(num.substring(0, num.length() - 1), 2));
        }
        if (ctx.OctNum() != null) {
            String num = ctx.OctNum().getText();
            return Integer.toString(Integer.parseInt(num.substring(1), 8));
        }
        if (ctx.DecNum() != null) {
            return ctx.DecNum().getText();
        }
        if (ctx.HexNum() != null) {
            String num = ctx.HexNum().getText();
            return Integer.toString(Integer.parseInt(num.substring(2), 16));
        }
        return "";
    }

    @Override
    public String visitConstant(TBoxParser.ConstantContext ctx) {
        return null;
    }

    @Override
    public String visitPrimExpr(TBoxParser.PrimExprContext ctx) {
        return null;
    }

    @Override
    public String visitPostExpr(TBoxParser.PostExprContext ctx) {
        return null;
    }

    @Override
    public String visitUnaryExpr(TBoxParser.UnaryExprContext ctx) {
        return null;
    }

    @Override
    public String visitCastExpr(TBoxParser.CastExprContext ctx) {
        return null;
    }

    @Override
    public String visitMulExpr(TBoxParser.MulExprContext ctx) {
        return null;
    }

    @Override
    public String visitAddExpr(TBoxParser.AddExprContext ctx) {
        return null;
    }

    @Override
    public String visitShiftExpr(TBoxParser.ShiftExprContext ctx) {
        return null;
    }

    @Override
    public String visitRelatExpr(TBoxParser.RelatExprContext ctx) {
        return null;
    }

    @Override
    public String visitEquExpr(TBoxParser.EquExprContext ctx) {
        return null;
    }

    @Override
    public String visitAndExpr(TBoxParser.AndExprContext ctx) {
        return null;
    }

    @Override
    public String visitXorExpr(TBoxParser.XorExprContext ctx) {
        return null;
    }

    @Override
    public String visitOrExpr(TBoxParser.OrExprContext ctx) {
        return null;
    }

    @Override
    public String visitLogicAndExpr(TBoxParser.LogicAndExprContext ctx) {
        return null;
    }

    @Override
    public String visitLogicOrExpr(TBoxParser.LogicOrExprContext ctx) {
        return null;
    }

    @Override
    public String visitQuesExpr(TBoxParser.QuesExprContext ctx) {
        return null;
    }

    @Override
    public String visitAssignExpr(TBoxParser.AssignExprContext ctx) {
        return null;
    }

    @Override
    public String visitArgs(TBoxParser.ArgsContext ctx) {
        return null;
    }

    @Override
    public String visitExpr(TBoxParser.ExprContext ctx) {
        return null;
    }

    @Override
    public String visitLibrary(TBoxParser.LibraryContext ctx) {
        return null;
    }

    @Override
    public String visitImportStmt(TBoxParser.ImportStmtContext ctx) {
        return null;
    }

    @Override
    public String visitType(TBoxParser.TypeContext ctx) {
        return null;
    }

    @Override
    public String visitArgsNeed(TBoxParser.ArgsNeedContext ctx) {
        return null;
    }

    @Override
    public String visitProgram(TBoxParser.ProgramContext ctx) {
        return null;
    }

    @Override
    public String visitStmt(TBoxParser.StmtContext ctx) {
        return null;
    }

    @Override
    public String visitReturnStmt(TBoxParser.ReturnStmtContext ctx) {
        return null;
    }

    @Override
    public String visitDefVarStmt(TBoxParser.DefVarStmtContext ctx) {
        return null;
    }

    @Override
    public String visitIfStmt(TBoxParser.IfStmtContext ctx) {
        return null;
    }

    @Override
    public String visitForStmt(TBoxParser.ForStmtContext ctx) {
        return null;
    }

    @Override
    public String visitWhileStmt(TBoxParser.WhileStmtContext ctx) {
        return null;
    }

    @Override
    public String visitDoWhileStmt(TBoxParser.DoWhileStmtContext ctx) {
        return null;
    }

    @Override
    public String visitDefFuncStmt(TBoxParser.DefFuncStmtContext ctx) {
        return null;
    }

    @Override
    public String visitDefGlobalVarStmt(TBoxParser.DefGlobalVarStmtContext ctx) {
        return null;
    }

    @Override
    public String visitStat(TBoxParser.StatContext ctx) {
        return null;
    }
}
