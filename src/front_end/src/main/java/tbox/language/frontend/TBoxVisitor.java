// Generated from D:/tbox-language/src/front_end\TBox.g4 by ANTLR 4.9.1
package tbox.language.frontend;
import org.antlr.v4.runtime.tree.ParseTreeVisitor;

/**
 * This interface defines a complete generic visitor for a parse tree produced
 * by {@link TBoxParser}.
 *
 * @param <T> The return type of the visit operation. Use {@link Void} for
 * operations with no return type.
 */
public interface TBoxVisitor<T> extends ParseTreeVisitor<T> {
	/**
	 * Visit a parse tree produced by {@link TBoxParser#num}.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	T visitNum(TBoxParser.NumContext ctx);
	/**
	 * Visit a parse tree produced by {@link TBoxParser#constant}.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	T visitConstant(TBoxParser.ConstantContext ctx);
	/**
	 * Visit a parse tree produced by {@link TBoxParser#primExpr}.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	T visitPrimExpr(TBoxParser.PrimExprContext ctx);
	/**
	 * Visit a parse tree produced by {@link TBoxParser#postExpr}.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	T visitPostExpr(TBoxParser.PostExprContext ctx);
	/**
	 * Visit a parse tree produced by {@link TBoxParser#unaryExpr}.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	T visitUnaryExpr(TBoxParser.UnaryExprContext ctx);
	/**
	 * Visit a parse tree produced by {@link TBoxParser#castExpr}.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	T visitCastExpr(TBoxParser.CastExprContext ctx);
	/**
	 * Visit a parse tree produced by {@link TBoxParser#mulExpr}.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	T visitMulExpr(TBoxParser.MulExprContext ctx);
	/**
	 * Visit a parse tree produced by {@link TBoxParser#addExpr}.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	T visitAddExpr(TBoxParser.AddExprContext ctx);
	/**
	 * Visit a parse tree produced by {@link TBoxParser#shiftExpr}.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	T visitShiftExpr(TBoxParser.ShiftExprContext ctx);
	/**
	 * Visit a parse tree produced by {@link TBoxParser#relatExpr}.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	T visitRelatExpr(TBoxParser.RelatExprContext ctx);
	/**
	 * Visit a parse tree produced by {@link TBoxParser#equExpr}.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	T visitEquExpr(TBoxParser.EquExprContext ctx);
	/**
	 * Visit a parse tree produced by {@link TBoxParser#andExpr}.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	T visitAndExpr(TBoxParser.AndExprContext ctx);
	/**
	 * Visit a parse tree produced by {@link TBoxParser#xorExpr}.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	T visitXorExpr(TBoxParser.XorExprContext ctx);
	/**
	 * Visit a parse tree produced by {@link TBoxParser#orExpr}.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	T visitOrExpr(TBoxParser.OrExprContext ctx);
	/**
	 * Visit a parse tree produced by {@link TBoxParser#logicAndExpr}.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	T visitLogicAndExpr(TBoxParser.LogicAndExprContext ctx);
	/**
	 * Visit a parse tree produced by {@link TBoxParser#logicOrExpr}.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	T visitLogicOrExpr(TBoxParser.LogicOrExprContext ctx);
	/**
	 * Visit a parse tree produced by {@link TBoxParser#quesExpr}.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	T visitQuesExpr(TBoxParser.QuesExprContext ctx);
	/**
	 * Visit a parse tree produced by {@link TBoxParser#assignExpr}.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	T visitAssignExpr(TBoxParser.AssignExprContext ctx);
	/**
	 * Visit a parse tree produced by {@link TBoxParser#args}.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	T visitArgs(TBoxParser.ArgsContext ctx);
	/**
	 * Visit a parse tree produced by {@link TBoxParser#expr}.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	T visitExpr(TBoxParser.ExprContext ctx);
	/**
	 * Visit a parse tree produced by {@link TBoxParser#library()}.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	T visitLibrary(TBoxParser.LibraryContext ctx);
	/**
	 * Visit a parse tree produced by {@link TBoxParser#importStmt}.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	T visitImportStmt(TBoxParser.ImportStmtContext ctx);
	/**
	 * Visit a parse tree produced by {@link TBoxParser#type()}.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	T visitType(TBoxParser.TypeContext ctx);
	/**
	 * Visit a parse tree produced by {@link TBoxParser#argsNeed}.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	T visitArgsNeed(TBoxParser.ArgsNeedContext ctx);
	/**
	 * Visit a parse tree produced by {@link TBoxParser#program}.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	T visitProgram(TBoxParser.ProgramContext ctx);
	/**
	 * Visit a parse tree produced by {@link TBoxParser#stmt}.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	T visitStmt(TBoxParser.StmtContext ctx);
	/**
	 * Visit a parse tree produced by {@link TBoxParser#returnStmt}.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	T visitReturnStmt(TBoxParser.ReturnStmtContext ctx);
	/**
	 * Visit a parse tree produced by {@link TBoxParser#defVarStmt}.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	T visitDefVarStmt(TBoxParser.DefVarStmtContext ctx);
	/**
	 * Visit a parse tree produced by {@link TBoxParser#ifStmt}.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	T visitIfStmt(TBoxParser.IfStmtContext ctx);
	/**
	 * Visit a parse tree produced by {@link TBoxParser#forStmt}.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	T visitForStmt(TBoxParser.ForStmtContext ctx);
	/**
	 * Visit a parse tree produced by {@link TBoxParser#whileStmt}.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	T visitWhileStmt(TBoxParser.WhileStmtContext ctx);
	/**
	 * Visit a parse tree produced by {@link TBoxParser#doWhileStmt}.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	T visitDoWhileStmt(TBoxParser.DoWhileStmtContext ctx);
	/**
	 * Visit a parse tree produced by {@link TBoxParser#defFuncStmt}.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	T visitDefFuncStmt(TBoxParser.DefFuncStmtContext ctx);
	/**
	 * Visit a parse tree produced by {@link TBoxParser#stat}.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	T visitStat(TBoxParser.StatContext ctx);
}