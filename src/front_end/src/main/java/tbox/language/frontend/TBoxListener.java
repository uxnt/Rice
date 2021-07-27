// Generated from D:/tbox-language/src/front_end\TBox.g4 by ANTLR 4.9.1
package tbox.language.frontend;
import org.antlr.v4.runtime.tree.ParseTreeListener;

/**
 * This interface defines a complete listener for a parse tree produced by
 * {@link TBoxParser}.
 */
public interface TBoxListener extends ParseTreeListener {
	/**
	 * Enter a parse tree produced by {@link TBoxParser#num}.
	 * @param ctx the parse tree
	 */
	void enterNum(TBoxParser.NumContext ctx);
	/**
	 * Exit a parse tree produced by {@link TBoxParser#num}.
	 * @param ctx the parse tree
	 */
	void exitNum(TBoxParser.NumContext ctx);
	/**
	 * Enter a parse tree produced by {@link TBoxParser#constant}.
	 * @param ctx the parse tree
	 */
	void enterConstant(TBoxParser.ConstantContext ctx);
	/**
	 * Exit a parse tree produced by {@link TBoxParser#constant}.
	 * @param ctx the parse tree
	 */
	void exitConstant(TBoxParser.ConstantContext ctx);
	/**
	 * Enter a parse tree produced by {@link TBoxParser#primExpr}.
	 * @param ctx the parse tree
	 */
	void enterPrimExpr(TBoxParser.PrimExprContext ctx);
	/**
	 * Exit a parse tree produced by {@link TBoxParser#primExpr}.
	 * @param ctx the parse tree
	 */
	void exitPrimExpr(TBoxParser.PrimExprContext ctx);
	/**
	 * Enter a parse tree produced by {@link TBoxParser#postExpr}.
	 * @param ctx the parse tree
	 */
	void enterPostExpr(TBoxParser.PostExprContext ctx);
	/**
	 * Exit a parse tree produced by {@link TBoxParser#postExpr}.
	 * @param ctx the parse tree
	 */
	void exitPostExpr(TBoxParser.PostExprContext ctx);
	/**
	 * Enter a parse tree produced by {@link TBoxParser#unaryExpr}.
	 * @param ctx the parse tree
	 */
	void enterUnaryExpr(TBoxParser.UnaryExprContext ctx);
	/**
	 * Exit a parse tree produced by {@link TBoxParser#unaryExpr}.
	 * @param ctx the parse tree
	 */
	void exitUnaryExpr(TBoxParser.UnaryExprContext ctx);
	/**
	 * Enter a parse tree produced by {@link TBoxParser#castExpr}.
	 * @param ctx the parse tree
	 */
	void enterCastExpr(TBoxParser.CastExprContext ctx);
	/**
	 * Exit a parse tree produced by {@link TBoxParser#castExpr}.
	 * @param ctx the parse tree
	 */
	void exitCastExpr(TBoxParser.CastExprContext ctx);
	/**
	 * Enter a parse tree produced by {@link TBoxParser#mulExpr}.
	 * @param ctx the parse tree
	 */
	void enterMulExpr(TBoxParser.MulExprContext ctx);
	/**
	 * Exit a parse tree produced by {@link TBoxParser#mulExpr}.
	 * @param ctx the parse tree
	 */
	void exitMulExpr(TBoxParser.MulExprContext ctx);
	/**
	 * Enter a parse tree produced by {@link TBoxParser#addExpr}.
	 * @param ctx the parse tree
	 */
	void enterAddExpr(TBoxParser.AddExprContext ctx);
	/**
	 * Exit a parse tree produced by {@link TBoxParser#addExpr}.
	 * @param ctx the parse tree
	 */
	void exitAddExpr(TBoxParser.AddExprContext ctx);
	/**
	 * Enter a parse tree produced by {@link TBoxParser#shiftExpr}.
	 * @param ctx the parse tree
	 */
	void enterShiftExpr(TBoxParser.ShiftExprContext ctx);
	/**
	 * Exit a parse tree produced by {@link TBoxParser#shiftExpr}.
	 * @param ctx the parse tree
	 */
	void exitShiftExpr(TBoxParser.ShiftExprContext ctx);
	/**
	 * Enter a parse tree produced by {@link TBoxParser#relatExpr}.
	 * @param ctx the parse tree
	 */
	void enterRelatExpr(TBoxParser.RelatExprContext ctx);
	/**
	 * Exit a parse tree produced by {@link TBoxParser#relatExpr}.
	 * @param ctx the parse tree
	 */
	void exitRelatExpr(TBoxParser.RelatExprContext ctx);
	/**
	 * Enter a parse tree produced by {@link TBoxParser#equExpr}.
	 * @param ctx the parse tree
	 */
	void enterEquExpr(TBoxParser.EquExprContext ctx);
	/**
	 * Exit a parse tree produced by {@link TBoxParser#equExpr}.
	 * @param ctx the parse tree
	 */
	void exitEquExpr(TBoxParser.EquExprContext ctx);
	/**
	 * Enter a parse tree produced by {@link TBoxParser#andExpr}.
	 * @param ctx the parse tree
	 */
	void enterAndExpr(TBoxParser.AndExprContext ctx);
	/**
	 * Exit a parse tree produced by {@link TBoxParser#andExpr}.
	 * @param ctx the parse tree
	 */
	void exitAndExpr(TBoxParser.AndExprContext ctx);
	/**
	 * Enter a parse tree produced by {@link TBoxParser#xorExpr}.
	 * @param ctx the parse tree
	 */
	void enterXorExpr(TBoxParser.XorExprContext ctx);
	/**
	 * Exit a parse tree produced by {@link TBoxParser#xorExpr}.
	 * @param ctx the parse tree
	 */
	void exitXorExpr(TBoxParser.XorExprContext ctx);
	/**
	 * Enter a parse tree produced by {@link TBoxParser#orExpr}.
	 * @param ctx the parse tree
	 */
	void enterOrExpr(TBoxParser.OrExprContext ctx);
	/**
	 * Exit a parse tree produced by {@link TBoxParser#orExpr}.
	 * @param ctx the parse tree
	 */
	void exitOrExpr(TBoxParser.OrExprContext ctx);
	/**
	 * Enter a parse tree produced by {@link TBoxParser#logicAndExpr}.
	 * @param ctx the parse tree
	 */
	void enterLogicAndExpr(TBoxParser.LogicAndExprContext ctx);
	/**
	 * Exit a parse tree produced by {@link TBoxParser#logicAndExpr}.
	 * @param ctx the parse tree
	 */
	void exitLogicAndExpr(TBoxParser.LogicAndExprContext ctx);
	/**
	 * Enter a parse tree produced by {@link TBoxParser#logicOrExpr}.
	 * @param ctx the parse tree
	 */
	void enterLogicOrExpr(TBoxParser.LogicOrExprContext ctx);
	/**
	 * Exit a parse tree produced by {@link TBoxParser#logicOrExpr}.
	 * @param ctx the parse tree
	 */
	void exitLogicOrExpr(TBoxParser.LogicOrExprContext ctx);
	/**
	 * Enter a parse tree produced by {@link TBoxParser#quesExpr}.
	 * @param ctx the parse tree
	 */
	void enterQuesExpr(TBoxParser.QuesExprContext ctx);
	/**
	 * Exit a parse tree produced by {@link TBoxParser#quesExpr}.
	 * @param ctx the parse tree
	 */
	void exitQuesExpr(TBoxParser.QuesExprContext ctx);
	/**
	 * Enter a parse tree produced by {@link TBoxParser#assignExpr}.
	 * @param ctx the parse tree
	 */
	void enterAssignExpr(TBoxParser.AssignExprContext ctx);
	/**
	 * Exit a parse tree produced by {@link TBoxParser#assignExpr}.
	 * @param ctx the parse tree
	 */
	void exitAssignExpr(TBoxParser.AssignExprContext ctx);
	/**
	 * Enter a parse tree produced by {@link TBoxParser#args}.
	 * @param ctx the parse tree
	 */
	void enterArgs(TBoxParser.ArgsContext ctx);
	/**
	 * Exit a parse tree produced by {@link TBoxParser#args}.
	 * @param ctx the parse tree
	 */
	void exitArgs(TBoxParser.ArgsContext ctx);
	/**
	 * Enter a parse tree produced by {@link TBoxParser#expr}.
	 * @param ctx the parse tree
	 */
	void enterExpr(TBoxParser.ExprContext ctx);
	/**
	 * Exit a parse tree produced by {@link TBoxParser#expr}.
	 * @param ctx the parse tree
	 */
	void exitExpr(TBoxParser.ExprContext ctx);
	/**
	 * Enter a parse tree produced by {@link TBoxParser#library()}.
	 * @param ctx the parse tree
	 */
	void enterLibrary(TBoxParser.LibraryContext ctx);
	/**
	 * Exit a parse tree produced by {@link TBoxParser#library()}.
	 * @param ctx the parse tree
	 */
	void exitLibrary(TBoxParser.LibraryContext ctx);
	/**
	 * Enter a parse tree produced by {@link TBoxParser#importStmt}.
	 * @param ctx the parse tree
	 */
	void enterImportStmt(TBoxParser.ImportStmtContext ctx);
	/**
	 * Exit a parse tree produced by {@link TBoxParser#importStmt}.
	 * @param ctx the parse tree
	 */
	void exitImportStmt(TBoxParser.ImportStmtContext ctx);
	/**
	 * Enter a parse tree produced by {@link TBoxParser#type()}.
	 * @param ctx the parse tree
	 */
	void enterType(TBoxParser.TypeContext ctx);
	/**
	 * Exit a parse tree produced by {@link TBoxParser#type()}.
	 * @param ctx the parse tree
	 */
	void exitType(TBoxParser.TypeContext ctx);
	/**
	 * Enter a parse tree produced by {@link TBoxParser#argsNeed}.
	 * @param ctx the parse tree
	 */
	void enterArgsNeed(TBoxParser.ArgsNeedContext ctx);
	/**
	 * Exit a parse tree produced by {@link TBoxParser#argsNeed}.
	 * @param ctx the parse tree
	 */
	void exitArgsNeed(TBoxParser.ArgsNeedContext ctx);
	/**
	 * Enter a parse tree produced by {@link TBoxParser#program}.
	 * @param ctx the parse tree
	 */
	void enterProgram(TBoxParser.ProgramContext ctx);
	/**
	 * Exit a parse tree produced by {@link TBoxParser#program}.
	 * @param ctx the parse tree
	 */
	void exitProgram(TBoxParser.ProgramContext ctx);
	/**
	 * Enter a parse tree produced by {@link TBoxParser#stmt}.
	 * @param ctx the parse tree
	 */
	void enterStmt(TBoxParser.StmtContext ctx);
	/**
	 * Exit a parse tree produced by {@link TBoxParser#stmt}.
	 * @param ctx the parse tree
	 */
	void exitStmt(TBoxParser.StmtContext ctx);
	/**
	 * Enter a parse tree produced by {@link TBoxParser#returnStmt}.
	 * @param ctx the parse tree
	 */
	void enterReturnStmt(TBoxParser.ReturnStmtContext ctx);
	/**
	 * Exit a parse tree produced by {@link TBoxParser#returnStmt}.
	 * @param ctx the parse tree
	 */
	void exitReturnStmt(TBoxParser.ReturnStmtContext ctx);
	/**
	 * Enter a parse tree produced by {@link TBoxParser#defVarStmt}.
	 * @param ctx the parse tree
	 */
	void enterDefVarStmt(TBoxParser.DefVarStmtContext ctx);
	/**
	 * Exit a parse tree produced by {@link TBoxParser#defVarStmt}.
	 * @param ctx the parse tree
	 */
	void exitDefVarStmt(TBoxParser.DefVarStmtContext ctx);
	/**
	 * Enter a parse tree produced by {@link TBoxParser#ifStmt}.
	 * @param ctx the parse tree
	 */
	void enterIfStmt(TBoxParser.IfStmtContext ctx);
	/**
	 * Exit a parse tree produced by {@link TBoxParser#ifStmt}.
	 * @param ctx the parse tree
	 */
	void exitIfStmt(TBoxParser.IfStmtContext ctx);
	/**
	 * Enter a parse tree produced by {@link TBoxParser#forStmt}.
	 * @param ctx the parse tree
	 */
	void enterForStmt(TBoxParser.ForStmtContext ctx);
	/**
	 * Exit a parse tree produced by {@link TBoxParser#forStmt}.
	 * @param ctx the parse tree
	 */
	void exitForStmt(TBoxParser.ForStmtContext ctx);
	/**
	 * Enter a parse tree produced by {@link TBoxParser#whileStmt}.
	 * @param ctx the parse tree
	 */
	void enterWhileStmt(TBoxParser.WhileStmtContext ctx);
	/**
	 * Exit a parse tree produced by {@link TBoxParser#whileStmt}.
	 * @param ctx the parse tree
	 */
	void exitWhileStmt(TBoxParser.WhileStmtContext ctx);
	/**
	 * Enter a parse tree produced by {@link TBoxParser#doWhileStmt}.
	 * @param ctx the parse tree
	 */
	void enterDoWhileStmt(TBoxParser.DoWhileStmtContext ctx);
	/**
	 * Exit a parse tree produced by {@link TBoxParser#doWhileStmt}.
	 * @param ctx the parse tree
	 */
	void exitDoWhileStmt(TBoxParser.DoWhileStmtContext ctx);
	/**
	 * Enter a parse tree produced by {@link TBoxParser#defFuncStmt}.
	 * @param ctx the parse tree
	 */
	void enterDefFuncStmt(TBoxParser.DefFuncStmtContext ctx);
	/**
	 * Exit a parse tree produced by {@link TBoxParser#defFuncStmt}.
	 * @param ctx the parse tree
	 */
	void exitDefFuncStmt(TBoxParser.DefFuncStmtContext ctx);
	/**
	 * Enter a parse tree produced by {@link TBoxParser#stat}.
	 * @param ctx the parse tree
	 */
	void enterStat(TBoxParser.StatContext ctx);
	/**
	 * Exit a parse tree produced by {@link TBoxParser#stat}.
	 * @param ctx the parse tree
	 */
	void exitStat(TBoxParser.StatContext ctx);
}