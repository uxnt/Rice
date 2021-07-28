// Generated from D:/tbox-language/src/front_end\TBox.g4 by ANTLR 4.9.1
package tbox.language.frontend;
import org.antlr.v4.runtime.atn.*;
import org.antlr.v4.runtime.dfa.DFA;
import org.antlr.v4.runtime.*;
import org.antlr.v4.runtime.misc.*;
import org.antlr.v4.runtime.tree.*;
import java.util.List;
import java.util.Iterator;
import java.util.ArrayList;

@SuppressWarnings({"all", "warnings", "unchecked", "unused", "cast"})
public class TBoxParser extends Parser {
	static { RuntimeMetaData.checkVersion("4.9.1", RuntimeMetaData.VERSION); }

	protected static final DFA[] _decisionToDFA;
	protected static final PredictionContextCache _sharedContextCache =
		new PredictionContextCache();
	public static final int
		T__0=1, WS=2, LineComment=3, BlockComment=4, Import=5, Export=6, Of=7, 
		Static=8, True=9, False=10, Null=11, Func=12, Class=13, Struct=14, Enum=15, 
		Interface=16, Abstract=17, Override=18, Public=19, Protected=20, Private=21, 
		Internal=22, Friendly=23, Friend=24, If=25, Else=26, Elif=27, Switch=28, 
		For=29, Foreach=30, While=31, Do=32, Break=33, Return=34, Num=35, Byte=36, 
		Short=37, Int=38, Long=39, Float=40, Double=41, Bool=42, String=43, Char=44, 
		Var=45, Comma=46, Question=47, SemiColon=48, Colon=49, LeftParen=50, RightParen=51, 
		LeftBracket=52, RightBracket=53, LeftBrace=54, RightBrace=55, LeftShift=56, 
		RightShift=57, Plus=58, Increase=59, Minus=60, Decrease=61, Star=62, Div=63, 
		Mod=64, And=65, LogicAnd=66, Or=67, LogicOr=68, Xor=69, Not=70, Tilde=71, 
		Assign=72, MulAssign=73, DivAssign=74, ModAssign=75, PlusAssign=76, MinusAssign=77, 
		LeftShiftAssign=78, RightShiftAssign=79, AndAssign=80, XorAssign=81, OrAssign=82, 
		Less=83, LessEqual=84, Greater=85, GreaterEqual=86, Equal=87, NotEqual=88, 
		Arrow=89, Dot=90, Ellipsis=91, Dollar=92, BinNum=93, OctNum=94, DecNum=95, 
		HexNum=96, Identifier=97, StringConstant=98;
	public static final int
		RULE_num = 0, RULE_constant = 1, RULE_primExpr = 2, RULE_postExpr = 3, 
		RULE_unaryExpr = 4, RULE_castExpr = 5, RULE_mulExpr = 6, RULE_addExpr = 7, 
		RULE_shiftExpr = 8, RULE_relatExpr = 9, RULE_equExpr = 10, RULE_andExpr = 11, 
		RULE_xorExpr = 12, RULE_orExpr = 13, RULE_logicAndExpr = 14, RULE_logicOrExpr = 15, 
		RULE_quesExpr = 16, RULE_assignExpr = 17, RULE_args = 18, RULE_expr = 19, 
		RULE_library = 20, RULE_importStmt = 21, RULE_type = 22, RULE_argsNeed = 23, 
		RULE_program = 24, RULE_stmt = 25, RULE_returnStmt = 26, RULE_defVarStmt = 27, 
		RULE_ifStmt = 28, RULE_forStmt = 29, RULE_whileStmt = 30, RULE_doWhileStmt = 31, 
		RULE_defFuncStmt = 32, RULE_defGlobalVarStmt = 33, RULE_stat = 34;
	private static String[] makeRuleNames() {
		return new String[] {
			"num", "constant", "primExpr", "postExpr", "unaryExpr", "castExpr", "mulExpr", 
			"addExpr", "shiftExpr", "relatExpr", "equExpr", "andExpr", "xorExpr", 
			"orExpr", "logicAndExpr", "logicOrExpr", "quesExpr", "assignExpr", "args", 
			"expr", "library", "importStmt", "type", "argsNeed", "program", "stmt", 
			"returnStmt", "defVarStmt", "ifStmt", "forStmt", "whileStmt", "doWhileStmt", 
			"defFuncStmt", "defGlobalVarStmt", "stat"
		};
	}
	public static final String[] ruleNames = makeRuleNames();

	private static String[] makeLiteralNames() {
		return new String[] {
			null, "'[]'", null, null, null, "'import'", "'export'", "'of'", "'static'", 
			"'true'", "'false'", "'null'", "'func'", "'class'", "'struct'", "'enum'", 
			"'interface'", "'abstract'", "'override'", "'public'", "'protected'", 
			"'private'", "'internal'", "'friendly'", "'friend'", "'if'", "'else'", 
			"'elif'", "'switch'", "'for'", "'foreach'", "'while'", "'do'", "'break'", 
			"'return'", "'num'", "'byte'", "'short'", "'int'", "'long'", "'float'", 
			"'double'", "'bool'", "'string'", "'char'", "'var'", "','", "'?'", "';'", 
			"':'", "'('", "')'", "'['", "']'", "'{'", "'}'", "'<<'", "'>>'", "'+'", 
			"'++'", "'-'", "'--'", "'*'", "'/'", "'%'", "'&'", "'&&'", "'|'", "'||'", 
			"'^'", "'!'", "'~'", "'='", "'*='", "'/='", "'%='", "'+='", "'-='", "'<<='", 
			"'>>='", "'&='", "'^='", "'|='", "'<'", "'<='", "'>'", "'>='", "'=='", 
			"'!='", "'->'", "'.'", "'...'", "'$'"
		};
	}
	private static final String[] _LITERAL_NAMES = makeLiteralNames();
	private static String[] makeSymbolicNames() {
		return new String[] {
			null, null, "WS", "LineComment", "BlockComment", "Import", "Export", 
			"Of", "Static", "True", "False", "Null", "Func", "Class", "Struct", "Enum", 
			"Interface", "Abstract", "Override", "Public", "Protected", "Private", 
			"Internal", "Friendly", "Friend", "If", "Else", "Elif", "Switch", "For", 
			"Foreach", "While", "Do", "Break", "Return", "Num", "Byte", "Short", 
			"Int", "Long", "Float", "Double", "Bool", "String", "Char", "Var", "Comma", 
			"Question", "SemiColon", "Colon", "LeftParen", "RightParen", "LeftBracket", 
			"RightBracket", "LeftBrace", "RightBrace", "LeftShift", "RightShift", 
			"Plus", "Increase", "Minus", "Decrease", "Star", "Div", "Mod", "And", 
			"LogicAnd", "Or", "LogicOr", "Xor", "Not", "Tilde", "Assign", "MulAssign", 
			"DivAssign", "ModAssign", "PlusAssign", "MinusAssign", "LeftShiftAssign", 
			"RightShiftAssign", "AndAssign", "XorAssign", "OrAssign", "Less", "LessEqual", 
			"Greater", "GreaterEqual", "Equal", "NotEqual", "Arrow", "Dot", "Ellipsis", 
			"Dollar", "BinNum", "OctNum", "DecNum", "HexNum", "Identifier", "StringConstant"
		};
	}
	private static final String[] _SYMBOLIC_NAMES = makeSymbolicNames();
	public static final Vocabulary VOCABULARY = new VocabularyImpl(_LITERAL_NAMES, _SYMBOLIC_NAMES);

	/**
	 * @deprecated Use {@link #VOCABULARY} instead.
	 */
	@Deprecated
	public static final String[] tokenNames;
	static {
		tokenNames = new String[_SYMBOLIC_NAMES.length];
		for (int i = 0; i < tokenNames.length; i++) {
			tokenNames[i] = VOCABULARY.getLiteralName(i);
			if (tokenNames[i] == null) {
				tokenNames[i] = VOCABULARY.getSymbolicName(i);
			}

			if (tokenNames[i] == null) {
				tokenNames[i] = "<INVALID>";
			}
		}
	}

	@Override
	@Deprecated
	public String[] getTokenNames() {
		return tokenNames;
	}

	@Override

	public Vocabulary getVocabulary() {
		return VOCABULARY;
	}

	@Override
	public String getGrammarFileName() { return "TBox.g4"; }

	@Override
	public String[] getRuleNames() { return ruleNames; }

	@Override
	public String getSerializedATN() { return _serializedATN; }

	@Override
	public ATN getATN() { return _ATN; }

	public TBoxParser(TokenStream input) {
		super(input);
		_interp = new ParserATNSimulator(this,_ATN,_decisionToDFA,_sharedContextCache);
	}

