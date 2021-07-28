package tbox.language.frontend;

import org.antlr.v4.runtime.tree.ErrorNode;
import org.antlr.v4.runtime.tree.ParseTree;
import org.antlr.v4.runtime.tree.RuleNode;
import org.antlr.v4.runtime.tree.TerminalNode;

public class TBoxFunctionExporter implements TBoxVisitor<String> {
    @Override
    public String visitNum(TBoxParser.NumContext ctx) {
        return "";
    }

    @Override
    public String visitConstant(TBoxParser.ConstantContext ctx) {
        return "";
    }

    @Override
    public String visitPrimExpr(TBoxParser.PrimExprContext ctx) {
        return "";
    }

    @Override
    public String visitPostExpr(TBoxParser.PostExprContext ctx) {
        return "";
    }

    @Override
    public String visitUnaryExpr(TBoxParser.UnaryExprContext ctx) {
        return "";
    }

    @Override
    public String visitCastExpr(TBoxParser.CastExprContext ctx) {
        return "";
    }

    @Override
    public String visitMulExpr(TBoxParser.MulExprContext ctx) {
        return "";
    }

    @Override
    public String visitAddExpr(TBoxParser.AddExprContext ctx) {
        return "";
    }

    @Override
    public String visitShiftExpr(TBoxParser.ShiftExprContext ctx) {
        return "";
    }

    @Override
    public String visitRelatExpr(TBoxParser.RelatExprContext ctx) {
        return "";
    }

    @Override
    public String visitEquExpr(TBoxParser.EquExprContext ctx) {
        return "";
    }

    @Override
    public String visitAndExpr(TBoxParser.AndExprContext ctx) {
        return "";
    }

    @Override
    public String visitXorExpr(TBoxParser.XorExprContext ctx) {
        return "";
    }

    @Override
    public String visitOrExpr(TBoxParser.OrExprContext ctx) {
        return "";
    }

    @Override
    public String visitLogicAndExpr(TBoxParser.LogicAndExprContext ctx) {
        return "";
    }

    @Override
    public String visitLogicOrExpr(TBoxParser.LogicOrExprContext ctx) {
        return "";
    }

    @Override
    public String visitQuesExpr(TBoxParser.QuesExprContext ctx) {
        return "";
    }

    @Override
    public String visitAssignExpr(TBoxParser.AssignExprContext ctx) {
        return "";
    }

    @Override
    public String visitArgs(TBoxParser.ArgsContext ctx) {
        return "";
    }

    @Override
    public String visitExpr(TBoxParser.ExprContext ctx) {
        return "";
    }

    @Override
    public String visitLibrary(TBoxParser.LibraryContext ctx) {
        return "";
    }

    @Override
    public String visitImportStmt(TBoxParser.ImportStmtContext ctx) {
        return "";
    }

    @Override
    public String visitType(TBoxParser.TypeContext ctx) {
        return "";
    }

    @Override
    public String visitArgsNeed(TBoxParser.ArgsNeedContext ctx) {
        return "";
    }

    @Override
    public String visitProgram(TBoxParser.ProgramContext ctx) {
        return "";
    }

    @Override
    public String visitStmt(TBoxParser.StmtContext ctx) {
        return "";
    }

    @Override
    public String visitReturnStmt(TBoxParser.ReturnStmtContext ctx) {
        return "";
    }

    @Override
    public String visitDefVarStmt(TBoxParser.DefVarStmtContext ctx) {
        return "_var:" + ctx.Identifier().getText();
    }

    @Override
    public String visitIfStmt(TBoxParser.IfStmtContext ctx) {
        return "";
    }

    @Override
    public String visitForStmt(TBoxParser.ForStmtContext ctx) {
        return "";
    }

    @Override
    public String visitWhileStmt(TBoxParser.WhileStmtContext ctx) {
        return "";
    }

    @Override
    public String visitDoWhileStmt(TBoxParser.DoWhileStmtContext ctx) {
        return "";
    }

    @Override
    public String visitDefFuncStmt(TBoxParser.DefFuncStmtContext ctx) {
        return "_func:" + ctx.Identifier().getText();
    }

    @Override
    public String visitDefGlobalVarStmt(TBoxParser.DefGlobalVarStmtContext ctx) {
        return visitDefVarStmt(ctx.defVarStmt());
    }

    @Override
    public String visitStat(TBoxParser.StatContext ctx) {
        StringBuilder str= new StringBuilder();
        for (TBoxParser.DefFuncStmtContext child : ctx.defFuncStmt()) {
            if (child.Export() != null) //if the function was exportable
                str.append(visitDefFuncStmt(child)).append('\n');
        }
        for (TBoxParser.DefGlobalVarStmtContext child : ctx.defGlobalVarStmt()) {
            if (child.Export() != null) //if the function was exportable
                str.append(visitDefGlobalVarStmt(child)).append('\n');
        }
        return str.toString();
    }

    @Override
    public String visit(ParseTree tree) {
        if (tree instanceof TBoxParser.StatContext) {
            return visitStat((TBoxParser.StatContext) tree);
        }
        else if (tree instanceof TBoxParser.DefFuncStmtContext) {
            return visitDefFuncStmt((TBoxParser.DefFuncStmtContext) tree);
        }
        else if (tree instanceof TBoxParser.DefVarStmtContext) {
            return visitDefVarStmt((TBoxParser.DefVarStmtContext) tree);
        }
        return "";
    }

    @Override
    public String visitChildren(RuleNode node) {
        return "";
    }

    @Override
    public String visitTerminal(TerminalNode node) {
        return "";
    }

    @Override
    public String visitErrorNode(ErrorNode node) {
        return "";
    }
}
