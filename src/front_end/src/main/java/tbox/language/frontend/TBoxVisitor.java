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
	 * Visit a parse tree produced by {@link TBoxParser#r}.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	T visitR(TBoxParser.RContext ctx);
}