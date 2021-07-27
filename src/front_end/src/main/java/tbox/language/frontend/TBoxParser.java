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
		RULE_defFuncStmt = 32, RULE_stat = 33;
	private static String[] makeRuleNames() {
		return new String[] {
			"num", "constant", "primExpr", "postExpr", "unaryExpr", "castExpr", "mulExpr", 
			"addExpr", "shiftExpr", "relatExpr", "equExpr", "andExpr", "xorExpr", 
			"orExpr", "logicAndExpr", "logicOrExpr", "quesExpr", "assignExpr", "args", 
			"expr", "library", "importStmt", "type", "argsNeed", "program", "stmt", 
			"returnStmt", "defVarStmt", "ifStmt", "forStmt", "whileStmt", "doWhileStmt", 
			"defFuncStmt", "stat"
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
			setState(68);
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
			setState(72);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case StringConstant:
				enterOuterAlt(_localctx, 1);
				{
				setState(70);
				match(StringConstant);
				}
				break;
			case BinNum:
			case OctNum:
			case DecNum:
			case HexNum:
				enterOuterAlt(_localctx, 2);
				{
				setState(71);
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
			setState(80);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case BinNum:
			case OctNum:
			case DecNum:
			case HexNum:
			case StringConstant:
				enterOuterAlt(_localctx, 1);
				{
				setState(74);
				constant();
				}
				break;
			case Identifier:
				enterOuterAlt(_localctx, 2);
				{
				setState(75);
				library(0);
				}
				break;
			case LeftParen:
				enterOuterAlt(_localctx, 3);
				{
				setState(76);
				match(LeftParen);
				setState(77);
				expr();
				setState(78);
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
			setState(82);
			primExpr();
			setState(96);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (((((_la - 50)) & ~0x3f) == 0 && ((1L << (_la - 50)) & ((1L << (LeftParen - 50)) | (1L << (LeftBracket - 50)) | (1L << (Increase - 50)) | (1L << (Decrease - 50)) | (1L << (Dot - 50)))) != 0)) {
				{
				setState(94);
				_errHandler.sync(this);
				switch (_input.LA(1)) {
				case LeftBracket:
					{
					setState(83);
					match(LeftBracket);
					setState(84);
					expr();
					setState(85);
					match(RightBracket);
					}
					break;
				case LeftParen:
					{
					setState(87);
					match(LeftParen);
					setState(88);
					args();
					setState(89);
					match(RightParen);
					}
					break;
				case Dot:
					{
					{
					setState(91);
					match(Dot);
					}
					setState(92);
					library(0);
					}
					break;
				case Increase:
				case Decrease:
					{
					setState(93);
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
				setState(98);
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
			setState(102);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (_la==Increase || _la==Decrease) {
				{
				{
				setState(99);
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
				setState(104);
				_errHandler.sync(this);
				_la = _input.LA(1);
			}
			setState(110);
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
				setState(105);
				postExpr();
				}
				break;
			case And:
			case Not:
			case Tilde:
				{
				setState(106);
				_la = _input.LA(1);
				if ( !(((((_la - 65)) & ~0x3f) == 0 && ((1L << (_la - 65)) & ((1L << (And - 65)) | (1L << (Not - 65)) | (1L << (Tilde - 65)))) != 0)) ) {
				_errHandler.recoverInline(this);
				}
				else {
					if ( _input.LA(1)==Token.EOF ) matchedEOF = true;
					_errHandler.reportMatch(this);
					consume();
				}
				setState(107);
				castExpr();
				}
				break;
			case LogicAnd:
				{
				setState(108);
				match(LogicAnd);
				setState(109);
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
			setState(114);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,6,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(112);
				unaryExpr();
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(113);
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
			setState(116);
			castExpr();
			setState(121);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (((((_la - 62)) & ~0x3f) == 0 && ((1L << (_la - 62)) & ((1L << (Star - 62)) | (1L << (Div - 62)) | (1L << (Mod - 62)))) != 0)) {
				{
				{
				setState(117);
				_la = _input.LA(1);
				if ( !(((((_la - 62)) & ~0x3f) == 0 && ((1L << (_la - 62)) & ((1L << (Star - 62)) | (1L << (Div - 62)) | (1L << (Mod - 62)))) != 0)) ) {
				_errHandler.recoverInline(this);
				}
				else {
					if ( _input.LA(1)==Token.EOF ) matchedEOF = true;
					_errHandler.reportMatch(this);
					consume();
				}
				setState(118);
				castExpr();
				}
				}
				setState(123);
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
			setState(124);
			mulExpr();
			setState(129);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (_la==Plus || _la==Minus) {
				{
				{
				setState(125);
				_la = _input.LA(1);
				if ( !(_la==Plus || _la==Minus) ) {
				_errHandler.recoverInline(this);
				}
				else {
					if ( _input.LA(1)==Token.EOF ) matchedEOF = true;
					_errHandler.reportMatch(this);
					consume();
				}
				setState(126);
				mulExpr();
				}
				}
				setState(131);
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
			setState(132);
			addExpr();
			setState(137);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (_la==LeftShift || _la==RightShift) {
				{
				{
				setState(133);
				_la = _input.LA(1);
				if ( !(_la==LeftShift || _la==RightShift) ) {
				_errHandler.recoverInline(this);
				}
				else {
					if ( _input.LA(1)==Token.EOF ) matchedEOF = true;
					_errHandler.reportMatch(this);
					consume();
				}
				setState(134);
				addExpr();
				}
				}
				setState(139);
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
			setState(140);
			shiftExpr();
			setState(145);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (((((_la - 83)) & ~0x3f) == 0 && ((1L << (_la - 83)) & ((1L << (Less - 83)) | (1L << (LessEqual - 83)) | (1L << (Greater - 83)) | (1L << (GreaterEqual - 83)))) != 0)) {
				{
				{
				setState(141);
				_la = _input.LA(1);
				if ( !(((((_la - 83)) & ~0x3f) == 0 && ((1L << (_la - 83)) & ((1L << (Less - 83)) | (1L << (LessEqual - 83)) | (1L << (Greater - 83)) | (1L << (GreaterEqual - 83)))) != 0)) ) {
				_errHandler.recoverInline(this);
				}
				else {
					if ( _input.LA(1)==Token.EOF ) matchedEOF = true;
					_errHandler.reportMatch(this);
					consume();
				}
				setState(142);
				shiftExpr();
				}
				}
				setState(147);
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
			setState(148);
			relatExpr();
			setState(153);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (_la==Equal || _la==NotEqual) {
				{
				{
				setState(149);
				_la = _input.LA(1);
				if ( !(_la==Equal || _la==NotEqual) ) {
				_errHandler.recoverInline(this);
				}
				else {
					if ( _input.LA(1)==Token.EOF ) matchedEOF = true;
					_errHandler.reportMatch(this);
					consume();
				}
				setState(150);
				relatExpr();
				}
				}
				setState(155);
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
			setState(156);
			equExpr();
			setState(161);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (_la==And) {
				{
				{
				setState(157);
				match(And);
				setState(158);
				equExpr();
				}
				}
				setState(163);
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
			setState(164);
			andExpr();
			setState(169);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (_la==Xor) {
				{
				{
				setState(165);
				match(Xor);
				setState(166);
				andExpr();
				}
				}
				setState(171);
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
			setState(172);
			xorExpr();
			setState(177);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (_la==Or) {
				{
				{
				setState(173);
				match(Or);
				setState(174);
				xorExpr();
				}
				}
				setState(179);
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
			setState(180);
			orExpr();
			setState(185);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (_la==LogicAnd) {
				{
				{
				setState(181);
				match(LogicAnd);
				setState(182);
				orExpr();
				}
				}
				setState(187);
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
			setState(188);
			logicAndExpr();
			setState(193);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (_la==LogicOr) {
				{
				{
				setState(189);
				match(LogicOr);
				setState(190);
				logicAndExpr();
				}
				}
				setState(195);
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
			setState(196);
			logicOrExpr();
			setState(202);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==Question) {
				{
				setState(197);
				match(Question);
				setState(198);
				expr();
				setState(199);
				match(Colon);
				setState(200);
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
			setState(210);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,18,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(204);
				constant();
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(205);
				unaryExpr();
				setState(206);
				_la = _input.LA(1);
				if ( !(((((_la - 72)) & ~0x3f) == 0 && ((1L << (_la - 72)) & ((1L << (Assign - 72)) | (1L << (MulAssign - 72)) | (1L << (DivAssign - 72)) | (1L << (ModAssign - 72)) | (1L << (PlusAssign - 72)) | (1L << (MinusAssign - 72)) | (1L << (LeftShiftAssign - 72)) | (1L << (RightShiftAssign - 72)) | (1L << (AndAssign - 72)) | (1L << (XorAssign - 72)) | (1L << (OrAssign - 72)))) != 0)) ) {
				_errHandler.recoverInline(this);
				}
				else {
					if ( _input.LA(1)==Token.EOF ) matchedEOF = true;
					_errHandler.reportMatch(this);
					consume();
				}
				setState(207);
				assignExpr();
				}
				break;
			case 3:
				enterOuterAlt(_localctx, 3);
				{
				setState(209);
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
			setState(220);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (((((_la - 50)) & ~0x3f) == 0 && ((1L << (_la - 50)) & ((1L << (LeftParen - 50)) | (1L << (Increase - 50)) | (1L << (Decrease - 50)) | (1L << (And - 50)) | (1L << (LogicAnd - 50)) | (1L << (Not - 50)) | (1L << (Tilde - 50)) | (1L << (BinNum - 50)) | (1L << (OctNum - 50)) | (1L << (DecNum - 50)) | (1L << (HexNum - 50)) | (1L << (Identifier - 50)) | (1L << (StringConstant - 50)))) != 0)) {
				{
				setState(212);
				expr();
				setState(217);
				_errHandler.sync(this);
				_la = _input.LA(1);
				while (_la==Comma) {
					{
					{
					setState(213);
					match(Comma);
					setState(214);
					expr();
					}
					}
					setState(219);
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
			setState(222);
			assignExpr();
			setState(227);
			_errHandler.sync(this);
			_alt = getInterpreter().adaptivePredict(_input,21,_ctx);
			while ( _alt!=2 && _alt!= ATN.INVALID_ALT_NUMBER ) {
				if ( _alt==1 ) {
					{
					{
					setState(223);
					match(Comma);
					setState(224);
					assignExpr();
					}
					} 
				}
				setState(229);
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
			setState(231);
			match(Identifier);
			}
			_ctx.stop = _input.LT(-1);
			setState(238);
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
					setState(233);
					if (!(precpred(_ctx, 2))) throw new FailedPredicateException(this, "precpred(_ctx, 2)");
					setState(234);
					match(Dot);
					setState(235);
					match(Identifier);
					}
					} 
				}
				setState(240);
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
			setState(241);
			match(Import);
			setState(242);
			library(0);
			setState(243);
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
			setState(258);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case Num:
				{
				setState(246);
				match(Num);
				}
				break;
			case Byte:
				{
				setState(247);
				match(Byte);
				}
				break;
			case Short:
				{
				setState(248);
				match(Short);
				}
				break;
			case Int:
				{
				setState(249);
				match(Int);
				}
				break;
			case Long:
				{
				setState(250);
				match(Long);
				}
				break;
			case Bool:
				{
				setState(251);
				match(Bool);
				}
				break;
			case String:
				{
				setState(252);
				match(String);
				}
				break;
			case Float:
				{
				setState(253);
				match(Float);
				}
				break;
			case Double:
				{
				setState(254);
				match(Double);
				}
				break;
			case Char:
				{
				setState(255);
				match(Char);
				}
				break;
			case Var:
				{
				setState(256);
				match(Var);
				}
				break;
			case Identifier:
				{
				setState(257);
				library(0);
				}
				break;
			default:
				throw new NoViableAltException(this);
			}
			_ctx.stop = _input.LT(-1);
			setState(264);
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
					setState(260);
					if (!(precpred(_ctx, 1))) throw new FailedPredicateException(this, "precpred(_ctx, 1)");
					setState(261);
					match(T__0);
					}
					} 
				}
				setState(266);
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
			setState(278);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (((((_la - 35)) & ~0x3f) == 0 && ((1L << (_la - 35)) & ((1L << (Num - 35)) | (1L << (Byte - 35)) | (1L << (Short - 35)) | (1L << (Int - 35)) | (1L << (Long - 35)) | (1L << (Float - 35)) | (1L << (Double - 35)) | (1L << (Bool - 35)) | (1L << (String - 35)) | (1L << (Char - 35)) | (1L << (Var - 35)) | (1L << (Identifier - 35)))) != 0)) {
				{
				setState(267);
				type(0);
				setState(268);
				match(Identifier);
				setState(275);
				_errHandler.sync(this);
				_la = _input.LA(1);
				while (_la==Comma) {
					{
					{
					setState(269);
					match(Comma);
					setState(270);
					type(0);
					setState(271);
					match(Identifier);
					}
					}
					setState(277);
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
			setState(283);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while ((((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << If) | (1L << For) | (1L << While) | (1L << Do) | (1L << Return) | (1L << Num) | (1L << Byte) | (1L << Short) | (1L << Int) | (1L << Long) | (1L << Float) | (1L << Double) | (1L << Bool) | (1L << String) | (1L << Char) | (1L << Var) | (1L << SemiColon) | (1L << LeftParen) | (1L << Increase) | (1L << Decrease))) != 0) || ((((_la - 65)) & ~0x3f) == 0 && ((1L << (_la - 65)) & ((1L << (And - 65)) | (1L << (LogicAnd - 65)) | (1L << (Not - 65)) | (1L << (Tilde - 65)) | (1L << (BinNum - 65)) | (1L << (OctNum - 65)) | (1L << (DecNum - 65)) | (1L << (HexNum - 65)) | (1L << (Identifier - 65)) | (1L << (StringConstant - 65)))) != 0)) {
				{
				{
				setState(280);
				stmt();
				}
				}
				setState(285);
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
			setState(296);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,28,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(286);
				expr();
				setState(287);
				match(SemiColon);
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(289);
				match(SemiColon);
				}
				break;
			case 3:
				enterOuterAlt(_localctx, 3);
				{
				setState(290);
				defVarStmt();
				}
				break;
			case 4:
				enterOuterAlt(_localctx, 4);
				{
				setState(291);
				returnStmt();
				}
				break;
			case 5:
				enterOuterAlt(_localctx, 5);
				{
				setState(292);
				ifStmt();
				}
				break;
			case 6:
				enterOuterAlt(_localctx, 6);
				{
				setState(293);
				forStmt();
				}
				break;
			case 7:
				enterOuterAlt(_localctx, 7);
				{
				setState(294);
				whileStmt();
				}
				break;
			case 8:
				enterOuterAlt(_localctx, 8);
				{
				setState(295);
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
			setState(298);
			match(Return);
			setState(299);
			expr();
			setState(300);
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
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(302);
			type(0);
			setState(303);
			match(Identifier);
			{
			setState(304);
			match(Assign);
			setState(305);
			expr();
			}
			setState(307);
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
			setState(309);
			match(If);
			setState(310);
			match(LeftParen);
			setState(311);
			logicOrExpr();
			setState(312);
			match(RightParen);
			setState(318);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case LeftBrace:
				{
				{
				setState(313);
				match(LeftBrace);
				setState(314);
				program();
				setState(315);
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
				setState(317);
				stmt();
				}
				break;
			default:
				throw new NoViableAltException(this);
			}
			setState(333);
			_errHandler.sync(this);
			_alt = getInterpreter().adaptivePredict(_input,31,_ctx);
			while ( _alt!=2 && _alt!= ATN.INVALID_ALT_NUMBER ) {
				if ( _alt==1 ) {
					{
					{
					setState(320);
					match(Elif);
					setState(321);
					match(LeftParen);
					setState(322);
					logicOrExpr();
					setState(323);
					match(RightParen);
					setState(329);
					_errHandler.sync(this);
					switch (_input.LA(1)) {
					case LeftBrace:
						{
						{
						setState(324);
						match(LeftBrace);
						setState(325);
						program();
						setState(326);
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
						setState(328);
						stmt();
						}
						break;
					default:
						throw new NoViableAltException(this);
					}
					}
					} 
				}
				setState(335);
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,31,_ctx);
			}
			setState(344);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,33,_ctx) ) {
			case 1:
				{
				setState(336);
				match(Else);
				setState(342);
				_errHandler.sync(this);
				switch (_input.LA(1)) {
				case LeftBrace:
					{
					{
					setState(337);
					match(LeftBrace);
					setState(338);
					program();
					setState(339);
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
					setState(341);
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
			setState(346);
			match(For);
			setState(347);
			match(LeftParen);
			setState(348);
			stmt();
			setState(349);
			logicOrExpr();
			setState(350);
			match(SemiColon);
			setState(351);
			expr();
			setState(352);
			match(RightParen);
			setState(358);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case LeftBrace:
				{
				{
				setState(353);
				match(LeftBrace);
				setState(354);
				program();
				setState(355);
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
				setState(357);
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
			setState(360);
			match(While);
			setState(361);
			match(LeftParen);
			setState(362);
			logicOrExpr();
			setState(363);
			match(RightParen);
			setState(369);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case LeftBrace:
				{
				{
				setState(364);
				match(LeftBrace);
				setState(365);
				program();
				setState(366);
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
				setState(368);
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
			setState(371);
			match(Do);
			setState(372);
			match(LeftBrace);
			setState(373);
			program();
			setState(374);
			match(RightBrace);
			setState(375);
			match(While);
			setState(376);
			match(LeftParen);
			setState(377);
			logicOrExpr();
			setState(378);
			match(RightParen);
			setState(379);
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
			setState(382);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==Export) {
				{
				setState(381);
				match(Export);
				}
			}

			setState(384);
			match(Func);
			setState(385);
			match(Identifier);
			setState(386);
			match(LeftParen);
			setState(387);
			argsNeed();
			setState(388);
			match(RightParen);
			setState(391);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==Colon) {
				{
				setState(389);
				match(Colon);
				setState(390);
				type(0);
				}
			}

			setState(393);
			match(LeftBrace);
			setState(394);
			program();
			setState(395);
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

	public static class StatContext extends ParserRuleContext {
		public List<ImportStmtContext> importStmt() {
			return getRuleContexts(ImportStmtContext.class);
		}
		public ImportStmtContext importStmt(int i) {
			return getRuleContext(ImportStmtContext.class,i);
		}
		public List<DefVarStmtContext> defVarStmt() {
			return getRuleContexts(DefVarStmtContext.class);
		}
		public DefVarStmtContext defVarStmt(int i) {
			return getRuleContext(DefVarStmtContext.class,i);
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
		enterRule(_localctx, 66, RULE_stat);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(400);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (_la==Import) {
				{
				{
				setState(397);
				importStmt();
				}
				}
				setState(402);
				_errHandler.sync(this);
				_la = _input.LA(1);
			}
			setState(406);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (((((_la - 35)) & ~0x3f) == 0 && ((1L << (_la - 35)) & ((1L << (Num - 35)) | (1L << (Byte - 35)) | (1L << (Short - 35)) | (1L << (Int - 35)) | (1L << (Long - 35)) | (1L << (Float - 35)) | (1L << (Double - 35)) | (1L << (Bool - 35)) | (1L << (String - 35)) | (1L << (Char - 35)) | (1L << (Var - 35)) | (1L << (Identifier - 35)))) != 0)) {
				{
				{
				setState(403);
				defVarStmt();
				}
				}
				setState(408);
				_errHandler.sync(this);
				_la = _input.LA(1);
			}
			setState(412);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (_la==Export || _la==Func) {
				{
				{
				setState(409);
				defFuncStmt();
				}
				}
				setState(414);
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
		"\3\u608b\ua72a\u8133\ub9ed\u417c\u3be7\u7786\u5964\3d\u01a2\4\2\t\2\4"+
		"\3\t\3\4\4\t\4\4\5\t\5\4\6\t\6\4\7\t\7\4\b\t\b\4\t\t\t\4\n\t\n\4\13\t"+
		"\13\4\f\t\f\4\r\t\r\4\16\t\16\4\17\t\17\4\20\t\20\4\21\t\21\4\22\t\22"+
		"\4\23\t\23\4\24\t\24\4\25\t\25\4\26\t\26\4\27\t\27\4\30\t\30\4\31\t\31"+
		"\4\32\t\32\4\33\t\33\4\34\t\34\4\35\t\35\4\36\t\36\4\37\t\37\4 \t \4!"+
		"\t!\4\"\t\"\4#\t#\3\2\3\2\3\3\3\3\5\3K\n\3\3\4\3\4\3\4\3\4\3\4\3\4\5\4"+
		"S\n\4\3\5\3\5\3\5\3\5\3\5\3\5\3\5\3\5\3\5\3\5\3\5\3\5\7\5a\n\5\f\5\16"+
		"\5d\13\5\3\6\7\6g\n\6\f\6\16\6j\13\6\3\6\3\6\3\6\3\6\3\6\5\6q\n\6\3\7"+
		"\3\7\5\7u\n\7\3\b\3\b\3\b\7\bz\n\b\f\b\16\b}\13\b\3\t\3\t\3\t\7\t\u0082"+
		"\n\t\f\t\16\t\u0085\13\t\3\n\3\n\3\n\7\n\u008a\n\n\f\n\16\n\u008d\13\n"+
		"\3\13\3\13\3\13\7\13\u0092\n\13\f\13\16\13\u0095\13\13\3\f\3\f\3\f\7\f"+
		"\u009a\n\f\f\f\16\f\u009d\13\f\3\r\3\r\3\r\7\r\u00a2\n\r\f\r\16\r\u00a5"+
		"\13\r\3\16\3\16\3\16\7\16\u00aa\n\16\f\16\16\16\u00ad\13\16\3\17\3\17"+
		"\3\17\7\17\u00b2\n\17\f\17\16\17\u00b5\13\17\3\20\3\20\3\20\7\20\u00ba"+
		"\n\20\f\20\16\20\u00bd\13\20\3\21\3\21\3\21\7\21\u00c2\n\21\f\21\16\21"+
		"\u00c5\13\21\3\22\3\22\3\22\3\22\3\22\3\22\5\22\u00cd\n\22\3\23\3\23\3"+
		"\23\3\23\3\23\3\23\5\23\u00d5\n\23\3\24\3\24\3\24\7\24\u00da\n\24\f\24"+
		"\16\24\u00dd\13\24\5\24\u00df\n\24\3\25\3\25\3\25\7\25\u00e4\n\25\f\25"+
		"\16\25\u00e7\13\25\3\26\3\26\3\26\3\26\3\26\3\26\7\26\u00ef\n\26\f\26"+
		"\16\26\u00f2\13\26\3\27\3\27\3\27\3\27\3\30\3\30\3\30\3\30\3\30\3\30\3"+
		"\30\3\30\3\30\3\30\3\30\3\30\3\30\5\30\u0105\n\30\3\30\3\30\7\30\u0109"+
		"\n\30\f\30\16\30\u010c\13\30\3\31\3\31\3\31\3\31\3\31\3\31\7\31\u0114"+
		"\n\31\f\31\16\31\u0117\13\31\5\31\u0119\n\31\3\32\7\32\u011c\n\32\f\32"+
		"\16\32\u011f\13\32\3\33\3\33\3\33\3\33\3\33\3\33\3\33\3\33\3\33\3\33\5"+
		"\33\u012b\n\33\3\34\3\34\3\34\3\34\3\35\3\35\3\35\3\35\3\35\3\35\3\35"+
		"\3\36\3\36\3\36\3\36\3\36\3\36\3\36\3\36\3\36\5\36\u0141\n\36\3\36\3\36"+
		"\3\36\3\36\3\36\3\36\3\36\3\36\3\36\5\36\u014c\n\36\7\36\u014e\n\36\f"+
		"\36\16\36\u0151\13\36\3\36\3\36\3\36\3\36\3\36\3\36\5\36\u0159\n\36\5"+
		"\36\u015b\n\36\3\37\3\37\3\37\3\37\3\37\3\37\3\37\3\37\3\37\3\37\3\37"+
		"\3\37\5\37\u0169\n\37\3 \3 \3 \3 \3 \3 \3 \3 \3 \5 \u0174\n \3!\3!\3!"+
		"\3!\3!\3!\3!\3!\3!\3!\3\"\5\"\u0181\n\"\3\"\3\"\3\"\3\"\3\"\3\"\3\"\5"+
		"\"\u018a\n\"\3\"\3\"\3\"\3\"\3#\7#\u0191\n#\f#\16#\u0194\13#\3#\7#\u0197"+
		"\n#\f#\16#\u019a\13#\3#\7#\u019d\n#\f#\16#\u01a0\13#\3#\2\4*.$\2\4\6\b"+
		"\n\f\16\20\22\24\26\30\32\34\36 \"$&(*,.\60\62\64\668:<>@BD\2\13\3\2_"+
		"b\4\2==??\4\2CCHI\3\2@B\4\2<<>>\3\2:;\3\2UX\3\2YZ\3\2JT\2\u01bd\2F\3\2"+
		"\2\2\4J\3\2\2\2\6R\3\2\2\2\bT\3\2\2\2\nh\3\2\2\2\ft\3\2\2\2\16v\3\2\2"+
		"\2\20~\3\2\2\2\22\u0086\3\2\2\2\24\u008e\3\2\2\2\26\u0096\3\2\2\2\30\u009e"+
		"\3\2\2\2\32\u00a6\3\2\2\2\34\u00ae\3\2\2\2\36\u00b6\3\2\2\2 \u00be\3\2"+
		"\2\2\"\u00c6\3\2\2\2$\u00d4\3\2\2\2&\u00de\3\2\2\2(\u00e0\3\2\2\2*\u00e8"+
		"\3\2\2\2,\u00f3\3\2\2\2.\u0104\3\2\2\2\60\u0118\3\2\2\2\62\u011d\3\2\2"+
		"\2\64\u012a\3\2\2\2\66\u012c\3\2\2\28\u0130\3\2\2\2:\u0137\3\2\2\2<\u015c"+
		"\3\2\2\2>\u016a\3\2\2\2@\u0175\3\2\2\2B\u0180\3\2\2\2D\u0192\3\2\2\2F"+
		"G\t\2\2\2G\3\3\2\2\2HK\7d\2\2IK\5\2\2\2JH\3\2\2\2JI\3\2\2\2K\5\3\2\2\2"+
		"LS\5\4\3\2MS\5*\26\2NO\7\64\2\2OP\5(\25\2PQ\7\65\2\2QS\3\2\2\2RL\3\2\2"+
		"\2RM\3\2\2\2RN\3\2\2\2S\7\3\2\2\2Tb\5\6\4\2UV\7\66\2\2VW\5(\25\2WX\7\67"+
		"\2\2Xa\3\2\2\2YZ\7\64\2\2Z[\5&\24\2[\\\7\65\2\2\\a\3\2\2\2]^\7\\\2\2^"+
		"a\5*\26\2_a\t\3\2\2`U\3\2\2\2`Y\3\2\2\2`]\3\2\2\2`_\3\2\2\2ad\3\2\2\2"+
		"b`\3\2\2\2bc\3\2\2\2c\t\3\2\2\2db\3\2\2\2eg\t\3\2\2fe\3\2\2\2gj\3\2\2"+
		"\2hf\3\2\2\2hi\3\2\2\2ip\3\2\2\2jh\3\2\2\2kq\5\b\5\2lm\t\4\2\2mq\5\f\7"+
		"\2no\7D\2\2oq\5*\26\2pk\3\2\2\2pl\3\2\2\2pn\3\2\2\2q\13\3\2\2\2ru\5\n"+
		"\6\2su\5\2\2\2tr\3\2\2\2ts\3\2\2\2u\r\3\2\2\2v{\5\f\7\2wx\t\5\2\2xz\5"+
		"\f\7\2yw\3\2\2\2z}\3\2\2\2{y\3\2\2\2{|\3\2\2\2|\17\3\2\2\2}{\3\2\2\2~"+
		"\u0083\5\16\b\2\177\u0080\t\6\2\2\u0080\u0082\5\16\b\2\u0081\177\3\2\2"+
		"\2\u0082\u0085\3\2\2\2\u0083\u0081\3\2\2\2\u0083\u0084\3\2\2\2\u0084\21"+
		"\3\2\2\2\u0085\u0083\3\2\2\2\u0086\u008b\5\20\t\2\u0087\u0088\t\7\2\2"+
		"\u0088\u008a\5\20\t\2\u0089\u0087\3\2\2\2\u008a\u008d\3\2\2\2\u008b\u0089"+
		"\3\2\2\2\u008b\u008c\3\2\2\2\u008c\23\3\2\2\2\u008d\u008b\3\2\2\2\u008e"+
		"\u0093\5\22\n\2\u008f\u0090\t\b\2\2\u0090\u0092\5\22\n\2\u0091\u008f\3"+
		"\2\2\2\u0092\u0095\3\2\2\2\u0093\u0091\3\2\2\2\u0093\u0094\3\2\2\2\u0094"+
		"\25\3\2\2\2\u0095\u0093\3\2\2\2\u0096\u009b\5\24\13\2\u0097\u0098\t\t"+
		"\2\2\u0098\u009a\5\24\13\2\u0099\u0097\3\2\2\2\u009a\u009d\3\2\2\2\u009b"+
		"\u0099\3\2\2\2\u009b\u009c\3\2\2\2\u009c\27\3\2\2\2\u009d\u009b\3\2\2"+
		"\2\u009e\u00a3\5\26\f\2\u009f\u00a0\7C\2\2\u00a0\u00a2\5\26\f\2\u00a1"+
		"\u009f\3\2\2\2\u00a2\u00a5\3\2\2\2\u00a3\u00a1\3\2\2\2\u00a3\u00a4\3\2"+
		"\2\2\u00a4\31\3\2\2\2\u00a5\u00a3\3\2\2\2\u00a6\u00ab\5\30\r\2\u00a7\u00a8"+
		"\7G\2\2\u00a8\u00aa\5\30\r\2\u00a9\u00a7\3\2\2\2\u00aa\u00ad\3\2\2\2\u00ab"+
		"\u00a9\3\2\2\2\u00ab\u00ac\3\2\2\2\u00ac\33\3\2\2\2\u00ad\u00ab\3\2\2"+
		"\2\u00ae\u00b3\5\32\16\2\u00af\u00b0\7E\2\2\u00b0\u00b2\5\32\16\2\u00b1"+
		"\u00af\3\2\2\2\u00b2\u00b5\3\2\2\2\u00b3\u00b1\3\2\2\2\u00b3\u00b4\3\2"+
		"\2\2\u00b4\35\3\2\2\2\u00b5\u00b3\3\2\2\2\u00b6\u00bb\5\34\17\2\u00b7"+
		"\u00b8\7D\2\2\u00b8\u00ba\5\34\17\2\u00b9\u00b7\3\2\2\2\u00ba\u00bd\3"+
		"\2\2\2\u00bb\u00b9\3\2\2\2\u00bb\u00bc\3\2\2\2\u00bc\37\3\2\2\2\u00bd"+
		"\u00bb\3\2\2\2\u00be\u00c3\5\36\20\2\u00bf\u00c0\7F\2\2\u00c0\u00c2\5"+
		"\36\20\2\u00c1\u00bf\3\2\2\2\u00c2\u00c5\3\2\2\2\u00c3\u00c1\3\2\2\2\u00c3"+
		"\u00c4\3\2\2\2\u00c4!\3\2\2\2\u00c5\u00c3\3\2\2\2\u00c6\u00cc\5 \21\2"+
		"\u00c7\u00c8\7\61\2\2\u00c8\u00c9\5(\25\2\u00c9\u00ca\7\63\2\2\u00ca\u00cb"+
		"\5\"\22\2\u00cb\u00cd\3\2\2\2\u00cc\u00c7\3\2\2\2\u00cc\u00cd\3\2\2\2"+
		"\u00cd#\3\2\2\2\u00ce\u00d5\5\4\3\2\u00cf\u00d0\5\n\6\2\u00d0\u00d1\t"+
		"\n\2\2\u00d1\u00d2\5$\23\2\u00d2\u00d5\3\2\2\2\u00d3\u00d5\5\"\22\2\u00d4"+
		"\u00ce\3\2\2\2\u00d4\u00cf\3\2\2\2\u00d4\u00d3\3\2\2\2\u00d5%\3\2\2\2"+
		"\u00d6\u00db\5(\25\2\u00d7\u00d8\7\60\2\2\u00d8\u00da\5(\25\2\u00d9\u00d7"+
		"\3\2\2\2\u00da\u00dd\3\2\2\2\u00db\u00d9\3\2\2\2\u00db\u00dc\3\2\2\2\u00dc"+
		"\u00df\3\2\2\2\u00dd\u00db\3\2\2\2\u00de\u00d6\3\2\2\2\u00de\u00df\3\2"+
		"\2\2\u00df\'\3\2\2\2\u00e0\u00e5\5$\23\2\u00e1\u00e2\7\60\2\2\u00e2\u00e4"+
		"\5$\23\2\u00e3\u00e1\3\2\2\2\u00e4\u00e7\3\2\2\2\u00e5\u00e3\3\2\2\2\u00e5"+
		"\u00e6\3\2\2\2\u00e6)\3\2\2\2\u00e7\u00e5\3\2\2\2\u00e8\u00e9\b\26\1\2"+
		"\u00e9\u00ea\7c\2\2\u00ea\u00f0\3\2\2\2\u00eb\u00ec\f\4\2\2\u00ec\u00ed"+
		"\7\\\2\2\u00ed\u00ef\7c\2\2\u00ee\u00eb\3\2\2\2\u00ef\u00f2\3\2\2\2\u00f0"+
		"\u00ee\3\2\2\2\u00f0\u00f1\3\2\2\2\u00f1+\3\2\2\2\u00f2\u00f0\3\2\2\2"+
		"\u00f3\u00f4\7\7\2\2\u00f4\u00f5\5*\26\2\u00f5\u00f6\7\62\2\2\u00f6-\3"+
		"\2\2\2\u00f7\u00f8\b\30\1\2\u00f8\u0105\7%\2\2\u00f9\u0105\7&\2\2\u00fa"+
		"\u0105\7\'\2\2\u00fb\u0105\7(\2\2\u00fc\u0105\7)\2\2\u00fd\u0105\7,\2"+
		"\2\u00fe\u0105\7-\2\2\u00ff\u0105\7*\2\2\u0100\u0105\7+\2\2\u0101\u0105"+
		"\7.\2\2\u0102\u0105\7/\2\2\u0103\u0105\5*\26\2\u0104\u00f7\3\2\2\2\u0104"+
		"\u00f9\3\2\2\2\u0104\u00fa\3\2\2\2\u0104\u00fb\3\2\2\2\u0104\u00fc\3\2"+
		"\2\2\u0104\u00fd\3\2\2\2\u0104\u00fe\3\2\2\2\u0104\u00ff\3\2\2\2\u0104"+
		"\u0100\3\2\2\2\u0104\u0101\3\2\2\2\u0104\u0102\3\2\2\2\u0104\u0103\3\2"+
		"\2\2\u0105\u010a\3\2\2\2\u0106\u0107\f\3\2\2\u0107\u0109\7\3\2\2\u0108"+
		"\u0106\3\2\2\2\u0109\u010c\3\2\2\2\u010a\u0108\3\2\2\2\u010a\u010b\3\2"+
		"\2\2\u010b/\3\2\2\2\u010c\u010a\3\2\2\2\u010d\u010e\5.\30\2\u010e\u0115"+
		"\7c\2\2\u010f\u0110\7\60\2\2\u0110\u0111\5.\30\2\u0111\u0112\7c\2\2\u0112"+
		"\u0114\3\2\2\2\u0113\u010f\3\2\2\2\u0114\u0117\3\2\2\2\u0115\u0113\3\2"+
		"\2\2\u0115\u0116\3\2\2\2\u0116\u0119\3\2\2\2\u0117\u0115\3\2\2\2\u0118"+
		"\u010d\3\2\2\2\u0118\u0119\3\2\2\2\u0119\61\3\2\2\2\u011a\u011c\5\64\33"+
		"\2\u011b\u011a\3\2\2\2\u011c\u011f\3\2\2\2\u011d\u011b\3\2\2\2\u011d\u011e"+
		"\3\2\2\2\u011e\63\3\2\2\2\u011f\u011d\3\2\2\2\u0120\u0121\5(\25\2\u0121"+
		"\u0122\7\62\2\2\u0122\u012b\3\2\2\2\u0123\u012b\7\62\2\2\u0124\u012b\5"+
		"8\35\2\u0125\u012b\5\66\34\2\u0126\u012b\5:\36\2\u0127\u012b\5<\37\2\u0128"+
		"\u012b\5> \2\u0129\u012b\5@!\2\u012a\u0120\3\2\2\2\u012a\u0123\3\2\2\2"+
		"\u012a\u0124\3\2\2\2\u012a\u0125\3\2\2\2\u012a\u0126\3\2\2\2\u012a\u0127"+
		"\3\2\2\2\u012a\u0128\3\2\2\2\u012a\u0129\3\2\2\2\u012b\65\3\2\2\2\u012c"+
		"\u012d\7$\2\2\u012d\u012e\5(\25\2\u012e\u012f\7\62\2\2\u012f\67\3\2\2"+
		"\2\u0130\u0131\5.\30\2\u0131\u0132\7c\2\2\u0132\u0133\7J\2\2\u0133\u0134"+
		"\5(\25\2\u0134\u0135\3\2\2\2\u0135\u0136\7\62\2\2\u01369\3\2\2\2\u0137"+
		"\u0138\7\33\2\2\u0138\u0139\7\64\2\2\u0139\u013a\5 \21\2\u013a\u0140\7"+
		"\65\2\2\u013b\u013c\78\2\2\u013c\u013d\5\62\32\2\u013d\u013e\79\2\2\u013e"+
		"\u0141\3\2\2\2\u013f\u0141\5\64\33\2\u0140\u013b\3\2\2\2\u0140\u013f\3"+
		"\2\2\2\u0141\u014f\3\2\2\2\u0142\u0143\7\35\2\2\u0143\u0144\7\64\2\2\u0144"+
		"\u0145\5 \21\2\u0145\u014b\7\65\2\2\u0146\u0147\78\2\2\u0147\u0148\5\62"+
		"\32\2\u0148\u0149\79\2\2\u0149\u014c\3\2\2\2\u014a\u014c\5\64\33\2\u014b"+
		"\u0146\3\2\2\2\u014b\u014a\3\2\2\2\u014c\u014e\3\2\2\2\u014d\u0142\3\2"+
		"\2\2\u014e\u0151\3\2\2\2\u014f\u014d\3\2\2\2\u014f\u0150\3\2\2\2\u0150"+
		"\u015a\3\2\2\2\u0151\u014f\3\2\2\2\u0152\u0158\7\34\2\2\u0153\u0154\7"+
		"8\2\2\u0154\u0155\5\62\32\2\u0155\u0156\79\2\2\u0156\u0159\3\2\2\2\u0157"+
		"\u0159\5\64\33\2\u0158\u0153\3\2\2\2\u0158\u0157\3\2\2\2\u0159\u015b\3"+
		"\2\2\2\u015a\u0152\3\2\2\2\u015a\u015b\3\2\2\2\u015b;\3\2\2\2\u015c\u015d"+
		"\7\37\2\2\u015d\u015e\7\64\2\2\u015e\u015f\5\64\33\2\u015f\u0160\5 \21"+
		"\2\u0160\u0161\7\62\2\2\u0161\u0162\5(\25\2\u0162\u0168\7\65\2\2\u0163"+
		"\u0164\78\2\2\u0164\u0165\5\62\32\2\u0165\u0166\79\2\2\u0166\u0169\3\2"+
		"\2\2\u0167\u0169\5\64\33\2\u0168\u0163\3\2\2\2\u0168\u0167\3\2\2\2\u0169"+
		"=\3\2\2\2\u016a\u016b\7!\2\2\u016b\u016c\7\64\2\2\u016c\u016d\5 \21\2"+
		"\u016d\u0173\7\65\2\2\u016e\u016f\78\2\2\u016f\u0170\5\62\32\2\u0170\u0171"+
		"\79\2\2\u0171\u0174\3\2\2\2\u0172\u0174\5\64\33\2\u0173\u016e\3\2\2\2"+
		"\u0173\u0172\3\2\2\2\u0174?\3\2\2\2\u0175\u0176\7\"\2\2\u0176\u0177\7"+
		"8\2\2\u0177\u0178\5\62\32\2\u0178\u0179\79\2\2\u0179\u017a\7!\2\2\u017a"+
		"\u017b\7\64\2\2\u017b\u017c\5 \21\2\u017c\u017d\7\65\2\2\u017d\u017e\7"+
		"\62\2\2\u017eA\3\2\2\2\u017f\u0181\7\b\2\2\u0180\u017f\3\2\2\2\u0180\u0181"+
		"\3\2\2\2\u0181\u0182\3\2\2\2\u0182\u0183\7\16\2\2\u0183\u0184\7c\2\2\u0184"+
		"\u0185\7\64\2\2\u0185\u0186\5\60\31\2\u0186\u0189\7\65\2\2\u0187\u0188"+
		"\7\63\2\2\u0188\u018a\5.\30\2\u0189\u0187\3\2\2\2\u0189\u018a\3\2\2\2"+
		"\u018a\u018b\3\2\2\2\u018b\u018c\78\2\2\u018c\u018d\5\62\32\2\u018d\u018e"+
		"\79\2\2\u018eC\3\2\2\2\u018f\u0191\5,\27\2\u0190\u018f\3\2\2\2\u0191\u0194"+
		"\3\2\2\2\u0192\u0190\3\2\2\2\u0192\u0193\3\2\2\2\u0193\u0198\3\2\2\2\u0194"+
		"\u0192\3\2\2\2\u0195\u0197\58\35\2\u0196\u0195\3\2\2\2\u0197\u019a\3\2"+
		"\2\2\u0198\u0196\3\2\2\2\u0198\u0199\3\2\2\2\u0199\u019e\3\2\2\2\u019a"+
		"\u0198\3\2\2\2\u019b\u019d\5B\"\2\u019c\u019b\3\2\2\2\u019d\u01a0\3\2"+
		"\2\2\u019e\u019c\3\2\2\2\u019e\u019f\3\2\2\2\u019fE\3\2\2\2\u01a0\u019e"+
		"\3\2\2\2+JR`bhpt{\u0083\u008b\u0093\u009b\u00a3\u00ab\u00b3\u00bb\u00c3"+
		"\u00cc\u00d4\u00db\u00de\u00e5\u00f0\u0104\u010a\u0115\u0118\u011d\u012a"+
		"\u0140\u014b\u014f\u0158\u015a\u0168\u0173\u0180\u0189\u0192\u0198\u019e";
	public static final ATN _ATN =
		new ATNDeserializer().deserialize(_serializedATN.toCharArray());
	static {
		_decisionToDFA = new DFA[_ATN.getNumberOfDecisions()];
		for (int i = 0; i < _ATN.getNumberOfDecisions(); i++) {
			_decisionToDFA[i] = new DFA(_ATN.getDecisionState(i), i);
		}
	}
}