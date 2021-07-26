// Generated from D:/tbox-language/src/front_end\TBox.g4 by ANTLR 4.9.1
package tbox.language.frontend;
import org.antlr.v4.runtime.tree.ParseTreeListener;

/**
 * This interface defines a complete listener for a parse tree produced by
 * {@link TBoxParser}.
 */
public interface TBoxListener extends ParseTreeListener {
	/**
	 * Enter a parse tree produced by {@link TBoxParser#r}.
	 * @param ctx the parse tree
	 */
	void enterR(TBoxParser.RContext ctx);
	/**
	 * Exit a parse tree produced by {@link TBoxParser#r}.
	 * @param ctx the parse tree
	 */
	void exitR(TBoxParser.RContext ctx);
}