	public static class NumContext extends ParserRuleContext {
		public TerminalNode BinNum() { return getToken(TBoxParser.BinNum, 0); }
		public TerminalNode OctNum() { return getToken(TBoxParser.OctNum, 0); }
		public TerminalNode DecNum() { return getToken(TBoxParser.DecNum, 0); }
		public TerminalNode HexNum() { return getToken(TBoxParser.HexNum, 0); }
		public NumContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_num; }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof TBoxListener ) ((TBoxListener)listener).enterNum(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof TBoxListener ) ((TBoxListener)listener).exitNum(this);
		}
		@Override
		public <T> T accept(ParseTreeVisitor<? extends T> visitor) {
			if ( visitor instanceof TBoxVisitor ) return ((TBoxVisitor<? extends T>)visitor).visitNum(this);
			else return visitor.visitChildren(this);
		}
	}

	public final NumContext num() throws RecognitionException {
		NumContext _localctx = new NumContext(_ctx, getState());
		enterRule(_localctx, 0, RULE_num);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(70);
			_la = _input.LA(1);
			if ( !(((((_la - 93)) & ~0x3f) == 0 && ((1L << (_la - 93)) & ((1L << (BinNum - 93)) | (1L << (OctNum - 93)) | (1L << (DecNum - 93)) | (1L << (HexNum - 93)))) != 0)) ) {
			_errHandler.recoverInline(this);
			}
			else {
				if ( _input.LA(1)==Token.EOF ) matchedEOF = true;
				_errHandler.reportMatch(this);
				consume();
			}
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class ConstantContext extends ParserRuleContext {
		public TerminalNode StringConstant() { return getToken(TBoxParser.StringConstant, 0); }
		public NumContext num() {
			return getRuleContext(NumContext.class,0);
		}
		public ConstantContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_constant; }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof TBoxListener ) ((TBoxListener)listener).enterConstant(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof TBoxListener ) ((TBoxListener)listener).exitConstant(this);
		}
		@Override
		public <T> T accept(ParseTreeVisitor<? extends T> visitor) {
			if ( visitor instanceof TBoxVisitor ) return ((TBoxVisitor<? extends T>)visitor).visitConstant(this);
			else return visitor.visitChildren(this);
		}
	}

	public final ConstantContext constant() throws RecognitionException {
		ConstantContext _localctx = new ConstantContext(_ctx, getState());
		enterRule(_localctx, 2, RULE_constant);
		try {
			setState(74);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case StringConstant:
				enterOuterAlt(_localctx, 1);
				{
				setState(72);
				match(StringConstant);
				}
				break;
			case BinNum:
			case OctNum:
			case DecNum:
			case HexNum:
				enterOuterAlt(_localctx, 2);
				{
				setState(73);
				num();
				}
				break;
			default:
				throw new NoViableAltException(this);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class PrimExprContext extends ParserRuleContext {
		public ConstantContext constant() {
			return getRuleContext(ConstantContext.class,0);
		}
		public LibraryContext library() {
			return getRuleContext(LibraryContext.class,0);
		}
		public TerminalNode LeftParen() { return getToken(TBoxParser.LeftParen, 0); }
		public ExprContext expr() {
			return getRuleContext(ExprContext.class,0);
		}
		public TerminalNode RightParen() { return getToken(TBoxParser.RightParen, 0); }
		public PrimExprContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_primExpr; }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof TBoxListener ) ((TBoxListener)listener).enterPrimExpr(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof TBoxListener ) ((TBoxListener)listener).exitPrimExpr(this);
		}
		@Override
		public <T> T accept(ParseTreeVisitor<? extends T> visitor) {
			if ( visitor instanceof TBoxVisitor ) return ((TBoxVisitor<? extends T>)visitor).visitPrimExpr(this);
			else return visitor.visitChildren(this);
		}
	}

	public final PrimExprContext primExpr() throws RecognitionException {
		PrimExprContext _localctx = new PrimExprContext(_ctx, getState());
		enterRule(_localctx, 4, RULE_primExpr);
		try {
			setState(82);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case BinNum:
			case OctNum:
			case DecNum:
			case HexNum:
			case StringConstant:
				enterOuterAlt(_localctx, 1);
				{
				setState(76);
				constant();
				}
				break;
			case Identifier:
				enterOuterAlt(_localctx, 2);
				{
				setState(77);
				library(0);
				}
				break;
			case LeftParen:
				enterOuterAlt(_localctx, 3);
				{
				setState(78);
				match(LeftParen);
				setState(79);
				expr();
				setState(80);
				match(RightParen);
				}
				break;
			default:
				throw new NoViableAltException(this);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class PostExprContext extends ParserRuleContext {
		public PrimExprContext primExpr() {
			return getRuleContext(PrimExprContext.class,0);
		}
		public List<TerminalNode> LeftBracket() { return getTokens(TBoxParser.LeftBracket); }
		public TerminalNode LeftBracket(int i) {
			return getToken(TBoxParser.LeftBracket, i);
		}
		public List<ExprContext> expr() {
			return getRuleContexts(ExprContext.class);
		}
		public ExprContext expr(int i) {
			return getRuleContext(ExprContext.class,i);
		}
		public List<TerminalNode> RightBracket() { return getTokens(TBoxParser.RightBracket); }
		public TerminalNode RightBracket(int i) {
			return getToken(TBoxParser.RightBracket, i);
		}
		public List<TerminalNode> LeftParen() { return getTokens(TBoxParser.LeftParen); }
		public TerminalNode LeftParen(int i) {
			return getToken(TBoxParser.LeftParen, i);
		}
		public List<ArgsContext> args() {
			return getRuleContexts(ArgsContext.class);
		}
		public ArgsContext args(int i) {
			return getRuleContext(ArgsContext.class,i);
		}
		public List<TerminalNode> RightParen() { return getTokens(TBoxParser.RightParen); }
		public TerminalNode RightParen(int i) {
			return getToken(TBoxParser.RightParen, i);
		}
		public List<LibraryContext> library() {
			return getRuleContexts(LibraryContext.class);
		}
		public LibraryContext library(int i) {
			return getRuleContext(LibraryContext.class,i);
		}
		public List<TerminalNode> Increase() { return getTokens(TBoxParser.Increase); }
		public TerminalNode Increase(int i) {
			return getToken(TBoxParser.Increase, i);
		}
		public List<TerminalNode> Decrease() { return getTokens(TBoxParser.Decrease); }
		public TerminalNode Decrease(int i) {
			return getToken(TBoxParser.Decrease, i);
		}
		public List<TerminalNode> Dot() { return getTokens(TBoxParser.Dot); }
		public TerminalNode Dot(int i) {
			return getToken(TBoxParser.Dot, i);
		}
		public PostExprContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_postExpr; }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof TBoxListener ) ((TBoxListener)listener).enterPostExpr(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof TBoxListener ) ((TBoxListener)listener).exitPostExpr(this);
		}
		@Override
		public <T> T accept(ParseTreeVisitor<? extends T> visitor) {
			if ( visitor instanceof TBoxVisitor ) return ((TBoxVisitor<? extends T>)visitor).visitPostExpr(this);
			else return visitor.visitChildren(this);
		}
	}

	public final PostExprContext postExpr() throws RecognitionException {
		PostExprContext _localctx = new PostExprContext(_ctx, getState());
		enterRule(_localctx, 6, RULE_postExpr);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(84);
			primExpr();
			setState(98);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (((((_la - 50)) & ~0x3f) == 0 && ((1L << (_la - 50)) & ((1L << (LeftParen - 50)) | (1L << (LeftBracket - 50)) | (1L << (Increase - 50)) | (1L << (Decrease - 50)) | (1L << (Dot - 50)))) != 0)) {
				{
				setState(96);
				_errHandler.sync(this);
				switch (_input.LA(1)) {
				case LeftBracket:
					{
					setState(85);
					match(LeftBracket);
					setState(86);
					expr();
					setState(87);
					match(RightBracket);
					}
					break;
				case LeftParen:
					{
					setState(89);
					match(LeftParen);
					setState(90);
					args();
					setState(91);
					match(RightParen);
					}
					break;
				case Dot:
					{
					{
					setState(93);
					match(Dot);
					}
					setState(94);
					library(0);
					}
					break;
				case Increase:
				case Decrease:
					{
					setState(95);
					_la = _input.LA(1);
					if ( !(_la==Increase || _la==Decrease) ) {
					_errHandler.recoverInline(this);
					}
					else {
						if ( _input.LA(1)==Token.EOF ) matchedEOF = true;
						_errHandler.reportMatch(this);
						consume();
					}
					}
					break;
				default:
					throw new NoViableAltException(this);
				}
				}
				setState(100);
				_errHandler.sync(this);
				_la = _input.LA(1);
			}
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class UnaryExprContext extends ParserRuleContext {
		public PostExprContext postExpr() {
			return getRuleContext(PostExprContext.class,0);
		}
		public CastExprContext castExpr() {
			return getRuleContext(CastExprContext.class,0);
		}
		public TerminalNode LogicAnd() { return getToken(TBoxParser.LogicAnd, 0); }
		public LibraryContext library() {
			return getRuleContext(LibraryContext.class,0);
		}
		public TerminalNode And() { return getToken(TBoxParser.And, 0); }
		public TerminalNode Tilde() { return getToken(TBoxParser.Tilde, 0); }
		public TerminalNode Not() { return getToken(TBoxParser.Not, 0); }
		public List<TerminalNode> Increase() { return getTokens(TBoxParser.Increase); }
		public TerminalNode Increase(int i) {
			return getToken(TBoxParser.Increase, i);
		}
		public List<TerminalNode> Decrease() { return getTokens(TBoxParser.Decrease); }
		public TerminalNode Decrease(int i) {
			return getToken(TBoxParser.Decrease, i);
		}
		public UnaryExprContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_unaryExpr; }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof TBoxListener ) ((TBoxListener)listener).enterUnaryExpr(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof TBoxListener ) ((TBoxListener)listener).exitUnaryExpr(this);
		}
		@Override
		public <T> T accept(ParseTreeVisitor<? extends T> visitor) {
			if ( visitor instanceof TBoxVisitor ) return ((TBoxVisitor<? extends T>)visitor).visitUnaryExpr(this);
			else return visitor.visitChildren(this);
		}
	}

	public final UnaryExprContext unaryExpr() throws RecognitionException {
		UnaryExprContext _localctx = new UnaryExprContext(_ctx, getState());
		enterRule(_localctx, 8, RULE_unaryExpr);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(104);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (_la==Increase || _la==Decrease) {
				{
				{
				setState(101);
				_la = _input.LA(1);
				if ( !(_la==Increase || _la==Decrease) ) {
				_errHandler.recoverInline(this);
				}
				else {
					if ( _input.LA(1)==Token.EOF ) matchedEOF = true;
					_errHandler.reportMatch(this);
					consume();
				}
				}
				}
				setState(106);
				_errHandler.sync(this);
				_la = _input.LA(1);
			}
			setState(112);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case LeftParen:
			case BinNum:
			case OctNum:
			case DecNum:
			case HexNum:
			case Identifier:
			case StringConstant:
				{
				setState(107);
				postExpr();
				}
				break;
			case And:
			case Not:
			case Tilde:
				{
				setState(108);
				_la = _input.LA(1);
				if ( !(((((_la - 65)) & ~0x3f) == 0 && ((1L << (_la - 65)) & ((1L << (And - 65)) | (1L << (Not - 65)) | (1L << (Tilde - 65)))) != 0)) ) {
				_errHandler.recoverInline(this);
				}
				else {
					if ( _input.LA(1)==Token.EOF ) matchedEOF = true;
					_errHandler.reportMatch(this);
					consume();
				}
				setState(109);
				castExpr();
				}
				break;
			case LogicAnd:
				{
				setState(110);
				match(LogicAnd);
				setState(111);
				library(0);
				}
				break;
			default:
				throw new NoViableAltException(this);
			}
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class CastExprContext extends ParserRuleContext {
		public UnaryExprContext unaryExpr() {
			return getRuleContext(UnaryExprContext.class,0);
		}
		public NumContext num() {
			return getRuleContext(NumContext.class,0);
		}
		public CastExprContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_castExpr; }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof TBoxListener ) ((TBoxListener)listener).enterCastExpr(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof TBoxListener ) ((TBoxListener)listener).exitCastExpr(this);
		}
		@Override
		public <T> T accept(ParseTreeVisitor<? extends T> visitor) {
			if ( visitor instanceof TBoxVisitor ) return ((TBoxVisitor<? extends T>)visitor).visitCastExpr(this);
			else return visitor.visitChildren(this);
		}
	}

	public final CastExprContext castExpr() throws RecognitionException {
		CastExprContext _localctx = new CastExprContext(_ctx, getState());
		enterRule(_localctx, 10, RULE_castExpr);
		try {
			setState(116);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,6,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(114);
				unaryExpr();
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(115);
				num();
				}
				break;
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class MulExprContext extends ParserRuleContext {
		public List<CastExprContext> castExpr() {
			return getRuleContexts(CastExprContext.class);
		}
		public CastExprContext castExpr(int i) {
			return getRuleContext(CastExprContext.class,i);
		}
		public List<TerminalNode> Star() { return getTokens(TBoxParser.Star); }
		public TerminalNode Star(int i) {
			return getToken(TBoxParser.Star, i);
		}
		public List<TerminalNode> Div() { return getTokens(TBoxParser.Div); }
		public TerminalNode Div(int i) {
			return getToken(TBoxParser.Div, i);
		}
		public List<TerminalNode> Mod() { return getTokens(TBoxParser.Mod); }
		public TerminalNode Mod(int i) {
			return getToken(TBoxParser.Mod, i);
		}
		public MulExprContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_mulExpr; }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof TBoxListener ) ((TBoxListener)listener).enterMulExpr(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof TBoxListener ) ((TBoxListener)listener).exitMulExpr(this);
		}
		@Override
		public <T> T accept(ParseTreeVisitor<? extends T> visitor) {
			if ( visitor instanceof TBoxVisitor ) return ((TBoxVisitor<? extends T>)visitor).visitMulExpr(this);
			else return visitor.visitChildren(this);
		}
	}

	public final MulExprContext mulExpr() throws RecognitionException {
		MulExprContext _localctx = new MulExprContext(_ctx, getState());
		enterRule(_localctx, 12, RULE_mulExpr);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(118);
			castExpr();
			setState(123);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (((((_la - 62)) & ~0x3f) == 0 && ((1L << (_la - 62)) & ((1L << (Star - 62)) | (1L << (Div - 62)) | (1L << (Mod - 62)))) != 0)) {
				{
				{
				setState(119);
				_la = _input.LA(1);
				if ( !(((((_la - 62)) & ~0x3f) == 0 && ((1L << (_la - 62)) & ((1L << (Star - 62)) | (1L << (Div - 62)) | (1L << (Mod - 62)))) != 0)) ) {
				_errHandler.recoverInline(this);
				}
				else {
					if ( _input.LA(1)==Token.EOF ) matchedEOF = true;
					_errHandler.reportMatch(this);
					consume();
				}
				setState(120);
				castExpr();
				}
				}
				setState(125);
				_errHandler.sync(this);
				_la = _input.LA(1);
			}
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class AddExprContext extends ParserRuleContext {
		public List<MulExprContext> mulExpr() {
			return getRuleContexts(MulExprContext.class);
		}
		public MulExprContext mulExpr(int i) {
			return getRuleContext(MulExprContext.class,i);
		}
		public List<TerminalNode> Plus() { return getTokens(TBoxParser.Plus); }
		public TerminalNode Plus(int i) {
			return getToken(TBoxParser.Plus, i);
		}
		public List<TerminalNode> Minus() { return getTokens(TBoxParser.Minus); }
		public TerminalNode Minus(int i) {
			return getToken(TBoxParser.Minus, i);
		}
		public AddExprContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_addExpr; }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof TBoxListener ) ((TBoxListener)listener).enterAddExpr(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof TBoxListener ) ((TBoxListener)listener).exitAddExpr(this);
		}
		@Override
		public <T> T accept(ParseTreeVisitor<? extends T> visitor) {
			if ( visitor instanceof TBoxVisitor ) return ((TBoxVisitor<? extends T>)visitor).visitAddExpr(this);
			else return visitor.visitChildren(this);
		}
	}

	public final AddExprContext addExpr() throws RecognitionException {
		AddExprContext _localctx = new AddExprContext(_ctx, getState());
		enterRule(_localctx, 14, RULE_addExpr);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(126);
			mulExpr();
			setState(131);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (_la==Plus || _la==Minus) {
				{
				{
				setState(127);
				_la = _input.LA(1);
				if ( !(_la==Plus || _la==Minus) ) {
				_errHandler.recoverInline(this);
				}
				else {
					if ( _input.LA(1)==Token.EOF ) matchedEOF = true;
					_errHandler.reportMatch(this);
					consume();
				}
				setState(128);
				mulExpr();
				}
				}
				setState(133);
				_errHandler.sync(this);
				_la = _input.LA(1);
			}
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class ShiftExprContext extends ParserRuleContext {
		public List<AddExprContext> addExpr() {
			return getRuleContexts(AddExprContext.class);
		}
		public AddExprContext addExpr(int i) {
			return getRuleContext(AddExprContext.class,i);
		}
		public List<TerminalNode> LeftShift() { return getTokens(TBoxParser.LeftShift); }
		public TerminalNode LeftShift(int i) {
			return getToken(TBoxParser.LeftShift, i);
		}
		public List<TerminalNode> RightShift() { return getTokens(TBoxParser.RightShift); }
		public TerminalNode RightShift(int i) {
			return getToken(TBoxParser.RightShift, i);
		}
		public ShiftExprContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_shiftExpr; }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof TBoxListener ) ((TBoxListener)listener).enterShiftExpr(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof TBoxListener ) ((TBoxListener)listener).exitShiftExpr(this);
		}
		@Override
		public <T> T accept(ParseTreeVisitor<? extends T> visitor) {
			if ( visitor instanceof TBoxVisitor ) return ((TBoxVisitor<? extends T>)visitor).visitShiftExpr(this);
			else return visitor.visitChildren(this);
		}
	}

	public final ShiftExprContext shiftExpr() throws RecognitionException {
		ShiftExprContext _localctx = new ShiftExprContext(_ctx, getState());
		enterRule(_localctx, 16, RULE_shiftExpr);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(134);
			addExpr();
			setState(139);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (_la==LeftShift || _la==RightShift) {
				{
				{
				setState(135);
				_la = _input.LA(1);
				if ( !(_la==LeftShift || _la==RightShift) ) {
				_errHandler.recoverInline(this);
				}
				else {
					if ( _input.LA(1)==Token.EOF ) matchedEOF = true;
					_errHandler.reportMatch(this);
					consume();
				}
				setState(136);
				addExpr();
				}
				}
				setState(141);
				_errHandler.sync(this);
				_la = _input.LA(1);
			}
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class RelatExprContext extends ParserRuleContext {
		public List<ShiftExprContext> shiftExpr() {
			return getRuleContexts(ShiftExprContext.class);
		}
		public ShiftExprContext shiftExpr(int i) {
			return getRuleContext(ShiftExprContext.class,i);
		}
		public List<TerminalNode> Less() { return getTokens(TBoxParser.Less); }
		public TerminalNode Less(int i) {
			return getToken(TBoxParser.Less, i);
		}
		public List<TerminalNode> Greater() { return getTokens(TBoxParser.Greater); }
		public TerminalNode Greater(int i) {
			return getToken(TBoxParser.Greater, i);
		}
		public List<TerminalNode> LessEqual() { return getTokens(TBoxParser.LessEqual); }
		public TerminalNode LessEqual(int i) {
			return getToken(TBoxParser.LessEqual, i);
		}
		public List<TerminalNode> GreaterEqual() { return getTokens(TBoxParser.GreaterEqual); }
		public TerminalNode GreaterEqual(int i) {
			return getToken(TBoxParser.GreaterEqual, i);
		}
		public RelatExprContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_relatExpr; }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof TBoxListener ) ((TBoxListener)listener).enterRelatExpr(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof TBoxListener ) ((TBoxListener)listener).exitRelatExpr(this);
		}
		@Override
		public <T> T accept(ParseTreeVisitor<? extends T> visitor) {
			if ( visitor instanceof TBoxVisitor ) return ((TBoxVisitor<? extends T>)visitor).visitRelatExpr(this);
			else return visitor.visitChildren(this);
		}
	}

	public final RelatExprContext relatExpr() throws RecognitionException {
		RelatExprContext _localctx = new RelatExprContext(_ctx, getState());
		enterRule(_localctx, 18, RULE_relatExpr);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(142);
			shiftExpr();
			setState(147);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (((((_la - 83)) & ~0x3f) == 0 && ((1L << (_la - 83)) & ((1L << (Less - 83)) | (1L << (LessEqual - 83)) | (1L << (Greater - 83)) | (1L << (GreaterEqual - 83)))) != 0)) {
				{
				{
				setState(143);
				_la = _input.LA(1);
				if ( !(((((_la - 83)) & ~0x3f) == 0 && ((1L << (_la - 83)) & ((1L << (Less - 83)) | (1L << (LessEqual - 83)) | (1L << (Greater - 83)) | (1L << (GreaterEqual - 83)))) != 0)) ) {
				_errHandler.recoverInline(this);
				}
				else {
					if ( _input.LA(1)==Token.EOF ) matchedEOF = true;
					_errHandler.reportMatch(this);
					consume();
				}
				setState(144);
				shiftExpr();
				}
				}
				setState(149);
				_errHandler.sync(this);
				_la = _input.LA(1);
			}
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class EquExprContext extends ParserRuleContext {
		public List<RelatExprContext> relatExpr() {
			return getRuleContexts(RelatExprContext.class);
		}
		public RelatExprContext relatExpr(int i) {
			return getRuleContext(RelatExprContext.class,i);
		}
		public List<TerminalNode> Equal() { return getTokens(TBoxParser.Equal); }
		public TerminalNode Equal(int i) {
			return getToken(TBoxParser.Equal, i);
		}
		public List<TerminalNode> NotEqual() { return getTokens(TBoxParser.NotEqual); }
		public TerminalNode NotEqual(int i) {
			return getToken(TBoxParser.NotEqual, i);
		}
		public EquExprContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_equExpr; }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof TBoxListener ) ((TBoxListener)listener).enterEquExpr(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof TBoxListener ) ((TBoxListener)listener).exitEquExpr(this);
		}
		@Override
		public <T> T accept(ParseTreeVisitor<? extends T> visitor) {
			if ( visitor instanceof TBoxVisitor ) return ((TBoxVisitor<? extends T>)visitor).visitEquExpr(this);
			else return visitor.visitChildren(this);
		}
	}

	public final EquExprContext equExpr() throws RecognitionException {
		EquExprContext _localctx = new EquExprContext(_ctx, getState());
		enterRule(_localctx, 20, RULE_equExpr);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(150);
			relatExpr();
			setState(155);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (_la==Equal || _la==NotEqual) {
				{
				{
				setState(151);
				_la = _input.LA(1);
				if ( !(_la==Equal || _la==NotEqual) ) {
				_errHandler.recoverInline(this);
				}
				else {
					if ( _input.LA(1)==Token.EOF ) matchedEOF = true;
					_errHandler.reportMatch(this);
					consume();
				}
				setState(152);
				relatExpr();
				}
				}
				setState(157);
				_errHandler.sync(this);
				_la = _input.LA(1);
			}
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class AndExprContext extends ParserRuleContext {
		public List<EquExprContext> equExpr() {
			return getRuleContexts(EquExprContext.class);
		}
		public EquExprContext equExpr(int i) {
			return getRuleContext(EquExprContext.class,i);
		}
		public List<TerminalNode> And() { return getTokens(TBoxParser.And); }
		public TerminalNode And(int i) {
			return getToken(TBoxParser.And, i);
		}
		public AndExprContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_andExpr; }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof TBoxListener ) ((TBoxListener)listener).enterAndExpr(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof TBoxListener ) ((TBoxListener)listener).exitAndExpr(this);
		}
		@Override
		public <T> T accept(ParseTreeVisitor<? extends T> visitor) {
			if ( visitor instanceof TBoxVisitor ) return ((TBoxVisitor<? extends T>)visitor).visitAndExpr(this);
			else return visitor.visitChildren(this);
		}
	}

	public final AndExprContext andExpr() throws RecognitionException {
		AndExprContext _localctx = new AndExprContext(_ctx, getState());
		enterRule(_localctx, 22, RULE_andExpr);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(158);
			equExpr();
			setState(163);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (_la==And) {
				{
				{
				setState(159);
				match(And);
				setState(160);
				equExpr();
				}
				}
				setState(165);
				_errHandler.sync(this);
				_la = _input.LA(1);
			}
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class XorExprContext extends ParserRuleContext {
		public List<AndExprContext> andExpr() {
			return getRuleContexts(AndExprContext.class);
		}
		public AndExprContext andExpr(int i) {
			return getRuleContext(AndExprContext.class,i);
		}
		public List<TerminalNode> Xor() { return getTokens(TBoxParser.Xor); }
		public TerminalNode Xor(int i) {
			return getToken(TBoxParser.Xor, i);
		}
		public XorExprContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_xorExpr; }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof TBoxListener ) ((TBoxListener)listener).enterXorExpr(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof TBoxListener ) ((TBoxListener)listener).exitXorExpr(this);
		}
		@Override
		public <T> T accept(ParseTreeVisitor<? extends T> visitor) {
			if ( visitor instanceof TBoxVisitor ) return ((TBoxVisitor<? extends T>)visitor).visitXorExpr(this);
			else return visitor.visitChildren(this);
		}
	}

	public final XorExprContext xorExpr() throws RecognitionException {
		XorExprContext _localctx = new XorExprContext(_ctx, getState());
		enterRule(_localctx, 24, RULE_xorExpr);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(166);
			andExpr();
			setState(171);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (_la==Xor) {
				{
				{
				setState(167);
				match(Xor);
				setState(168);
				andExpr();
				}
				}
				setState(173);
				_errHandler.sync(this);
				_la = _input.LA(1);
			}
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class OrExprContext extends ParserRuleContext {
		public List<XorExprContext> xorExpr() {
			return getRuleContexts(XorExprContext.class);
		}
		public XorExprContext xorExpr(int i) {
			return getRuleContext(XorExprContext.class,i);
		}
		public List<TerminalNode> Or() { return getTokens(TBoxParser.Or); }
		public TerminalNode Or(int i) {
			return getToken(TBoxParser.Or, i);
		}
		public OrExprContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_orExpr; }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof TBoxListener ) ((TBoxListener)listener).enterOrExpr(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof TBoxListener ) ((TBoxListener)listener).exitOrExpr(this);
		}
		@Override
		public <T> T accept(ParseTreeVisitor<? extends T> visitor) {
			if ( visitor instanceof TBoxVisitor ) return ((TBoxVisitor<? extends T>)visitor).visitOrExpr(this);
			else return visitor.visitChildren(this);
		}
	}

	public final OrExprContext orExpr() throws RecognitionException {
		OrExprContext _localctx = new OrExprContext(_ctx, getState());
		enterRule(_localctx, 26, RULE_orExpr);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(174);
			xorExpr();
			setState(179);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (_la==Or) {
				{
				{
				setState(175);
				match(Or);
				setState(176);
				xorExpr();
				}
				}
				setState(181);
				_errHandler.sync(this);
				_la = _input.LA(1);
			}
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class LogicAndExprContext extends ParserRuleContext {
		public List<OrExprContext> orExpr() {
			return getRuleContexts(OrExprContext.class);
		}
		public OrExprContext orExpr(int i) {
			return getRuleContext(OrExprContext.class,i);
		}
		public List<TerminalNode> LogicAnd() { return getTokens(TBoxParser.LogicAnd); }
		public TerminalNode LogicAnd(int i) {
			return getToken(TBoxParser.LogicAnd, i);
		}
		public LogicAndExprContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_logicAndExpr; }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof TBoxListener ) ((TBoxListener)listener).enterLogicAndExpr(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof TBoxListener ) ((TBoxListener)listener).exitLogicAndExpr(this);
		}
		@Override
		public <T> T accept(ParseTreeVisitor<? extends T> visitor) {
			if ( visitor instanceof TBoxVisitor ) return ((TBoxVisitor<? extends T>)visitor).visitLogicAndExpr(this);
			else return visitor.visitChildren(this);
		}
	}

	public final LogicAndExprContext logicAndExpr() throws RecognitionException {
		LogicAndExprContext _localctx = new LogicAndExprContext(_ctx, getState());
		enterRule(_localctx, 28, RULE_logicAndExpr);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(182);
			orExpr();
			setState(187);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (_la==LogicAnd) {
				{
				{
				setState(183);
				match(LogicAnd);
				setState(184);
				orExpr();
				}
				}
				setState(189);
				_errHandler.sync(this);
				_la = _input.LA(1);
			}
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class LogicOrExprContext extends ParserRuleContext {
		public List<LogicAndExprContext> logicAndExpr() {
			return getRuleContexts(LogicAndExprContext.class);
		}
		public LogicAndExprContext logicAndExpr(int i) {
			return getRuleContext(LogicAndExprContext.class,i);
		}
		public List<TerminalNode> LogicOr() { return getTokens(TBoxParser.LogicOr); }
		public TerminalNode LogicOr(int i) {
			return getToken(TBoxParser.LogicOr, i);
		}
		public LogicOrExprContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_logicOrExpr; }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof TBoxListener ) ((TBoxListener)listener).enterLogicOrExpr(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof TBoxListener ) ((TBoxListener)listener).exitLogicOrExpr(this);
		}
		@Override
		public <T> T accept(ParseTreeVisitor<? extends T> visitor) {
			if ( visitor instanceof TBoxVisitor ) return ((TBoxVisitor<? extends T>)visitor).visitLogicOrExpr(this);
			else return visitor.visitChildren(this);
		}
	}

	public final LogicOrExprContext logicOrExpr() throws RecognitionException {
		LogicOrExprContext _localctx = new LogicOrExprContext(_ctx, getState());
		enterRule(_localctx, 30, RULE_logicOrExpr);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(190);
			logicAndExpr();
			setState(195);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (_la==LogicOr) {
				{
				{
				setState(191);
				match(LogicOr);
				setState(192);
				logicAndExpr();
				}
				}
				setState(197);
				_errHandler.sync(this);
				_la = _input.LA(1);
			}
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class QuesExprContext extends ParserRuleContext {
		public LogicOrExprContext logicOrExpr() {
			return getRuleContext(LogicOrExprContext.class,0);
		}
		public TerminalNode Question() { return getToken(TBoxParser.Question, 0); }
		public ExprContext expr() {
			return getRuleContext(ExprContext.class,0);
		}
		public TerminalNode Colon() { return getToken(TBoxParser.Colon, 0); }
		public QuesExprContext quesExpr() {
			return getRuleContext(QuesExprContext.class,0);
		}
		public QuesExprContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_quesExpr; }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof TBoxListener ) ((TBoxListener)listener).enterQuesExpr(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof TBoxListener ) ((TBoxListener)listener).exitQuesExpr(this);
		}
		@Override
		public <T> T accept(ParseTreeVisitor<? extends T> visitor) {
			if ( visitor instanceof TBoxVisitor ) return ((TBoxVisitor<? extends T>)visitor).visitQuesExpr(this);
			else return visitor.visitChildren(this);
		}
	}

	public final QuesExprContext quesExpr() throws RecognitionException {
		QuesExprContext _localctx = new QuesExprContext(_ctx, getState());
		enterRule(_localctx, 32, RULE_quesExpr);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(198);
			logicOrExpr();
			setState(204);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==Question) {
				{
				setState(199);
				match(Question);
				setState(200);
				expr();
				setState(201);
				match(Colon);
				setState(202);
				quesExpr();
				}
			}

			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class AssignExprContext extends ParserRuleContext {
		public ConstantContext constant() {
			return getRuleContext(ConstantContext.class,0);
		}
		public UnaryExprContext unaryExpr() {
			return getRuleContext(UnaryExprContext.class,0);
		}
		public AssignExprContext assignExpr() {
			return getRuleContext(AssignExprContext.class,0);
		}
		public TerminalNode Assign() { return getToken(TBoxParser.Assign, 0); }
		public TerminalNode MulAssign() { return getToken(TBoxParser.MulAssign, 0); }
		public TerminalNode DivAssign() { return getToken(TBoxParser.DivAssign, 0); }
		public TerminalNode ModAssign() { return getToken(TBoxParser.ModAssign, 0); }
		public TerminalNode PlusAssign() { return getToken(TBoxParser.PlusAssign, 0); }
		public TerminalNode MinusAssign() { return getToken(TBoxParser.MinusAssign, 0); }
		public TerminalNode LeftShiftAssign() { return getToken(TBoxParser.LeftShiftAssign, 0); }
		public TerminalNode RightShiftAssign() { return getToken(TBoxParser.RightShiftAssign, 0); }
		public TerminalNode AndAssign() { return getToken(TBoxParser.AndAssign, 0); }
		public TerminalNode XorAssign() { return getToken(TBoxParser.XorAssign, 0); }
		public TerminalNode OrAssign() { return getToken(TBoxParser.OrAssign, 0); }
		public QuesExprContext quesExpr() {
			return getRuleContext(QuesExprContext.class,0);
		}
		public AssignExprContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_assignExpr; }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof TBoxListener ) ((TBoxListener)listener).enterAssignExpr(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof TBoxListener ) ((TBoxListener)listener).exitAssignExpr(this);
		}
		@Override
		public <T> T accept(ParseTreeVisitor<? extends T> visitor) {
			if ( visitor instanceof TBoxVisitor ) return ((TBoxVisitor<? extends T>)visitor).visitAssignExpr(this);
			else return visitor.visitChildren(this);
		}
	}

	public final AssignExprContext assignExpr() throws RecognitionException {
		AssignExprContext _localctx = new AssignExprContext(_ctx, getState());
		enterRule(_localctx, 34, RULE_assignExpr);
		int _la;
		try {
			setState(212);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,18,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(206);
				constant();
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(207);
				unaryExpr();
				setState(208);
				_la = _input.LA(1);
				if ( !(((((_la - 72)) & ~0x3f) == 0 && ((1L << (_la - 72)) & ((1L << (Assign - 72)) | (1L << (MulAssign - 72)) | (1L << (DivAssign - 72)) | (1L << (ModAssign - 72)) | (1L << (PlusAssign - 72)) | (1L << (MinusAssign - 72)) | (1L << (LeftShiftAssign - 72)) | (1L << (RightShiftAssign - 72)) | (1L << (AndAssign - 72)) | (1L << (XorAssign - 72)) | (1L << (OrAssign - 72)))) != 0)) ) {
				_errHandler.recoverInline(this);
				}
				else {
					if ( _input.LA(1)==Token.EOF ) matchedEOF = true;
					_errHandler.reportMatch(this);
					consume();
				}
				setState(209);
				assignExpr();
				}
				break;
			case 3:
				enterOuterAlt(_localctx, 3);
				{
				setState(211);
				quesExpr();
				}
				break;
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class ArgsContext extends ParserRuleContext {
		public List<ExprContext> expr() {
			return getRuleContexts(ExprContext.class);
		}
		public ExprContext expr(int i) {
			return getRuleContext(ExprContext.class,i);
		}
		public List<TerminalNode> Comma() { return getTokens(TBoxParser.Comma); }
		public TerminalNode Comma(int i) {
			return getToken(TBoxParser.Comma, i);
		}
		public ArgsContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_args; }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof TBoxListener ) ((TBoxListener)listener).enterArgs(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof TBoxListener ) ((TBoxListener)listener).exitArgs(this);
		}
		@Override
		public <T> T accept(ParseTreeVisitor<? extends T> visitor) {
			if ( visitor instanceof TBoxVisitor ) return ((TBoxVisitor<? extends T>)visitor).visitArgs(this);
			else return visitor.visitChildren(this);
		}
	}

	public final ArgsContext args() throws RecognitionException {
		ArgsContext _localctx = new ArgsContext(_ctx, getState());
		enterRule(_localctx, 36, RULE_args);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(222);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (((((_la - 50)) & ~0x3f) == 0 && ((1L << (_la - 50)) & ((1L << (LeftParen - 50)) | (1L << (Increase - 50)) | (1L << (Decrease - 50)) | (1L << (And - 50)) | (1L << (LogicAnd - 50)) | (1L << (Not - 50)) | (1L << (Tilde - 50)) | (1L << (BinNum - 50)) | (1L << (OctNum - 50)) | (1L << (DecNum - 50)) | (1L << (HexNum - 50)) | (1L << (Identifier - 50)) | (1L << (StringConstant - 50)))) != 0)) {
				{
				setState(214);
				expr();
				setState(219);
				_errHandler.sync(this);
				_la = _input.LA(1);
				while (_la==Comma) {
					{
					{
					setState(215);
					match(Comma);
					setState(216);
					expr();
					}
					}
					setState(221);
					_errHandler.sync(this);
					_la = _input.LA(1);
				}
				}
			}

			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class ExprContext extends ParserRuleContext {
		public List<AssignExprContext> assignExpr() {
			return getRuleContexts(AssignExprContext.class);
		}
		public AssignExprContext assignExpr(int i) {
			return getRuleContext(AssignExprContext.class,i);
		}
		public List<TerminalNode> Comma() { return getTokens(TBoxParser.Comma); }
		public TerminalNode Comma(int i) {
			return getToken(TBoxParser.Comma, i);
		}
		public ExprContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_expr; }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof TBoxListener ) ((TBoxListener)listener).enterExpr(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof TBoxListener ) ((TBoxListener)listener).exitExpr(this);
		}
		@Override
		public <T> T accept(ParseTreeVisitor<? extends T> visitor) {
			if ( visitor instanceof TBoxVisitor ) return ((TBoxVisitor<? extends T>)visitor).visitExpr(this);
			else return visitor.visitChildren(this);
		}
	}

	public final ExprContext expr() throws RecognitionException {
		ExprContext _localctx = new ExprContext(_ctx, getState());
		enterRule(_localctx, 38, RULE_expr);
		try {
			int _alt;
			enterOuterAlt(_localctx, 1);
			{
			setState(224);
			assignExpr();
			setState(229);
			_errHandler.sync(this);
			_alt = getInterpreter().adaptivePredict(_input,21,_ctx);
			while ( _alt!=2 && _alt!= ATN.INVALID_ALT_NUMBER ) {
				if ( _alt==1 ) {
					{
					{
					setState(225);
					match(Comma);
					setState(226);
					assignExpr();
					}
					} 
				}
				setState(231);
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,21,_ctx);
			}
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class LibraryContext extends ParserRuleContext {
		public TerminalNode Identifier() { return getToken(TBoxParser.Identifier, 0); }
		public LibraryContext library() {
			return getRuleContext(LibraryContext.class,0);
		}
		public TerminalNode Dot() { return getToken(TBoxParser.Dot, 0); }
		public LibraryContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_library; }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof TBoxListener ) ((TBoxListener)listener).enterLibrary(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof TBoxListener ) ((TBoxListener)listener).exitLibrary(this);
		}
		@Override
		public <T> T accept(ParseTreeVisitor<? extends T> visitor) {
			if ( visitor instanceof TBoxVisitor ) return ((TBoxVisitor<? extends T>)visitor).visitLibrary(this);
			else return visitor.visitChildren(this);
		}
	}

	public final LibraryContext library() throws RecognitionException {
		return library(0);
	}

	private LibraryContext library(int _p) throws RecognitionException {
		ParserRuleContext _parentctx = _ctx;
		int _parentState = getState();
		LibraryContext _localctx = new LibraryContext(_ctx, _parentState);
		LibraryContext _prevctx = _localctx;
		int _startState = 40;
		enterRecursionRule(_localctx, 40, RULE_library, _p);
		try {
			int _alt;
			enterOuterAlt(_localctx, 1);
			{
			{
			setState(233);
			match(Identifier);
			}
			_ctx.stop = _input.LT(-1);
			setState(240);
			_errHandler.sync(this);
			_alt = getInterpreter().adaptivePredict(_input,22,_ctx);
			while ( _alt!=2 && _alt!= ATN.INVALID_ALT_NUMBER ) {
				if ( _alt==1 ) {
					if ( _parseListeners!=null ) triggerExitRuleEvent();
					_prevctx = _localctx;
					{
					{
					_localctx = new LibraryContext(_parentctx, _parentState);
					pushNewRecursionContext(_localctx, _startState, RULE_library);
					setState(235);
					if (!(precpred(_ctx, 2))) throw new FailedPredicateException(this, "precpred(_ctx, 2)");
					setState(236);
					match(Dot);
					setState(237);
					match(Identifier);
					}
					} 
				}
				setState(242);
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,22,_ctx);
			}
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			unrollRecursionContexts(_parentctx);
		}
		return _localctx;
	}

	public static class ImportStmtContext extends ParserRuleContext {
		public TerminalNode Import() { return getToken(TBoxParser.Import, 0); }
		public LibraryContext library() {
			return getRuleContext(LibraryContext.class,0);
		}
		public TerminalNode SemiColon() { return getToken(TBoxParser.SemiColon, 0); }
		public ImportStmtContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_importStmt; }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof TBoxListener ) ((TBoxListener)listener).enterImportStmt(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof TBoxListener ) ((TBoxListener)listener).exitImportStmt(this);
		}
		@Override
		public <T> T accept(ParseTreeVisitor<? extends T> visitor) {
			if ( visitor instanceof TBoxVisitor ) return ((TBoxVisitor<? extends T>)visitor).visitImportStmt(this);
			else return visitor.visitChildren(this);
		}
	}

	public final ImportStmtContext importStmt() throws RecognitionException {
		ImportStmtContext _localctx = new ImportStmtContext(_ctx, getState());
		enterRule(_localctx, 42, RULE_importStmt);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(243);
			match(Import);
			setState(244);
			library(0);
			setState(245);
			match(SemiColon);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class TypeContext extends ParserRuleContext {
		public TerminalNode Num() { return getToken(TBoxParser.Num, 0); }
		public TerminalNode Byte() { return getToken(TBoxParser.Byte, 0); }
		public TerminalNode Short() { return getToken(TBoxParser.Short, 0); }
		public TerminalNode Int() { return getToken(TBoxParser.Int, 0); }
		public TerminalNode Long() { return getToken(TBoxParser.Long, 0); }
		public TerminalNode Bool() { return getToken(TBoxParser.Bool, 0); }
		public TerminalNode String() { return getToken(TBoxParser.String, 0); }
		public TerminalNode Float() { return getToken(TBoxParser.Float, 0); }
		public TerminalNode Double() { return getToken(TBoxParser.Double, 0); }
		public TerminalNode Char() { return getToken(TBoxParser.Char, 0); }
		public TerminalNode Var() { return getToken(TBoxParser.Var, 0); }
		public LibraryContext library() {
			return getRuleContext(LibraryContext.class,0);
		}
		public TypeContext type() {
			return getRuleContext(TypeContext.class,0);
		}
		public TypeContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_type; }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof TBoxListener ) ((TBoxListener)listener).enterType(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof TBoxListener ) ((TBoxListener)listener).exitType(this);
		}
		@Override
		public <T> T accept(ParseTreeVisitor<? extends T> visitor) {
			if ( visitor instanceof TBoxVisitor ) return ((TBoxVisitor<? extends T>)visitor).visitType(this);
			else return visitor.visitChildren(this);
		}
	}

	public final TypeContext type() throws RecognitionException {
		return type(0);
	}

	private TypeContext type(int _p) throws RecognitionException {
		ParserRuleContext _parentctx = _ctx;
		int _parentState = getState();
		TypeContext _localctx = new TypeContext(_ctx, _parentState);
		TypeContext _prevctx = _localctx;
		int _startState = 44;
		enterRecursionRule(_localctx, 44, RULE_type, _p);
		try {
			int _alt;
			enterOuterAlt(_localctx, 1);
			{
			setState(260);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case Num:
				{
				setState(248);
				match(Num);
				}
				break;
			case Byte:
				{
				setState(249);
				match(Byte);
				}
				break;
			case Short:
				{
				setState(250);
				match(Short);
				}
				break;
			case Int:
				{
				setState(251);
				match(Int);
				}
				break;
			case Long:
				{
				setState(252);
				match(Long);
				}
				break;
			case Bool:
				{
				setState(253);
				match(Bool);
				}
				break;
			case String:
				{
				setState(254);
				match(String);
				}
				break;
			case Float:
				{
				setState(255);
				match(Float);
				}
				break;
			case Double:
				{
				setState(256);
				match(Double);
				}
				break;
			case Char:
				{
				setState(257);
				match(Char);
				}
				break;
			case Var:
				{
				setState(258);
				match(Var);
				}
				break;
			case Identifier:
				{
				setState(259);
				library(0);
				}
				break;
			default:
				throw new NoViableAltException(this);
			}
			_ctx.stop = _input.LT(-1);
			setState(266);
			_errHandler.sync(this);
			_alt = getInterpreter().adaptivePredict(_input,24,_ctx);
			while ( _alt!=2 && _alt!= ATN.INVALID_ALT_NUMBER ) {
				if ( _alt==1 ) {
					if ( _parseListeners!=null ) triggerExitRuleEvent();
					_prevctx = _localctx;
					{
					{
					_localctx = new TypeContext(_parentctx, _parentState);
					pushNewRecursionContext(_localctx, _startState, RULE_type);
					setState(262);
					if (!(precpred(_ctx, 1))) throw new FailedPredicateException(this, "precpred(_ctx, 1)");
					setState(263);
					match(T__0);
					}
					} 
				}
				setState(268);
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,24,_ctx);
			}
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			unrollRecursionContexts(_parentctx);
		}
		return _localctx;
	}

	public static class ArgsNeedContext extends ParserRuleContext {
		public List<TypeContext> type() {
			return getRuleContexts(TypeContext.class);
		}
		public TypeContext type(int i) {
			return getRuleContext(TypeContext.class,i);
		}
		public List<TerminalNode> Identifier() { return getTokens(TBoxParser.Identifier); }
		public TerminalNode Identifier(int i) {
			return getToken(TBoxParser.Identifier, i);
		}
		public List<TerminalNode> Comma() { return getTokens(TBoxParser.Comma); }
		public TerminalNode Comma(int i) {
			return getToken(TBoxParser.Comma, i);
		}
		public ArgsNeedContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_argsNeed; }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof TBoxListener ) ((TBoxListener)listener).enterArgsNeed(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof TBoxListener ) ((TBoxListener)listener).exitArgsNeed(this);
		}
		@Override
		public <T> T accept(ParseTreeVisitor<? extends T> visitor) {
			if ( visitor instanceof TBoxVisitor ) return ((TBoxVisitor<? extends T>)visitor).visitArgsNeed(this);
			else return visitor.visitChildren(this);
		}
	}

	public final ArgsNeedContext argsNeed() throws RecognitionException {
		ArgsNeedContext _localctx = new ArgsNeedContext(_ctx, getState());
		enterRule(_localctx, 46, RULE_argsNeed);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(280);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (((((_la - 35)) & ~0x3f) == 0 && ((1L << (_la - 35)) & ((1L << (Num - 35)) | (1L << (Byte - 35)) | (1L << (Short - 35)) | (1L << (Int - 35)) | (1L << (Long - 35)) | (1L << (Float - 35)) | (1L << (Double - 35)) | (1L << (Bool - 35)) | (1L << (String - 35)) | (1L << (Char - 35)) | (1L << (Var - 35)) | (1L << (Identifier - 35)))) != 0)) {
				{
				setState(269);
				type(0);
				setState(270);
				match(Identifier);
				setState(277);
				_errHandler.sync(this);
				_la = _input.LA(1);
				while (_la==Comma) {
					{
					{
					setState(271);
					match(Comma);
					setState(272);
					type(0);
					setState(273);
					match(Identifier);
					}
					}
					setState(279);
					_errHandler.sync(this);
					_la = _input.LA(1);
				}
				}
			}

			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class ProgramContext extends ParserRuleContext {
		public List<StmtContext> stmt() {
			return getRuleContexts(StmtContext.class);
		}
		public StmtContext stmt(int i) {
			return getRuleContext(StmtContext.class,i);
		}
		public ProgramContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_program; }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof TBoxListener ) ((TBoxListener)listener).enterProgram(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof TBoxListener ) ((TBoxListener)listener).exitProgram(this);
		}
		@Override
		public <T> T accept(ParseTreeVisitor<? extends T> visitor) {
			if ( visitor instanceof TBoxVisitor ) return ((TBoxVisitor<? extends T>)visitor).visitProgram(this);
			else return visitor.visitChildren(this);
		}
	}

	public final ProgramContext program() throws RecognitionException {
		ProgramContext _localctx = new ProgramContext(_ctx, getState());
		enterRule(_localctx, 48, RULE_program);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(285);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while ((((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << If) | (1L << For) | (1L << While) | (1L << Do) | (1L << Return) | (1L << Num) | (1L << Byte) | (1L << Short) | (1L << Int) | (1L << Long) | (1L << Float) | (1L << Double) | (1L << Bool) | (1L << String) | (1L << Char) | (1L << Var) | (1L << SemiColon) | (1L << LeftParen) | (1L << Increase) | (1L << Decrease))) != 0) || ((((_la - 65)) & ~0x3f) == 0 && ((1L << (_la - 65)) & ((1L << (And - 65)) | (1L << (LogicAnd - 65)) | (1L << (Not - 65)) | (1L << (Tilde - 65)) | (1L << (BinNum - 65)) | (1L << (OctNum - 65)) | (1L << (DecNum - 65)) | (1L << (HexNum - 65)) | (1L << (Identifier - 65)) | (1L << (StringConstant - 65)))) != 0)) {
				{
				{
				setState(282);
				stmt();
				}
				}
				setState(287);
				_errHandler.sync(this);
				_la = _input.LA(1);
			}
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class StmtContext extends ParserRuleContext {
		public ExprContext expr() {
			return getRuleContext(ExprContext.class,0);
		}
		public TerminalNode SemiColon() { return getToken(TBoxParser.SemiColon, 0); }
		public DefVarStmtContext defVarStmt() {
			return getRuleContext(DefVarStmtContext.class,0);
		}
		public ReturnStmtContext returnStmt() {
			return getRuleContext(ReturnStmtContext.class,0);
		}
		public IfStmtContext ifStmt() {
			return getRuleContext(IfStmtContext.class,0);
		}
		public ForStmtContext forStmt() {
			return getRuleContext(ForStmtContext.class,0);
		}
		public WhileStmtContext whileStmt() {
			return getRuleContext(WhileStmtContext.class,0);
		}
		public DoWhileStmtContext doWhileStmt() {
			return getRuleContext(DoWhileStmtContext.class,0);
		}
		public StmtContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_stmt; }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof TBoxListener ) ((TBoxListener)listener).enterStmt(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof TBoxListener ) ((TBoxListener)listener).exitStmt(this);
		}
		@Override
		public <T> T accept(ParseTreeVisitor<? extends T> visitor) {
			if ( visitor instanceof TBoxVisitor ) return ((TBoxVisitor<? extends T>)visitor).visitStmt(this);
			else return visitor.visitChildren(this);
		}
	}

	public final StmtContext stmt() throws RecognitionException {
		StmtContext _localctx = new StmtContext(_ctx, getState());
		enterRule(_localctx, 50, RULE_stmt);
		try {
			setState(298);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,28,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(288);
				expr();
				setState(289);
				match(SemiColon);
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(291);
				match(SemiColon);
				}
				break;
			case 3:
				enterOuterAlt(_localctx, 3);
				{
				setState(292);
				defVarStmt();
				}
				break;
			case 4:
				enterOuterAlt(_localctx, 4);
				{
				setState(293);
				returnStmt();
				}
				break;
			case 5:
				enterOuterAlt(_localctx, 5);
				{
				setState(294);
				ifStmt();
				}
				break;
			case 6:
				enterOuterAlt(_localctx, 6);
				{
				setState(295);
				forStmt();
				}
				break;
			case 7:
				enterOuterAlt(_localctx, 7);
				{
				setState(296);
				whileStmt();
				}
				break;
			case 8:
				enterOuterAlt(_localctx, 8);
				{
				setState(297);
				doWhileStmt();
				}
				break;
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class ReturnStmtContext extends ParserRuleContext {
		public TerminalNode Return() { return getToken(TBoxParser.Return, 0); }
		public ExprContext expr() {
			return getRuleContext(ExprContext.class,0);
		}
		public TerminalNode SemiColon() { return getToken(TBoxParser.SemiColon, 0); }
		public ReturnStmtContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_returnStmt; }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof TBoxListener ) ((TBoxListener)listener).enterReturnStmt(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof TBoxListener ) ((TBoxListener)listener).exitReturnStmt(this);
		}
		@Override
		public <T> T accept(ParseTreeVisitor<? extends T> visitor) {
			if ( visitor instanceof TBoxVisitor ) return ((TBoxVisitor<? extends T>)visitor).visitReturnStmt(this);
			else return visitor.visitChildren(this);
		}
	}

	public final ReturnStmtContext returnStmt() throws RecognitionException {
		ReturnStmtContext _localctx = new ReturnStmtContext(_ctx, getState());
		enterRule(_localctx, 52, RULE_returnStmt);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(300);
			match(Return);
			setState(301);
			expr();
			setState(302);
			match(SemiColon);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class DefVarStmtContext extends ParserRuleContext {
		public TypeContext type() {
			return getRuleContext(TypeContext.class,0);
		}
		public TerminalNode Identifier() { return getToken(TBoxParser.Identifier, 0); }
		public TerminalNode SemiColon() { return getToken(TBoxParser.SemiColon, 0); }
		public TerminalNode Assign() { return getToken(TBoxParser.Assign, 0); }
		public ExprContext expr() {
			return getRuleContext(ExprContext.class,0);
		}
		public DefVarStmtContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_defVarStmt; }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof TBoxListener ) ((TBoxListener)listener).enterDefVarStmt(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof TBoxListener ) ((TBoxListener)listener).exitDefVarStmt(this);
		}
		@Override
		public <T> T accept(ParseTreeVisitor<? extends T> visitor) {
			if ( visitor instanceof TBoxVisitor ) return ((TBoxVisitor<? extends T>)visitor).visitDefVarStmt(this);
			else return visitor.visitChildren(this);
		}
	}

	public final DefVarStmtContext defVarStmt() throws RecognitionException {
		DefVarStmtContext _localctx = new DefVarStmtContext(_ctx, getState());
		enterRule(_localctx, 54, RULE_defVarStmt);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(304);
			type(0);
			setState(305);
			match(Identifier);
			setState(308);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==Assign) {
				{
				setState(306);
				match(Assign);
				setState(307);
				expr();
				}
			}

			setState(310);
			match(SemiColon);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class IfStmtContext extends ParserRuleContext {
		public TerminalNode If() { return getToken(TBoxParser.If, 0); }
		public List<TerminalNode> LeftParen() { return getTokens(TBoxParser.LeftParen); }
		public TerminalNode LeftParen(int i) {
			return getToken(TBoxParser.LeftParen, i);
		}
		public List<LogicOrExprContext> logicOrExpr() {
			return getRuleContexts(LogicOrExprContext.class);
		}
		public LogicOrExprContext logicOrExpr(int i) {
			return getRuleContext(LogicOrExprContext.class,i);
		}
		public List<TerminalNode> RightParen() { return getTokens(TBoxParser.RightParen); }
		public TerminalNode RightParen(int i) {
			return getToken(TBoxParser.RightParen, i);
		}
		public List<StmtContext> stmt() {
			return getRuleContexts(StmtContext.class);
		}
		public StmtContext stmt(int i) {
			return getRuleContext(StmtContext.class,i);
		}
		public List<TerminalNode> Elif() { return getTokens(TBoxParser.Elif); }
		public TerminalNode Elif(int i) {
			return getToken(TBoxParser.Elif, i);
		}
		public TerminalNode Else() { return getToken(TBoxParser.Else, 0); }
		public List<TerminalNode> LeftBrace() { return getTokens(TBoxParser.LeftBrace); }
		public TerminalNode LeftBrace(int i) {
			return getToken(TBoxParser.LeftBrace, i);
		}
		public List<ProgramContext> program() {
			return getRuleContexts(ProgramContext.class);
		}
		public ProgramContext program(int i) {
			return getRuleContext(ProgramContext.class,i);
		}
		public List<TerminalNode> RightBrace() { return getTokens(TBoxParser.RightBrace); }
		public TerminalNode RightBrace(int i) {
			return getToken(TBoxParser.RightBrace, i);
		}
		public IfStmtContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_ifStmt; }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof TBoxListener ) ((TBoxListener)listener).enterIfStmt(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof TBoxListener ) ((TBoxListener)listener).exitIfStmt(this);
		}
		@Override
		public <T> T accept(ParseTreeVisitor<? extends T> visitor) {
			if ( visitor instanceof TBoxVisitor ) return ((TBoxVisitor<? extends T>)visitor).visitIfStmt(this);
			else return visitor.visitChildren(this);
		}
	}

	public final IfStmtContext ifStmt() throws RecognitionException {
		IfStmtContext _localctx = new IfStmtContext(_ctx, getState());
		enterRule(_localctx, 56, RULE_ifStmt);
		try {
			int _alt;
			enterOuterAlt(_localctx, 1);
			{
			setState(312);
			match(If);
			setState(313);
			match(LeftParen);
			setState(314);
			logicOrExpr();
			setState(315);
			match(RightParen);
			setState(321);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case LeftBrace:
				{
				{
				setState(316);
				match(LeftBrace);
				setState(317);
				program();
				setState(318);
				match(RightBrace);
				}
				}
				break;
			case If:
			case For:
			case While:
			case Do:
			case Return:
			case Num:
			case Byte:
			case Short:
			case Int:
			case Long:
			case Float:
			case Double:
			case Bool:
			case String:
			case Char:
			case Var:
			case SemiColon:
			case LeftParen:
			case Increase:
			case Decrease:
			case And:
			case LogicAnd:
			case Not:
			case Tilde:
			case BinNum:
			case OctNum:
			case DecNum:
			case HexNum:
			case Identifier:
			case StringConstant:
				{
				setState(320);
				stmt();
				}
				break;
			default:
				throw new NoViableAltException(this);
			}
			setState(336);
			_errHandler.sync(this);
			_alt = getInterpreter().adaptivePredict(_input,32,_ctx);
			while ( _alt!=2 && _alt!= ATN.INVALID_ALT_NUMBER ) {
				if ( _alt==1 ) {
					{
					{
					setState(323);
					match(Elif);
					setState(324);
					match(LeftParen);
					setState(325);
					logicOrExpr();
					setState(326);
					match(RightParen);
					setState(332);
					_errHandler.sync(this);
					switch (_input.LA(1)) {
					case LeftBrace:
						{
						{
						setState(327);
						match(LeftBrace);
						setState(328);
						program();
						setState(329);
						match(RightBrace);
						}
						}
						break;
					case If:
					case For:
					case While:
					case Do:
					case Return:
					case Num:
					case Byte:
					case Short:
					case Int:
					case Long:
					case Float:
					case Double:
					case Bool:
					case String:
					case Char:
					case Var:
					case SemiColon:
					case LeftParen:
					case Increase:
					case Decrease:
					case And:
					case LogicAnd:
					case Not:
					case Tilde:
					case BinNum:
					case OctNum:
					case DecNum:
					case HexNum:
					case Identifier:
					case StringConstant:
						{
						setState(331);
						stmt();
						}
						break;
					default:
						throw new NoViableAltException(this);
					}
					}
					} 
				}
				setState(338);
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,32,_ctx);
			}
			setState(347);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,34,_ctx) ) {
			case 1:
				{
				setState(339);
				match(Else);
				setState(345);
				_errHandler.sync(this);
				switch (_input.LA(1)) {
				case LeftBrace:
					{
					{
					setState(340);
					match(LeftBrace);
					setState(341);
					program();
					setState(342);
					match(RightBrace);
					}
					}
					break;
				case If:
				case For:
				case While:
				case Do:
				case Return:
				case Num:
				case Byte:
				case Short:
				case Int:
				case Long:
				case Float:
				case Double:
				case Bool:
				case String:
				case Char:
				case Var:
				case SemiColon:
				case LeftParen:
				case Increase:
				case Decrease:
				case And:
				case LogicAnd:
				case Not:
				case Tilde:
				case BinNum:
				case OctNum:
				case DecNum:
				case HexNum:
				case Identifier:
				case StringConstant:
					{
					setState(344);
					stmt();
					}
					break;
				default:
					throw new NoViableAltException(this);
				}
				}
				break;
			}
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class ForStmtContext extends ParserRuleContext {
		public TerminalNode For() { return getToken(TBoxParser.For, 0); }
		public TerminalNode LeftParen() { return getToken(TBoxParser.LeftParen, 0); }
		public List<StmtContext> stmt() {
			return getRuleContexts(StmtContext.class);
		}
		public StmtContext stmt(int i) {
			return getRuleContext(StmtContext.class,i);
		}
		public LogicOrExprContext logicOrExpr() {
			return getRuleContext(LogicOrExprContext.class,0);
		}
		public TerminalNode SemiColon() { return getToken(TBoxParser.SemiColon, 0); }
		public ExprContext expr() {
			return getRuleContext(ExprContext.class,0);
		}
		public TerminalNode RightParen() { return getToken(TBoxParser.RightParen, 0); }
		public TerminalNode LeftBrace() { return getToken(TBoxParser.LeftBrace, 0); }
		public ProgramContext program() {
			return getRuleContext(ProgramContext.class,0);
		}
		public TerminalNode RightBrace() { return getToken(TBoxParser.RightBrace, 0); }
		public ForStmtContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_forStmt; }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof TBoxListener ) ((TBoxListener)listener).enterForStmt(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof TBoxListener ) ((TBoxListener)listener).exitForStmt(this);
		}
		@Override
		public <T> T accept(ParseTreeVisitor<? extends T> visitor) {
			if ( visitor instanceof TBoxVisitor ) return ((TBoxVisitor<? extends T>)visitor).visitForStmt(this);
			else return visitor.visitChildren(this);
		}
	}

	public final ForStmtContext forStmt() throws RecognitionException {
		ForStmtContext _localctx = new ForStmtContext(_ctx, getState());
		enterRule(_localctx, 58, RULE_forStmt);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(349);
			match(For);
			setState(350);
			match(LeftParen);
			setState(351);
			stmt();
			setState(352);
			logicOrExpr();
			setState(353);
			match(SemiColon);
			setState(354);
			expr();
			setState(355);
			match(RightParen);
			setState(361);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case LeftBrace:
				{
				{
				setState(356);
				match(LeftBrace);
				setState(357);
				program();
				setState(358);
				match(RightBrace);
				}
				}
				break;
			case If:
			case For:
			case While:
			case Do:
			case Return:
			case Num:
			case Byte:
			case Short:
			case Int:
			case Long:
			case Float:
			case Double:
			case Bool:
			case String:
			case Char:
			case Var:
			case SemiColon:
			case LeftParen:
			case Increase:
			case Decrease:
			case And:
			case LogicAnd:
			case Not:
			case Tilde:
			case BinNum:
			case OctNum:
			case DecNum:
			case HexNum:
			case Identifier:
			case StringConstant:
				{
				setState(360);
				stmt();
				}
				break;
			default:
				throw new NoViableAltException(this);
			}
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class WhileStmtContext extends ParserRuleContext {
		public TerminalNode While() { return getToken(TBoxParser.While, 0); }
		public TerminalNode LeftParen() { return getToken(TBoxParser.LeftParen, 0); }
		public LogicOrExprContext logicOrExpr() {
			return getRuleContext(LogicOrExprContext.class,0);
		}
		public TerminalNode RightParen() { return getToken(TBoxParser.RightParen, 0); }
		public StmtContext stmt() {
			return getRuleContext(StmtContext.class,0);
		}
		public TerminalNode LeftBrace() { return getToken(TBoxParser.LeftBrace, 0); }
		public ProgramContext program() {
			return getRuleContext(ProgramContext.class,0);
		}
		public TerminalNode RightBrace() { return getToken(TBoxParser.RightBrace, 0); }
		public WhileStmtContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_whileStmt; }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof TBoxListener ) ((TBoxListener)listener).enterWhileStmt(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof TBoxListener ) ((TBoxListener)listener).exitWhileStmt(this);
		}
		@Override
		public <T> T accept(ParseTreeVisitor<? extends T> visitor) {
			if ( visitor instanceof TBoxVisitor ) return ((TBoxVisitor<? extends T>)visitor).visitWhileStmt(this);
			else return visitor.visitChildren(this);
		}
	}

	public final WhileStmtContext whileStmt() throws RecognitionException {
		WhileStmtContext _localctx = new WhileStmtContext(_ctx, getState());
		enterRule(_localctx, 60, RULE_whileStmt);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(363);
			match(While);
			setState(364);
			match(LeftParen);
			setState(365);
			logicOrExpr();
			setState(366);
			match(RightParen);
			setState(372);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case LeftBrace:
				{
				{
				setState(367);
				match(LeftBrace);
				setState(368);
				program();
				setState(369);
				match(RightBrace);
				}
				}
				break;
			case If:
			case For:
			case While:
			case Do:
			case Return:
			case Num:
			case Byte:
			case Short:
			case Int:
			case Long:
			case Float:
			case Double:
			case Bool:
			case String:
			case Char:
			case Var:
			case SemiColon:
			case LeftParen:
			case Increase:
			case Decrease:
			case And:
			case LogicAnd:
			case Not:
			case Tilde:
			case BinNum:
			case OctNum:
			case DecNum:
			case HexNum:
			case Identifier:
			case StringConstant:
				{
				setState(371);
				stmt();
				}
				break;
			default:
				throw new NoViableAltException(this);
			}
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class DoWhileStmtContext extends ParserRuleContext {
		public TerminalNode Do() { return getToken(TBoxParser.Do, 0); }
		public TerminalNode LeftBrace() { return getToken(TBoxParser.LeftBrace, 0); }
		public ProgramContext program() {
			return getRuleContext(ProgramContext.class,0);
		}
		public TerminalNode RightBrace() { return getToken(TBoxParser.RightBrace, 0); }
		public TerminalNode While() { return getToken(TBoxParser.While, 0); }
		public TerminalNode LeftParen() { return getToken(TBoxParser.LeftParen, 0); }
		public LogicOrExprContext logicOrExpr() {
			return getRuleContext(LogicOrExprContext.class,0);
		}
		public TerminalNode RightParen() { return getToken(TBoxParser.RightParen, 0); }
		public TerminalNode SemiColon() { return getToken(TBoxParser.SemiColon, 0); }
		public DoWhileStmtContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_doWhileStmt; }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof TBoxListener ) ((TBoxListener)listener).enterDoWhileStmt(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof TBoxListener ) ((TBoxListener)listener).exitDoWhileStmt(this);
		}
		@Override
		public <T> T accept(ParseTreeVisitor<? extends T> visitor) {
			if ( visitor instanceof TBoxVisitor ) return ((TBoxVisitor<? extends T>)visitor).visitDoWhileStmt(this);
			else return visitor.visitChildren(this);
		}
	}

	public final DoWhileStmtContext doWhileStmt() throws RecognitionException {
		DoWhileStmtContext _localctx = new DoWhileStmtContext(_ctx, getState());
		enterRule(_localctx, 62, RULE_doWhileStmt);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(374);
			match(Do);
			setState(375);
			match(LeftBrace);
			setState(376);
			program();
			setState(377);
			match(RightBrace);
			setState(378);
			match(While);
			setState(379);
			match(LeftParen);
			setState(380);
			logicOrExpr();
			setState(381);
			match(RightParen);
			setState(382);
			match(SemiColon);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class DefFuncStmtContext extends ParserRuleContext {
		public TerminalNode Func() { return getToken(TBoxParser.Func, 0); }
		public TerminalNode Identifier() { return getToken(TBoxParser.Identifier, 0); }
		public TerminalNode LeftParen() { return getToken(TBoxParser.LeftParen, 0); }
		public ArgsNeedContext argsNeed() {
			return getRuleContext(ArgsNeedContext.class,0);
		}
		public TerminalNode RightParen() { return getToken(TBoxParser.RightParen, 0); }
		public TerminalNode LeftBrace() { return getToken(TBoxParser.LeftBrace, 0); }
		public ProgramContext program() {
			return getRuleContext(ProgramContext.class,0);
		}
		public TerminalNode RightBrace() { return getToken(TBoxParser.RightBrace, 0); }
		public TerminalNode Export() { return getToken(TBoxParser.Export, 0); }
		public TerminalNode Colon() { return getToken(TBoxParser.Colon, 0); }
		public TypeContext type() {
			return getRuleContext(TypeContext.class,0);
		}
		public DefFuncStmtContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_defFuncStmt; }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof TBoxListener ) ((TBoxListener)listener).enterDefFuncStmt(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof TBoxListener ) ((TBoxListener)listener).exitDefFuncStmt(this);
		}
		@Override
		public <T> T accept(ParseTreeVisitor<? extends T> visitor) {
			if ( visitor instanceof TBoxVisitor ) return ((TBoxVisitor<? extends T>)visitor).visitDefFuncStmt(this);
			else return visitor.visitChildren(this);
		}
	}

	public final DefFuncStmtContext defFuncStmt() throws RecognitionException {
		DefFuncStmtContext _localctx = new DefFuncStmtContext(_ctx, getState());
		enterRule(_localctx, 64, RULE_defFuncStmt);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(385);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==Export) {
				{
				setState(384);
				match(Export);
				}
			}

			setState(387);
			match(Func);
			setState(388);
			match(Identifier);
			setState(389);
			match(LeftParen);
			setState(390);
			argsNeed();
			setState(391);
			match(RightParen);
			setState(394);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==Colon) {
				{
				setState(392);
				match(Colon);
				setState(393);
				type(0);
				}
			}

			setState(396);
			match(LeftBrace);
			setState(397);
			program();
			setState(398);
			match(RightBrace);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class DefGlobalVarStmtContext extends ParserRuleContext {
		public DefVarStmtContext defVarStmt() {
			return getRuleContext(DefVarStmtContext.class,0);
		}
		public TerminalNode Export() { return getToken(TBoxParser.Export, 0); }
		public DefGlobalVarStmtContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_defGlobalVarStmt; }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof TBoxListener ) ((TBoxListener)listener).enterDefGlobalVarStmt(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof TBoxListener ) ((TBoxListener)listener).exitDefGlobalVarStmt(this);
		}
		@Override
		public <T> T accept(ParseTreeVisitor<? extends T> visitor) {
			if ( visitor instanceof TBoxVisitor ) return ((TBoxVisitor<? extends T>)visitor).visitDefGlobalVarStmt(this);
			else return visitor.visitChildren(this);
		}
	}

	public final DefGlobalVarStmtContext defGlobalVarStmt() throws RecognitionException {
		DefGlobalVarStmtContext _localctx = new DefGlobalVarStmtContext(_ctx, getState());
		enterRule(_localctx, 66, RULE_defGlobalVarStmt);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(401);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==Export) {
				{
				setState(400);
				match(Export);
				}
			}

			setState(403);
			defVarStmt();
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class StatContext extends ParserRuleContext {
		public List<ImportStmtContext> importStmt() {
			return getRuleContexts(ImportStmtContext.class);
		}
		public ImportStmtContext importStmt(int i) {
			return getRuleContext(ImportStmtContext.class,i);
		}
		public List<DefGlobalVarStmtContext> defGlobalVarStmt() {
			return getRuleContexts(DefGlobalVarStmtContext.class);
		}
		public DefGlobalVarStmtContext defGlobalVarStmt(int i) {
			return getRuleContext(DefGlobalVarStmtContext.class,i);
		}
		public List<DefFuncStmtContext> defFuncStmt() {
			return getRuleContexts(DefFuncStmtContext.class);
		}
		public DefFuncStmtContext defFuncStmt(int i) {
			return getRuleContext(DefFuncStmtContext.class,i);
		}
		public StatContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_stat; }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof TBoxListener ) ((TBoxListener)listener).enterStat(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof TBoxListener ) ((TBoxListener)listener).exitStat(this);
		}
		@Override
		public <T> T accept(ParseTreeVisitor<? extends T> visitor) {
			if ( visitor instanceof TBoxVisitor ) return ((TBoxVisitor<? extends T>)visitor).visitStat(this);
			else return visitor.visitChildren(this);
		}
	}

	public final StatContext stat() throws RecognitionException {
		StatContext _localctx = new StatContext(_ctx, getState());
		enterRule(_localctx, 68, RULE_stat);
		int _la;
		try {
			int _alt;
			enterOuterAlt(_localctx, 1);
			{
			setState(408);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (_la==Import) {
				{
				{
				setState(405);
				importStmt();
				}
				}
				setState(410);
				_errHandler.sync(this);
				_la = _input.LA(1);
			}
			setState(414);
			_errHandler.sync(this);
			_alt = getInterpreter().adaptivePredict(_input,41,_ctx);
			while ( _alt!=2 && _alt!= ATN.INVALID_ALT_NUMBER ) {
				if ( _alt==1 ) {
					{
					{
					setState(411);
					defGlobalVarStmt();
					}
					} 
				}
				setState(416);
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,41,_ctx);
			}
			setState(420);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (_la==Export || _la==Func) {
				{
				{
				setState(417);
				defFuncStmt();
				}
				}
				setState(422);
				_errHandler.sync(this);
				_la = _input.LA(1);
			}
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public boolean sempred(RuleContext _localctx, int ruleIndex, int predIndex) {
		switch (ruleIndex) {
		case 20:
			return library_sempred((LibraryContext)_localctx, predIndex);
		case 22:
			return type_sempred((TypeContext)_localctx, predIndex);
		}
		return true;
	}
	private boolean library_sempred(LibraryContext _localctx, int predIndex) {
		switch (predIndex) {
		case 0:
			return precpred(_ctx, 2);
		}
		return true;
	}
	private boolean type_sempred(TypeContext _localctx, int predIndex) {
		switch (predIndex) {
		case 1:
			return precpred(_ctx, 1);
		}
		return true;
	}

	public static final String _serializedATN =
		"\3\u608b\ua72a\u8133\ub9ed\u417c\u3be7\u7786\u5964\3d\u01aa\4\2\t\2\4"+
		"\3\t\3\4\4\t\4\4\5\t\5\4\6\t\6\4\7\t\7\4\b\t\b\4\t\t\t\4\n\t\n\4\13\t"+
		"\13\4\f\t\f\4\r\t\r\4\16\t\16\4\17\t\17\4\20\t\20\4\21\t\21\4\22\t\22"+
		"\4\23\t\23\4\24\t\24\4\25\t\25\4\26\t\26\4\27\t\27\4\30\t\30\4\31\t\31"+
		"\4\32\t\32\4\33\t\33\4\34\t\34\4\35\t\35\4\36\t\36\4\37\t\37\4 \t \4!"+
		"\t!\4\"\t\"\4#\t#\4$\t$\3\2\3\2\3\3\3\3\5\3M\n\3\3\4\3\4\3\4\3\4\3\4\3"+
		"\4\5\4U\n\4\3\5\3\5\3\5\3\5\3\5\3\5\3\5\3\5\3\5\3\5\3\5\3\5\7\5c\n\5\f"+
		"\5\16\5f\13\5\3\6\7\6i\n\6\f\6\16\6l\13\6\3\6\3\6\3\6\3\6\3\6\5\6s\n\6"+
		"\3\7\3\7\5\7w\n\7\3\b\3\b\3\b\7\b|\n\b\f\b\16\b\177\13\b\3\t\3\t\3\t\7"+
		"\t\u0084\n\t\f\t\16\t\u0087\13\t\3\n\3\n\3\n\7\n\u008c\n\n\f\n\16\n\u008f"+
		"\13\n\3\13\3\13\3\13\7\13\u0094\n\13\f\13\16\13\u0097\13\13\3\f\3\f\3"+
		"\f\7\f\u009c\n\f\f\f\16\f\u009f\13\f\3\r\3\r\3\r\7\r\u00a4\n\r\f\r\16"+
		"\r\u00a7\13\r\3\16\3\16\3\16\7\16\u00ac\n\16\f\16\16\16\u00af\13\16\3"+
		"\17\3\17\3\17\7\17\u00b4\n\17\f\17\16\17\u00b7\13\17\3\20\3\20\3\20\7"+
		"\20\u00bc\n\20\f\20\16\20\u00bf\13\20\3\21\3\21\3\21\7\21\u00c4\n\21\f"+
		"\21\16\21\u00c7\13\21\3\22\3\22\3\22\3\22\3\22\3\22\5\22\u00cf\n\22\3"+
		"\23\3\23\3\23\3\23\3\23\3\23\5\23\u00d7\n\23\3\24\3\24\3\24\7\24\u00dc"+
		"\n\24\f\24\16\24\u00df\13\24\5\24\u00e1\n\24\3\25\3\25\3\25\7\25\u00e6"+
		"\n\25\f\25\16\25\u00e9\13\25\3\26\3\26\3\26\3\26\3\26\3\26\7\26\u00f1"+
		"\n\26\f\26\16\26\u00f4\13\26\3\27\3\27\3\27\3\27\3\30\3\30\3\30\3\30\3"+
		"\30\3\30\3\30\3\30\3\30\3\30\3\30\3\30\3\30\5\30\u0107\n\30\3\30\3\30"+
		"\7\30\u010b\n\30\f\30\16\30\u010e\13\30\3\31\3\31\3\31\3\31\3\31\3\31"+
		"\7\31\u0116\n\31\f\31\16\31\u0119\13\31\5\31\u011b\n\31\3\32\7\32\u011e"+
		"\n\32\f\32\16\32\u0121\13\32\3\33\3\33\3\33\3\33\3\33\3\33\3\33\3\33\3"+
		"\33\3\33\5\33\u012d\n\33\3\34\3\34\3\34\3\34\3\35\3\35\3\35\3\35\5\35"+
		"\u0137\n\35\3\35\3\35\3\36\3\36\3\36\3\36\3\36\3\36\3\36\3\36\3\36\5\36"+
		"\u0144\n\36\3\36\3\36\3\36\3\36\3\36\3\36\3\36\3\36\3\36\5\36\u014f\n"+
		"\36\7\36\u0151\n\36\f\36\16\36\u0154\13\36\3\36\3\36\3\36\3\36\3\36\3"+
		"\36\5\36\u015c\n\36\5\36\u015e\n\36\3\37\3\37\3\37\3\37\3\37\3\37\3\37"+
		"\3\37\3\37\3\37\3\37\3\37\5\37\u016c\n\37\3 \3 \3 \3 \3 \3 \3 \3 \3 \5"+
		" \u0177\n \3!\3!\3!\3!\3!\3!\3!\3!\3!\3!\3\"\5\"\u0184\n\"\3\"\3\"\3\""+
		"\3\"\3\"\3\"\3\"\5\"\u018d\n\"\3\"\3\"\3\"\3\"\3#\5#\u0194\n#\3#\3#\3"+
		"$\7$\u0199\n$\f$\16$\u019c\13$\3$\7$\u019f\n$\f$\16$\u01a2\13$\3$\7$\u01a5"+
		"\n$\f$\16$\u01a8\13$\3$\2\4*.%\2\4\6\b\n\f\16\20\22\24\26\30\32\34\36"+
		" \"$&(*,.\60\62\64\668:<>@BDF\2\13\3\2_b\4\2==??\4\2CCHI\3\2@B\4\2<<>"+
		">\3\2:;\3\2UX\3\2YZ\3\2JT\2\u01c6\2H\3\2\2\2\4L\3\2\2\2\6T\3\2\2\2\bV"+
		"\3\2\2\2\nj\3\2\2\2\fv\3\2\2\2\16x\3\2\2\2\20\u0080\3\2\2\2\22\u0088\3"+
		"\2\2\2\24\u0090\3\2\2\2\26\u0098\3\2\2\2\30\u00a0\3\2\2\2\32\u00a8\3\2"+
		"\2\2\34\u00b0\3\2\2\2\36\u00b8\3\2\2\2 \u00c0\3\2\2\2\"\u00c8\3\2\2\2"+
		"$\u00d6\3\2\2\2&\u00e0\3\2\2\2(\u00e2\3\2\2\2*\u00ea\3\2\2\2,\u00f5\3"+
		"\2\2\2.\u0106\3\2\2\2\60\u011a\3\2\2\2\62\u011f\3\2\2\2\64\u012c\3\2\2"+
		"\2\66\u012e\3\2\2\28\u0132\3\2\2\2:\u013a\3\2\2\2<\u015f\3\2\2\2>\u016d"+
		"\3\2\2\2@\u0178\3\2\2\2B\u0183\3\2\2\2D\u0193\3\2\2\2F\u019a\3\2\2\2H"+
		"I\t\2\2\2I\3\3\2\2\2JM\7d\2\2KM\5\2\2\2LJ\3\2\2\2LK\3\2\2\2M\5\3\2\2\2"+
		"NU\5\4\3\2OU\5*\26\2PQ\7\64\2\2QR\5(\25\2RS\7\65\2\2SU\3\2\2\2TN\3\2\2"+
		"\2TO\3\2\2\2TP\3\2\2\2U\7\3\2\2\2Vd\5\6\4\2WX\7\66\2\2XY\5(\25\2YZ\7\67"+
		"\2\2Zc\3\2\2\2[\\\7\64\2\2\\]\5&\24\2]^\7\65\2\2^c\3\2\2\2_`\7\\\2\2`"+
		"c\5*\26\2ac\t\3\2\2bW\3\2\2\2b[\3\2\2\2b_\3\2\2\2ba\3\2\2\2cf\3\2\2\2"+
		"db\3\2\2\2de\3\2\2\2e\t\3\2\2\2fd\3\2\2\2gi\t\3\2\2hg\3\2\2\2il\3\2\2"+
		"\2jh\3\2\2\2jk\3\2\2\2kr\3\2\2\2lj\3\2\2\2ms\5\b\5\2no\t\4\2\2os\5\f\7"+
		"\2pq\7D\2\2qs\5*\26\2rm\3\2\2\2rn\3\2\2\2rp\3\2\2\2s\13\3\2\2\2tw\5\n"+
		"\6\2uw\5\2\2\2vt\3\2\2\2vu\3\2\2\2w\r\3\2\2\2x}\5\f\7\2yz\t\5\2\2z|\5"+
		"\f\7\2{y\3\2\2\2|\177\3\2\2\2}{\3\2\2\2}~\3\2\2\2~\17\3\2\2\2\177}\3\2"+
		"\2\2\u0080\u0085\5\16\b\2\u0081\u0082\t\6\2\2\u0082\u0084\5\16\b\2\u0083"+
		"\u0081\3\2\2\2\u0084\u0087\3\2\2\2\u0085\u0083\3\2\2\2\u0085\u0086\3\2"+
		"\2\2\u0086\21\3\2\2\2\u0087\u0085\3\2\2\2\u0088\u008d\5\20\t\2\u0089\u008a"+
		"\t\7\2\2\u008a\u008c\5\20\t\2\u008b\u0089\3\2\2\2\u008c\u008f\3\2\2\2"+
		"\u008d\u008b\3\2\2\2\u008d\u008e\3\2\2\2\u008e\23\3\2\2\2\u008f\u008d"+
		"\3\2\2\2\u0090\u0095\5\22\n\2\u0091\u0092\t\b\2\2\u0092\u0094\5\22\n\2"+
		"\u0093\u0091\3\2\2\2\u0094\u0097\3\2\2\2\u0095\u0093\3\2\2\2\u0095\u0096"+
		"\3\2\2\2\u0096\25\3\2\2\2\u0097\u0095\3\2\2\2\u0098\u009d\5\24\13\2\u0099"+
		"\u009a\t\t\2\2\u009a\u009c\5\24\13\2\u009b\u0099\3\2\2\2\u009c\u009f\3"+
		"\2\2\2\u009d\u009b\3\2\2\2\u009d\u009e\3\2\2\2\u009e\27\3\2\2\2\u009f"+
		"\u009d\3\2\2\2\u00a0\u00a5\5\26\f\2\u00a1\u00a2\7C\2\2\u00a2\u00a4\5\26"+
		"\f\2\u00a3\u00a1\3\2\2\2\u00a4\u00a7\3\2\2\2\u00a5\u00a3\3\2\2\2\u00a5"+
		"\u00a6\3\2\2\2\u00a6\31\3\2\2\2\u00a7\u00a5\3\2\2\2\u00a8\u00ad\5\30\r"+
		"\2\u00a9\u00aa\7G\2\2\u00aa\u00ac\5\30\r\2\u00ab\u00a9\3\2\2\2\u00ac\u00af"+
		"\3\2\2\2\u00ad\u00ab\3\2\2\2\u00ad\u00ae\3\2\2\2\u00ae\33\3\2\2\2\u00af"+
		"\u00ad\3\2\2\2\u00b0\u00b5\5\32\16\2\u00b1\u00b2\7E\2\2\u00b2\u00b4\5"+
		"\32\16\2\u00b3\u00b1\3\2\2\2\u00b4\u00b7\3\2\2\2\u00b5\u00b3\3\2\2\2\u00b5"+
		"\u00b6\3\2\2\2\u00b6\35\3\2\2\2\u00b7\u00b5\3\2\2\2\u00b8\u00bd\5\34\17"+
		"\2\u00b9\u00ba\7D\2\2\u00ba\u00bc\5\34\17\2\u00bb\u00b9\3\2\2\2\u00bc"+
		"\u00bf\3\2\2\2\u00bd\u00bb\3\2\2\2\u00bd\u00be\3\2\2\2\u00be\37\3\2\2"+
		"\2\u00bf\u00bd\3\2\2\2\u00c0\u00c5\5\36\20\2\u00c1\u00c2\7F\2\2\u00c2"+
		"\u00c4\5\36\20\2\u00c3\u00c1\3\2\2\2\u00c4\u00c7\3\2\2\2\u00c5\u00c3\3"+
		"\2\2\2\u00c5\u00c6\3\2\2\2\u00c6!\3\2\2\2\u00c7\u00c5\3\2\2\2\u00c8\u00ce"+
		"\5 \21\2\u00c9\u00ca\7\61\2\2\u00ca\u00cb\5(\25\2\u00cb\u00cc\7\63\2\2"+
		"\u00cc\u00cd\5\"\22\2\u00cd\u00cf\3\2\2\2\u00ce\u00c9\3\2\2\2\u00ce\u00cf"+
		"\3\2\2\2\u00cf#\3\2\2\2\u00d0\u00d7\5\4\3\2\u00d1\u00d2\5\n\6\2\u00d2"+
		"\u00d3\t\n\2\2\u00d3\u00d4\5$\23\2\u00d4\u00d7\3\2\2\2\u00d5\u00d7\5\""+
		"\22\2\u00d6\u00d0\3\2\2\2\u00d6\u00d1\3\2\2\2\u00d6\u00d5\3\2\2\2\u00d7"+
		"%\3\2\2\2\u00d8\u00dd\5(\25\2\u00d9\u00da\7\60\2\2\u00da\u00dc\5(\25\2"+
		"\u00db\u00d9\3\2\2\2\u00dc\u00df\3\2\2\2\u00dd\u00db\3\2\2\2\u00dd\u00de"+
		"\3\2\2\2\u00de\u00e1\3\2\2\2\u00df\u00dd\3\2\2\2\u00e0\u00d8\3\2\2\2\u00e0"+
		"\u00e1\3\2\2\2\u00e1\'\3\2\2\2\u00e2\u00e7\5$\23\2\u00e3\u00e4\7\60\2"+
		"\2\u00e4\u00e6\5$\23\2\u00e5\u00e3\3\2\2\2\u00e6\u00e9\3\2\2\2\u00e7\u00e5"+
		"\3\2\2\2\u00e7\u00e8\3\2\2\2\u00e8)\3\2\2\2\u00e9\u00e7\3\2\2\2\u00ea"+
		"\u00eb\b\26\1\2\u00eb\u00ec\7c\2\2\u00ec\u00f2\3\2\2\2\u00ed\u00ee\f\4"+
		"\2\2\u00ee\u00ef\7\\\2\2\u00ef\u00f1\7c\2\2\u00f0\u00ed\3\2\2\2\u00f1"+
		"\u00f4\3\2\2\2\u00f2\u00f0\3\2\2\2\u00f2\u00f3\3\2\2\2\u00f3+\3\2\2\2"+
		"\u00f4\u00f2\3\2\2\2\u00f5\u00f6\7\7\2\2\u00f6\u00f7\5*\26\2\u00f7\u00f8"+
		"\7\62\2\2\u00f8-\3\2\2\2\u00f9\u00fa\b\30\1\2\u00fa\u0107\7%\2\2\u00fb"+
		"\u0107\7&\2\2\u00fc\u0107\7\'\2\2\u00fd\u0107\7(\2\2\u00fe\u0107\7)\2"+
		"\2\u00ff\u0107\7,\2\2\u0100\u0107\7-\2\2\u0101\u0107\7*\2\2\u0102\u0107"+
		"\7+\2\2\u0103\u0107\7.\2\2\u0104\u0107\7/\2\2\u0105\u0107\5*\26\2\u0106"+
		"\u00f9\3\2\2\2\u0106\u00fb\3\2\2\2\u0106\u00fc\3\2\2\2\u0106\u00fd\3\2"+
		"\2\2\u0106\u00fe\3\2\2\2\u0106\u00ff\3\2\2\2\u0106\u0100\3\2\2\2\u0106"+
		"\u0101\3\2\2\2\u0106\u0102\3\2\2\2\u0106\u0103\3\2\2\2\u0106\u0104\3\2"+
		"\2\2\u0106\u0105\3\2\2\2\u0107\u010c\3\2\2\2\u0108\u0109\f\3\2\2\u0109"+
		"\u010b\7\3\2\2\u010a\u0108\3\2\2\2\u010b\u010e\3\2\2\2\u010c\u010a\3\2"+
		"\2\2\u010c\u010d\3\2\2\2\u010d/\3\2\2\2\u010e\u010c\3\2\2\2\u010f\u0110"+
		"\5.\30\2\u0110\u0117\7c\2\2\u0111\u0112\7\60\2\2\u0112\u0113\5.\30\2\u0113"+
		"\u0114\7c\2\2\u0114\u0116\3\2\2\2\u0115\u0111\3\2\2\2\u0116\u0119\3\2"+
		"\2\2\u0117\u0115\3\2\2\2\u0117\u0118\3\2\2\2\u0118\u011b\3\2\2\2\u0119"+
		"\u0117\3\2\2\2\u011a\u010f\3\2\2\2\u011a\u011b\3\2\2\2\u011b\61\3\2\2"+
		"\2\u011c\u011e\5\64\33\2\u011d\u011c\3\2\2\2\u011e\u0121\3\2\2\2\u011f"+
		"\u011d\3\2\2\2\u011f\u0120\3\2\2\2\u0120\63\3\2\2\2\u0121\u011f\3\2\2"+
		"\2\u0122\u0123\5(\25\2\u0123\u0124\7\62\2\2\u0124\u012d\3\2\2\2\u0125"+
		"\u012d\7\62\2\2\u0126\u012d\58\35\2\u0127\u012d\5\66\34\2\u0128\u012d"+
		"\5:\36\2\u0129\u012d\5<\37\2\u012a\u012d\5> \2\u012b\u012d\5@!\2\u012c"+
		"\u0122\3\2\2\2\u012c\u0125\3\2\2\2\u012c\u0126\3\2\2\2\u012c\u0127\3\2"+
		"\2\2\u012c\u0128\3\2\2\2\u012c\u0129\3\2\2\2\u012c\u012a\3\2\2\2\u012c"+
		"\u012b\3\2\2\2\u012d\65\3\2\2\2\u012e\u012f\7$\2\2\u012f\u0130\5(\25\2"+
		"\u0130\u0131\7\62\2\2\u0131\67\3\2\2\2\u0132\u0133\5.\30\2\u0133\u0136"+
		"\7c\2\2\u0134\u0135\7J\2\2\u0135\u0137\5(\25\2\u0136\u0134\3\2\2\2\u0136"+
		"\u0137\3\2\2\2\u0137\u0138\3\2\2\2\u0138\u0139\7\62\2\2\u01399\3\2\2\2"+
		"\u013a\u013b\7\33\2\2\u013b\u013c\7\64\2\2\u013c\u013d\5 \21\2\u013d\u0143"+
		"\7\65\2\2\u013e\u013f\78\2\2\u013f\u0140\5\62\32\2\u0140\u0141\79\2\2"+
		"\u0141\u0144\3\2\2\2\u0142\u0144\5\64\33\2\u0143\u013e\3\2\2\2\u0143\u0142"+
		"\3\2\2\2\u0144\u0152\3\2\2\2\u0145\u0146\7\35\2\2\u0146\u0147\7\64\2\2"+
		"\u0147\u0148\5 \21\2\u0148\u014e\7\65\2\2\u0149\u014a\78\2\2\u014a\u014b"+
		"\5\62\32\2\u014b\u014c\79\2\2\u014c\u014f\3\2\2\2\u014d\u014f\5\64\33"+
		"\2\u014e\u0149\3\2\2\2\u014e\u014d\3\2\2\2\u014f\u0151\3\2\2\2\u0150\u0145"+
		"\3\2\2\2\u0151\u0154\3\2\2\2\u0152\u0150\3\2\2\2\u0152\u0153\3\2\2\2\u0153"+
		"\u015d\3\2\2\2\u0154\u0152\3\2\2\2\u0155\u015b\7\34\2\2\u0156\u0157\7"+
		"8\2\2\u0157\u0158\5\62\32\2\u0158\u0159\79\2\2\u0159\u015c\3\2\2\2\u015a"+
		"\u015c\5\64\33\2\u015b\u0156\3\2\2\2\u015b\u015a\3\2\2\2\u015c\u015e\3"+
		"\2\2\2\u015d\u0155\3\2\2\2\u015d\u015e\3\2\2\2\u015e;\3\2\2\2\u015f\u0160"+
		"\7\37\2\2\u0160\u0161\7\64\2\2\u0161\u0162\5\64\33\2\u0162\u0163\5 \21"+
		"\2\u0163\u0164\7\62\2\2\u0164\u0165\5(\25\2\u0165\u016b\7\65\2\2\u0166"+
		"\u0167\78\2\2\u0167\u0168\5\62\32\2\u0168\u0169\79\2\2\u0169\u016c\3\2"+
		"\2\2\u016a\u016c\5\64\33\2\u016b\u0166\3\2\2\2\u016b\u016a\3\2\2\2\u016c"+
		"=\3\2\2\2\u016d\u016e\7!\2\2\u016e\u016f\7\64\2\2\u016f\u0170\5 \21\2"+
		"\u0170\u0176\7\65\2\2\u0171\u0172\78\2\2\u0172\u0173\5\62\32\2\u0173\u0174"+
		"\79\2\2\u0174\u0177\3\2\2\2\u0175\u0177\5\64\33\2\u0176\u0171\3\2\2\2"+
		"\u0176\u0175\3\2\2\2\u0177?\3\2\2\2\u0178\u0179\7\"\2\2\u0179\u017a\7"+
		"8\2\2\u017a\u017b\5\62\32\2\u017b\u017c\79\2\2\u017c\u017d\7!\2\2\u017d"+
		"\u017e\7\64\2\2\u017e\u017f\5 \21\2\u017f\u0180\7\65\2\2\u0180\u0181\7"+
		"\62\2\2\u0181A\3\2\2\2\u0182\u0184\7\b\2\2\u0183\u0182\3\2\2\2\u0183\u0184"+
		"\3\2\2\2\u0184\u0185\3\2\2\2\u0185\u0186\7\16\2\2\u0186\u0187\7c\2\2\u0187"+
		"\u0188\7\64\2\2\u0188\u0189\5\60\31\2\u0189\u018c\7\65\2\2\u018a\u018b"+
		"\7\63\2\2\u018b\u018d\5.\30\2\u018c\u018a\3\2\2\2\u018c\u018d\3\2\2\2"+
		"\u018d\u018e\3\2\2\2\u018e\u018f\78\2\2\u018f\u0190\5\62\32\2\u0190\u0191"+
		"\79\2\2\u0191C\3\2\2\2\u0192\u0194\7\b\2\2\u0193\u0192\3\2\2\2\u0193\u0194"+
		"\3\2\2\2\u0194\u0195\3\2\2\2\u0195\u0196\58\35\2\u0196E\3\2\2\2\u0197"+
		"\u0199\5,\27\2\u0198\u0197\3\2\2\2\u0199\u019c\3\2\2\2\u019a\u0198\3\2"+
		"\2\2\u019a\u019b\3\2\2\2\u019b\u01a0\3\2\2\2\u019c\u019a\3\2\2\2\u019d"+
		"\u019f\5D#\2\u019e\u019d\3\2\2\2\u019f\u01a2\3\2\2\2\u01a0\u019e\3\2\2"+
		"\2\u01a0\u01a1\3\2\2\2\u01a1\u01a6\3\2\2\2\u01a2\u01a0\3\2\2\2\u01a3\u01a5"+
		"\5B\"\2\u01a4\u01a3\3\2\2\2\u01a5\u01a8\3\2\2\2\u01a6\u01a4\3\2\2\2\u01a6"+
		"\u01a7\3\2\2\2\u01a7G\3\2\2\2\u01a8\u01a6\3\2\2\2-LTbdjrv}\u0085\u008d"+
		"\u0095\u009d\u00a5\u00ad\u00b5\u00bd\u00c5\u00ce\u00d6\u00dd\u00e0\u00e7"+
		"\u00f2\u0106\u010c\u0117\u011a\u011f\u012c\u0136\u0143\u014e\u0152\u015b"+
		"\u015d\u016b\u0176\u0183\u018c\u0193\u019a\u01a0\u01a6";
	public static final ATN _ATN =
		new ATNDeserializer().deserialize(_serializedATN.toCharArray());
	static {
		_decisionToDFA = new DFA[_ATN.getNumberOfDecisions()];
		for (int i = 0; i < _ATN.getNumberOfDecisions(); i++) {
			_decisionToDFA[i] = new DFA(_ATN.getDecisionState(i), i);
		}
	}
}