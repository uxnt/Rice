// Generated from D:/tbox-language/src/front_end\TBox.g4 by ANTLR 4.9.1
package tbox.language.frontend;
import org.antlr.v4.runtime.Lexer;
import org.antlr.v4.runtime.CharStream;
import org.antlr.v4.runtime.Token;
import org.antlr.v4.runtime.TokenStream;
import org.antlr.v4.runtime.*;
import org.antlr.v4.runtime.atn.*;
import org.antlr.v4.runtime.dfa.DFA;
import org.antlr.v4.runtime.misc.*;

@SuppressWarnings({"all", "warnings", "unchecked", "unused", "cast"})
public class TBoxLexer extends Lexer {
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
	public static String[] channelNames = {
		"DEFAULT_TOKEN_CHANNEL", "HIDDEN"
	};

	public static String[] modeNames = {
		"DEFAULT_MODE"
	};

	private static String[] makeRuleNames() {
		return new String[] {
			"T__0", "WS", "LineComment", "BlockComment", "Import", "Export", "Of", 
			"Static", "True", "False", "Null", "Func", "Class", "Struct", "Enum", 
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


	public TBoxLexer(CharStream input) {
		super(input);
		_interp = new LexerATNSimulator(this,_ATN,_decisionToDFA,_sharedContextCache);
	}

	@Override
	public String getGrammarFileName() { return "TBox.g4"; }

	@Override
	public String[] getRuleNames() { return ruleNames; }

	@Override
	public String getSerializedATN() { return _serializedATN; }

	@Override
	public String[] getChannelNames() { return channelNames; }

	@Override
	public String[] getModeNames() { return modeNames; }

	@Override
	public ATN getATN() { return _ATN; }

	public static final String _serializedATN =
		"\3\u608b\ua72a\u8133\ub9ed\u417c\u3be7\u7786\u5964\2d\u029b\b\1\4\2\t"+
		"\2\4\3\t\3\4\4\t\4\4\5\t\5\4\6\t\6\4\7\t\7\4\b\t\b\4\t\t\t\4\n\t\n\4\13"+
		"\t\13\4\f\t\f\4\r\t\r\4\16\t\16\4\17\t\17\4\20\t\20\4\21\t\21\4\22\t\22"+
		"\4\23\t\23\4\24\t\24\4\25\t\25\4\26\t\26\4\27\t\27\4\30\t\30\4\31\t\31"+
		"\4\32\t\32\4\33\t\33\4\34\t\34\4\35\t\35\4\36\t\36\4\37\t\37\4 \t \4!"+
		"\t!\4\"\t\"\4#\t#\4$\t$\4%\t%\4&\t&\4\'\t\'\4(\t(\4)\t)\4*\t*\4+\t+\4"+
		",\t,\4-\t-\4.\t.\4/\t/\4\60\t\60\4\61\t\61\4\62\t\62\4\63\t\63\4\64\t"+
		"\64\4\65\t\65\4\66\t\66\4\67\t\67\48\t8\49\t9\4:\t:\4;\t;\4<\t<\4=\t="+
		"\4>\t>\4?\t?\4@\t@\4A\tA\4B\tB\4C\tC\4D\tD\4E\tE\4F\tF\4G\tG\4H\tH\4I"+
		"\tI\4J\tJ\4K\tK\4L\tL\4M\tM\4N\tN\4O\tO\4P\tP\4Q\tQ\4R\tR\4S\tS\4T\tT"+
		"\4U\tU\4V\tV\4W\tW\4X\tX\4Y\tY\4Z\tZ\4[\t[\4\\\t\\\4]\t]\4^\t^\4_\t_\4"+
		"`\t`\4a\ta\4b\tb\4c\tc\3\2\3\2\3\2\3\3\6\3\u00cc\n\3\r\3\16\3\u00cd\3"+
		"\3\3\3\3\4\3\4\3\4\5\4\u00d5\n\4\3\4\7\4\u00d8\n\4\f\4\16\4\u00db\13\4"+
		"\3\4\3\4\3\4\3\4\3\5\3\5\3\5\3\5\7\5\u00e5\n\5\f\5\16\5\u00e8\13\5\3\5"+
		"\3\5\3\5\3\5\3\5\3\6\3\6\3\6\3\6\3\6\3\6\3\6\3\7\3\7\3\7\3\7\3\7\3\7\3"+
		"\7\3\b\3\b\3\b\3\t\3\t\3\t\3\t\3\t\3\t\3\t\3\n\3\n\3\n\3\n\3\n\3\13\3"+
		"\13\3\13\3\13\3\13\3\13\3\f\3\f\3\f\3\f\3\f\3\r\3\r\3\r\3\r\3\r\3\16\3"+
		"\16\3\16\3\16\3\16\3\16\3\17\3\17\3\17\3\17\3\17\3\17\3\17\3\20\3\20\3"+
		"\20\3\20\3\20\3\21\3\21\3\21\3\21\3\21\3\21\3\21\3\21\3\21\3\21\3\22\3"+
		"\22\3\22\3\22\3\22\3\22\3\22\3\22\3\22\3\23\3\23\3\23\3\23\3\23\3\23\3"+
		"\23\3\23\3\23\3\24\3\24\3\24\3\24\3\24\3\24\3\24\3\25\3\25\3\25\3\25\3"+
		"\25\3\25\3\25\3\25\3\25\3\25\3\26\3\26\3\26\3\26\3\26\3\26\3\26\3\26\3"+
		"\27\3\27\3\27\3\27\3\27\3\27\3\27\3\27\3\27\3\30\3\30\3\30\3\30\3\30\3"+
		"\30\3\30\3\30\3\30\3\31\3\31\3\31\3\31\3\31\3\31\3\31\3\32\3\32\3\32\3"+
		"\33\3\33\3\33\3\33\3\33\3\34\3\34\3\34\3\34\3\34\3\35\3\35\3\35\3\35\3"+
		"\35\3\35\3\35\3\36\3\36\3\36\3\36\3\37\3\37\3\37\3\37\3\37\3\37\3\37\3"+
		"\37\3 \3 \3 \3 \3 \3 \3!\3!\3!\3\"\3\"\3\"\3\"\3\"\3\"\3#\3#\3#\3#\3#"+
		"\3#\3#\3$\3$\3$\3$\3%\3%\3%\3%\3%\3&\3&\3&\3&\3&\3&\3\'\3\'\3\'\3\'\3"+
		"(\3(\3(\3(\3(\3)\3)\3)\3)\3)\3)\3*\3*\3*\3*\3*\3*\3*\3+\3+\3+\3+\3+\3"+
		",\3,\3,\3,\3,\3,\3,\3-\3-\3-\3-\3-\3.\3.\3.\3.\3/\3/\3\60\3\60\3\61\3"+
		"\61\3\62\3\62\3\63\3\63\3\64\3\64\3\65\3\65\3\66\3\66\3\67\3\67\38\38"+
		"\39\39\39\3:\3:\3:\3;\3;\3<\3<\3<\3=\3=\3>\3>\3>\3?\3?\3@\3@\3A\3A\3B"+
		"\3B\3C\3C\3C\3D\3D\3E\3E\3E\3F\3F\3G\3G\3H\3H\3I\3I\3J\3J\3J\3K\3K\3K"+
		"\3L\3L\3L\3M\3M\3M\3N\3N\3N\3O\3O\3O\3O\3P\3P\3P\3P\3Q\3Q\3Q\3R\3R\3R"+
		"\3S\3S\3S\3T\3T\3U\3U\3U\3V\3V\3W\3W\3W\3X\3X\3X\3Y\3Y\3Y\3Z\3Z\3Z\3["+
		"\3[\3\\\3\\\3\\\3\\\3]\3]\3^\3^\7^\u0265\n^\f^\16^\u0268\13^\3^\3^\3_"+
		"\3_\3_\7_\u026f\n_\f_\16_\u0272\13_\3`\3`\7`\u0276\n`\f`\16`\u0279\13"+
		"`\3`\5`\u027c\n`\3a\3a\3a\3a\5a\u0282\na\3a\7a\u0285\na\fa\16a\u0288\13"+
		"a\3b\5b\u028b\nb\3b\7b\u028e\nb\fb\16b\u0291\13b\3c\3c\7c\u0295\nc\fc"+
		"\16c\u0298\13c\3c\3c\5\u00d9\u00e6\u0296\2d\3\3\5\4\7\5\t\6\13\7\r\b\17"+
		"\t\21\n\23\13\25\f\27\r\31\16\33\17\35\20\37\21!\22#\23%\24\'\25)\26+"+
		"\27-\30/\31\61\32\63\33\65\34\67\359\36;\37= ?!A\"C#E$G%I&K\'M(O)Q*S+"+
		"U,W-Y.[/]\60_\61a\62c\63e\64g\65i\66k\67m8o9q:s;u<w=y>{?}@\177A\u0081"+
		"B\u0083C\u0085D\u0087E\u0089F\u008bG\u008dH\u008fI\u0091J\u0093K\u0095"+
		"L\u0097M\u0099N\u009bO\u009dP\u009fQ\u00a1R\u00a3S\u00a5T\u00a7U\u00a9"+
		"V\u00abW\u00adX\u00afY\u00b1Z\u00b3[\u00b5\\\u00b7]\u00b9^\u00bb_\u00bd"+
		"`\u00bfa\u00c1b\u00c3c\u00c5d\3\2\r\5\2\13\f\17\17\"\"\4\2\f\f\17\17\3"+
		"\2\62\63\3\2\639\3\2\629\3\2\63;\3\2\62;\5\2\63;CHch\5\2\62;CHch\5\2C"+
		"\\aac|\6\2\62;C\\aac|\2\u02a5\2\3\3\2\2\2\2\5\3\2\2\2\2\7\3\2\2\2\2\t"+
		"\3\2\2\2\2\13\3\2\2\2\2\r\3\2\2\2\2\17\3\2\2\2\2\21\3\2\2\2\2\23\3\2\2"+
		"\2\2\25\3\2\2\2\2\27\3\2\2\2\2\31\3\2\2\2\2\33\3\2\2\2\2\35\3\2\2\2\2"+
		"\37\3\2\2\2\2!\3\2\2\2\2#\3\2\2\2\2%\3\2\2\2\2\'\3\2\2\2\2)\3\2\2\2\2"+
		"+\3\2\2\2\2-\3\2\2\2\2/\3\2\2\2\2\61\3\2\2\2\2\63\3\2\2\2\2\65\3\2\2\2"+
		"\2\67\3\2\2\2\29\3\2\2\2\2;\3\2\2\2\2=\3\2\2\2\2?\3\2\2\2\2A\3\2\2\2\2"+
		"C\3\2\2\2\2E\3\2\2\2\2G\3\2\2\2\2I\3\2\2\2\2K\3\2\2\2\2M\3\2\2\2\2O\3"+
		"\2\2\2\2Q\3\2\2\2\2S\3\2\2\2\2U\3\2\2\2\2W\3\2\2\2\2Y\3\2\2\2\2[\3\2\2"+
		"\2\2]\3\2\2\2\2_\3\2\2\2\2a\3\2\2\2\2c\3\2\2\2\2e\3\2\2\2\2g\3\2\2\2\2"+
		"i\3\2\2\2\2k\3\2\2\2\2m\3\2\2\2\2o\3\2\2\2\2q\3\2\2\2\2s\3\2\2\2\2u\3"+
		"\2\2\2\2w\3\2\2\2\2y\3\2\2\2\2{\3\2\2\2\2}\3\2\2\2\2\177\3\2\2\2\2\u0081"+
		"\3\2\2\2\2\u0083\3\2\2\2\2\u0085\3\2\2\2\2\u0087\3\2\2\2\2\u0089\3\2\2"+
		"\2\2\u008b\3\2\2\2\2\u008d\3\2\2\2\2\u008f\3\2\2\2\2\u0091\3\2\2\2\2\u0093"+
		"\3\2\2\2\2\u0095\3\2\2\2\2\u0097\3\2\2\2\2\u0099\3\2\2\2\2\u009b\3\2\2"+
		"\2\2\u009d\3\2\2\2\2\u009f\3\2\2\2\2\u00a1\3\2\2\2\2\u00a3\3\2\2\2\2\u00a5"+
		"\3\2\2\2\2\u00a7\3\2\2\2\2\u00a9\3\2\2\2\2\u00ab\3\2\2\2\2\u00ad\3\2\2"+
		"\2\2\u00af\3\2\2\2\2\u00b1\3\2\2\2\2\u00b3\3\2\2\2\2\u00b5\3\2\2\2\2\u00b7"+
		"\3\2\2\2\2\u00b9\3\2\2\2\2\u00bb\3\2\2\2\2\u00bd\3\2\2\2\2\u00bf\3\2\2"+
		"\2\2\u00c1\3\2\2\2\2\u00c3\3\2\2\2\2\u00c5\3\2\2\2\3\u00c7\3\2\2\2\5\u00cb"+
		"\3\2\2\2\7\u00d4\3\2\2\2\t\u00e0\3\2\2\2\13\u00ee\3\2\2\2\r\u00f5\3\2"+
		"\2\2\17\u00fc\3\2\2\2\21\u00ff\3\2\2\2\23\u0106\3\2\2\2\25\u010b\3\2\2"+
		"\2\27\u0111\3\2\2\2\31\u0116\3\2\2\2\33\u011b\3\2\2\2\35\u0121\3\2\2\2"+
		"\37\u0128\3\2\2\2!\u012d\3\2\2\2#\u0137\3\2\2\2%\u0140\3\2\2\2\'\u0149"+
		"\3\2\2\2)\u0150\3\2\2\2+\u015a\3\2\2\2-\u0162\3\2\2\2/\u016b\3\2\2\2\61"+
		"\u0174\3\2\2\2\63\u017b\3\2\2\2\65\u017e\3\2\2\2\67\u0183\3\2\2\29\u0188"+
		"\3\2\2\2;\u018f\3\2\2\2=\u0193\3\2\2\2?\u019b\3\2\2\2A\u01a1\3\2\2\2C"+
		"\u01a4\3\2\2\2E\u01aa\3\2\2\2G\u01b1\3\2\2\2I\u01b5\3\2\2\2K\u01ba\3\2"+
		"\2\2M\u01c0\3\2\2\2O\u01c4\3\2\2\2Q\u01c9\3\2\2\2S\u01cf\3\2\2\2U\u01d6"+
		"\3\2\2\2W\u01db\3\2\2\2Y\u01e2\3\2\2\2[\u01e7\3\2\2\2]\u01eb\3\2\2\2_"+
		"\u01ed\3\2\2\2a\u01ef\3\2\2\2c\u01f1\3\2\2\2e\u01f3\3\2\2\2g\u01f5\3\2"+
		"\2\2i\u01f7\3\2\2\2k\u01f9\3\2\2\2m\u01fb\3\2\2\2o\u01fd\3\2\2\2q\u01ff"+
		"\3\2\2\2s\u0202\3\2\2\2u\u0205\3\2\2\2w\u0207\3\2\2\2y\u020a\3\2\2\2{"+
		"\u020c\3\2\2\2}\u020f\3\2\2\2\177\u0211\3\2\2\2\u0081\u0213\3\2\2\2\u0083"+
		"\u0215\3\2\2\2\u0085\u0217\3\2\2\2\u0087\u021a\3\2\2\2\u0089\u021c\3\2"+
		"\2\2\u008b\u021f\3\2\2\2\u008d\u0221\3\2\2\2\u008f\u0223\3\2\2\2\u0091"+
		"\u0225\3\2\2\2\u0093\u0227\3\2\2\2\u0095\u022a\3\2\2\2\u0097\u022d\3\2"+
		"\2\2\u0099\u0230\3\2\2\2\u009b\u0233\3\2\2\2\u009d\u0236\3\2\2\2\u009f"+
		"\u023a\3\2\2\2\u00a1\u023e\3\2\2\2\u00a3\u0241\3\2\2\2\u00a5\u0244\3\2"+
		"\2\2\u00a7\u0247\3\2\2\2\u00a9\u0249\3\2\2\2\u00ab\u024c\3\2\2\2\u00ad"+
		"\u024e\3\2\2\2\u00af\u0251\3\2\2\2\u00b1\u0254\3\2\2\2\u00b3\u0257\3\2"+
		"\2\2\u00b5\u025a\3\2\2\2\u00b7\u025c\3\2\2\2\u00b9\u0260\3\2\2\2\u00bb"+
		"\u0262\3\2\2\2\u00bd\u026b\3\2\2\2\u00bf\u027b\3\2\2\2\u00c1\u027d\3\2"+
		"\2\2\u00c3\u028a\3\2\2\2\u00c5\u0292\3\2\2\2\u00c7\u00c8\7]\2\2\u00c8"+
		"\u00c9\7_\2\2\u00c9\4\3\2\2\2\u00ca\u00cc\t\2\2\2\u00cb\u00ca\3\2\2\2"+
		"\u00cc\u00cd\3\2\2\2\u00cd\u00cb\3\2\2\2\u00cd\u00ce\3\2\2\2\u00ce\u00cf"+
		"\3\2\2\2\u00cf\u00d0\b\3\2\2\u00d0\6\3\2\2\2\u00d1\u00d2\7\61\2\2\u00d2"+
		"\u00d5\7\61\2\2\u00d3\u00d5\7%\2\2\u00d4\u00d1\3\2\2\2\u00d4\u00d3\3\2"+
		"\2\2\u00d5\u00d9\3\2\2\2\u00d6\u00d8\13\2\2\2\u00d7\u00d6\3\2\2\2\u00d8"+
		"\u00db\3\2\2\2\u00d9\u00da\3\2\2\2\u00d9\u00d7\3\2\2\2\u00da\u00dc\3\2"+
		"\2\2\u00db\u00d9\3\2\2\2\u00dc\u00dd\t\3\2\2\u00dd\u00de\3\2\2\2\u00de"+
		"\u00df\b\4\2\2\u00df\b\3\2\2\2\u00e0\u00e1\7\61\2\2\u00e1\u00e2\7,\2\2"+
		"\u00e2\u00e6\3\2\2\2\u00e3\u00e5\13\2\2\2\u00e4\u00e3\3\2\2\2\u00e5\u00e8"+
		"\3\2\2\2\u00e6\u00e7\3\2\2\2\u00e6\u00e4\3\2\2\2\u00e7\u00e9\3\2\2\2\u00e8"+
		"\u00e6\3\2\2\2\u00e9\u00ea\7,\2\2\u00ea\u00eb\7\61\2\2\u00eb\u00ec\3\2"+
		"\2\2\u00ec\u00ed\b\5\2\2\u00ed\n\3\2\2\2\u00ee\u00ef\7k\2\2\u00ef\u00f0"+
		"\7o\2\2\u00f0\u00f1\7r\2\2\u00f1\u00f2\7q\2\2\u00f2\u00f3\7t\2\2\u00f3"+
		"\u00f4\7v\2\2\u00f4\f\3\2\2\2\u00f5\u00f6\7g\2\2\u00f6\u00f7\7z\2\2\u00f7"+
		"\u00f8\7r\2\2\u00f8\u00f9\7q\2\2\u00f9\u00fa\7t\2\2\u00fa\u00fb\7v\2\2"+
		"\u00fb\16\3\2\2\2\u00fc\u00fd\7q\2\2\u00fd\u00fe\7h\2\2\u00fe\20\3\2\2"+
		"\2\u00ff\u0100\7u\2\2\u0100\u0101\7v\2\2\u0101\u0102\7c\2\2\u0102\u0103"+
		"\7v\2\2\u0103\u0104\7k\2\2\u0104\u0105\7e\2\2\u0105\22\3\2\2\2\u0106\u0107"+
		"\7v\2\2\u0107\u0108\7t\2\2\u0108\u0109\7w\2\2\u0109\u010a\7g\2\2\u010a"+
		"\24\3\2\2\2\u010b\u010c\7h\2\2\u010c\u010d\7c\2\2\u010d\u010e\7n\2\2\u010e"+
		"\u010f\7u\2\2\u010f\u0110\7g\2\2\u0110\26\3\2\2\2\u0111\u0112\7p\2\2\u0112"+
		"\u0113\7w\2\2\u0113\u0114\7n\2\2\u0114\u0115\7n\2\2\u0115\30\3\2\2\2\u0116"+
		"\u0117\7h\2\2\u0117\u0118\7w\2\2\u0118\u0119\7p\2\2\u0119\u011a\7e\2\2"+
		"\u011a\32\3\2\2\2\u011b\u011c\7e\2\2\u011c\u011d\7n\2\2\u011d\u011e\7"+
		"c\2\2\u011e\u011f\7u\2\2\u011f\u0120\7u\2\2\u0120\34\3\2\2\2\u0121\u0122"+
		"\7u\2\2\u0122\u0123\7v\2\2\u0123\u0124\7t\2\2\u0124\u0125\7w\2\2\u0125"+
		"\u0126\7e\2\2\u0126\u0127\7v\2\2\u0127\36\3\2\2\2\u0128\u0129\7g\2\2\u0129"+
		"\u012a\7p\2\2\u012a\u012b\7w\2\2\u012b\u012c\7o\2\2\u012c \3\2\2\2\u012d"+
		"\u012e\7k\2\2\u012e\u012f\7p\2\2\u012f\u0130\7v\2\2\u0130\u0131\7g\2\2"+
		"\u0131\u0132\7t\2\2\u0132\u0133\7h\2\2\u0133\u0134\7c\2\2\u0134\u0135"+
		"\7e\2\2\u0135\u0136\7g\2\2\u0136\"\3\2\2\2\u0137\u0138\7c\2\2\u0138\u0139"+
		"\7d\2\2\u0139\u013a\7u\2\2\u013a\u013b\7v\2\2\u013b\u013c\7t\2\2\u013c"+
		"\u013d\7c\2\2\u013d\u013e\7e\2\2\u013e\u013f\7v\2\2\u013f$\3\2\2\2\u0140"+
		"\u0141\7q\2\2\u0141\u0142\7x\2\2\u0142\u0143\7g\2\2\u0143\u0144\7t\2\2"+
		"\u0144\u0145\7t\2\2\u0145\u0146\7k\2\2\u0146\u0147\7f\2\2\u0147\u0148"+
		"\7g\2\2\u0148&\3\2\2\2\u0149\u014a\7r\2\2\u014a\u014b\7w\2\2\u014b\u014c"+
		"\7d\2\2\u014c\u014d\7n\2\2\u014d\u014e\7k\2\2\u014e\u014f\7e\2\2\u014f"+
		"(\3\2\2\2\u0150\u0151\7r\2\2\u0151\u0152\7t\2\2\u0152\u0153\7q\2\2\u0153"+
		"\u0154\7v\2\2\u0154\u0155\7g\2\2\u0155\u0156\7e\2\2\u0156\u0157\7v\2\2"+
		"\u0157\u0158\7g\2\2\u0158\u0159\7f\2\2\u0159*\3\2\2\2\u015a\u015b\7r\2"+
		"\2\u015b\u015c\7t\2\2\u015c\u015d\7k\2\2\u015d\u015e\7x\2\2\u015e\u015f"+
		"\7c\2\2\u015f\u0160\7v\2\2\u0160\u0161\7g\2\2\u0161,\3\2\2\2\u0162\u0163"+
		"\7k\2\2\u0163\u0164\7p\2\2\u0164\u0165\7v\2\2\u0165\u0166\7g\2\2\u0166"+
		"\u0167\7t\2\2\u0167\u0168\7p\2\2\u0168\u0169\7c\2\2\u0169\u016a\7n\2\2"+
		"\u016a.\3\2\2\2\u016b\u016c\7h\2\2\u016c\u016d\7t\2\2\u016d\u016e\7k\2"+
		"\2\u016e\u016f\7g\2\2\u016f\u0170\7p\2\2\u0170\u0171\7f\2\2\u0171\u0172"+
		"\7n\2\2\u0172\u0173\7{\2\2\u0173\60\3\2\2\2\u0174\u0175\7h\2\2\u0175\u0176"+
		"\7t\2\2\u0176\u0177\7k\2\2\u0177\u0178\7g\2\2\u0178\u0179\7p\2\2\u0179"+
		"\u017a\7f\2\2\u017a\62\3\2\2\2\u017b\u017c\7k\2\2\u017c\u017d\7h\2\2\u017d"+
		"\64\3\2\2\2\u017e\u017f\7g\2\2\u017f\u0180\7n\2\2\u0180\u0181\7u\2\2\u0181"+
		"\u0182\7g\2\2\u0182\66\3\2\2\2\u0183\u0184\7g\2\2\u0184\u0185\7n\2\2\u0185"+
		"\u0186\7k\2\2\u0186\u0187\7h\2\2\u01878\3\2\2\2\u0188\u0189\7u\2\2\u0189"+
		"\u018a\7y\2\2\u018a\u018b\7k\2\2\u018b\u018c\7v\2\2\u018c\u018d\7e\2\2"+
		"\u018d\u018e\7j\2\2\u018e:\3\2\2\2\u018f\u0190\7h\2\2\u0190\u0191\7q\2"+
		"\2\u0191\u0192\7t\2\2\u0192<\3\2\2\2\u0193\u0194\7h\2\2\u0194\u0195\7"+
		"q\2\2\u0195\u0196\7t\2\2\u0196\u0197\7g\2\2\u0197\u0198\7c\2\2\u0198\u0199"+
		"\7e\2\2\u0199\u019a\7j\2\2\u019a>\3\2\2\2\u019b\u019c\7y\2\2\u019c\u019d"+
		"\7j\2\2\u019d\u019e\7k\2\2\u019e\u019f\7n\2\2\u019f\u01a0\7g\2\2\u01a0"+
		"@\3\2\2\2\u01a1\u01a2\7f\2\2\u01a2\u01a3\7q\2\2\u01a3B\3\2\2\2\u01a4\u01a5"+
		"\7d\2\2\u01a5\u01a6\7t\2\2\u01a6\u01a7\7g\2\2\u01a7\u01a8\7c\2\2\u01a8"+
		"\u01a9\7m\2\2\u01a9D\3\2\2\2\u01aa\u01ab\7t\2\2\u01ab\u01ac\7g\2\2\u01ac"+
		"\u01ad\7v\2\2\u01ad\u01ae\7w\2\2\u01ae\u01af\7t\2\2\u01af\u01b0\7p\2\2"+
		"\u01b0F\3\2\2\2\u01b1\u01b2\7p\2\2\u01b2\u01b3\7w\2\2\u01b3\u01b4\7o\2"+
		"\2\u01b4H\3\2\2\2\u01b5\u01b6\7d\2\2\u01b6\u01b7\7{\2\2\u01b7\u01b8\7"+
		"v\2\2\u01b8\u01b9\7g\2\2\u01b9J\3\2\2\2\u01ba\u01bb\7u\2\2\u01bb\u01bc"+
		"\7j\2\2\u01bc\u01bd\7q\2\2\u01bd\u01be\7t\2\2\u01be\u01bf\7v\2\2\u01bf"+
		"L\3\2\2\2\u01c0\u01c1\7k\2\2\u01c1\u01c2\7p\2\2\u01c2\u01c3\7v\2\2\u01c3"+
		"N\3\2\2\2\u01c4\u01c5\7n\2\2\u01c5\u01c6\7q\2\2\u01c6\u01c7\7p\2\2\u01c7"+
		"\u01c8\7i\2\2\u01c8P\3\2\2\2\u01c9\u01ca\7h\2\2\u01ca\u01cb\7n\2\2\u01cb"+
		"\u01cc\7q\2\2\u01cc\u01cd\7c\2\2\u01cd\u01ce\7v\2\2\u01ceR\3\2\2\2\u01cf"+
		"\u01d0\7f\2\2\u01d0\u01d1\7q\2\2\u01d1\u01d2\7w\2\2\u01d2\u01d3\7d\2\2"+
		"\u01d3\u01d4\7n\2\2\u01d4\u01d5\7g\2\2\u01d5T\3\2\2\2\u01d6\u01d7\7d\2"+
		"\2\u01d7\u01d8\7q\2\2\u01d8\u01d9\7q\2\2\u01d9\u01da\7n\2\2\u01daV\3\2"+
		"\2\2\u01db\u01dc\7u\2\2\u01dc\u01dd\7v\2\2\u01dd\u01de\7t\2\2\u01de\u01df"+
		"\7k\2\2\u01df\u01e0\7p\2\2\u01e0\u01e1\7i\2\2\u01e1X\3\2\2\2\u01e2\u01e3"+
		"\7e\2\2\u01e3\u01e4\7j\2\2\u01e4\u01e5\7c\2\2\u01e5\u01e6\7t\2\2\u01e6"+
		"Z\3\2\2\2\u01e7\u01e8\7x\2\2\u01e8\u01e9\7c\2\2\u01e9\u01ea\7t\2\2\u01ea"+
		"\\\3\2\2\2\u01eb\u01ec\7.\2\2\u01ec^\3\2\2\2\u01ed\u01ee\7A\2\2\u01ee"+
		"`\3\2\2\2\u01ef\u01f0\7=\2\2\u01f0b\3\2\2\2\u01f1\u01f2\7<\2\2\u01f2d"+
		"\3\2\2\2\u01f3\u01f4\7*\2\2\u01f4f\3\2\2\2\u01f5\u01f6\7+\2\2\u01f6h\3"+
		"\2\2\2\u01f7\u01f8\7]\2\2\u01f8j\3\2\2\2\u01f9\u01fa\7_\2\2\u01fal\3\2"+
		"\2\2\u01fb\u01fc\7}\2\2\u01fcn\3\2\2\2\u01fd\u01fe\7\177\2\2\u01fep\3"+
		"\2\2\2\u01ff\u0200\7>\2\2\u0200\u0201\7>\2\2\u0201r\3\2\2\2\u0202\u0203"+
		"\7@\2\2\u0203\u0204\7@\2\2\u0204t\3\2\2\2\u0205\u0206\7-\2\2\u0206v\3"+
		"\2\2\2\u0207\u0208\7-\2\2\u0208\u0209\7-\2\2\u0209x\3\2\2\2\u020a\u020b"+
		"\7/\2\2\u020bz\3\2\2\2\u020c\u020d\7/\2\2\u020d\u020e\7/\2\2\u020e|\3"+
		"\2\2\2\u020f\u0210\7,\2\2\u0210~\3\2\2\2\u0211\u0212\7\61\2\2\u0212\u0080"+
		"\3\2\2\2\u0213\u0214\7\'\2\2\u0214\u0082\3\2\2\2\u0215\u0216\7(\2\2\u0216"+
		"\u0084\3\2\2\2\u0217\u0218\7(\2\2\u0218\u0219\7(\2\2\u0219\u0086\3\2\2"+
		"\2\u021a\u021b\7~\2\2\u021b\u0088\3\2\2\2\u021c\u021d\7~\2\2\u021d\u021e"+
		"\7~\2\2\u021e\u008a\3\2\2\2\u021f\u0220\7`\2\2\u0220\u008c\3\2\2\2\u0221"+
		"\u0222\7#\2\2\u0222\u008e\3\2\2\2\u0223\u0224\7\u0080\2\2\u0224\u0090"+
		"\3\2\2\2\u0225\u0226\7?\2\2\u0226\u0092\3\2\2\2\u0227\u0228\7,\2\2\u0228"+
		"\u0229\7?\2\2\u0229\u0094\3\2\2\2\u022a\u022b\7\61\2\2\u022b\u022c\7?"+
		"\2\2\u022c\u0096\3\2\2\2\u022d\u022e\7\'\2\2\u022e\u022f\7?\2\2\u022f"+
		"\u0098\3\2\2\2\u0230\u0231\7-\2\2\u0231\u0232\7?\2\2\u0232\u009a\3\2\2"+
		"\2\u0233\u0234\7/\2\2\u0234\u0235\7?\2\2\u0235\u009c\3\2\2\2\u0236\u0237"+
		"\7>\2\2\u0237\u0238\7>\2\2\u0238\u0239\7?\2\2\u0239\u009e\3\2\2\2\u023a"+
		"\u023b\7@\2\2\u023b\u023c\7@\2\2\u023c\u023d\7?\2\2\u023d\u00a0\3\2\2"+
		"\2\u023e\u023f\7(\2\2\u023f\u0240\7?\2\2\u0240\u00a2\3\2\2\2\u0241\u0242"+
		"\7`\2\2\u0242\u0243\7?\2\2\u0243\u00a4\3\2\2\2\u0244\u0245\7~\2\2\u0245"+
		"\u0246\7?\2\2\u0246\u00a6\3\2\2\2\u0247\u0248\7>\2\2\u0248\u00a8\3\2\2"+
		"\2\u0249\u024a\7>\2\2\u024a\u024b\7?\2\2\u024b\u00aa\3\2\2\2\u024c\u024d"+
		"\7@\2\2\u024d\u00ac\3\2\2\2\u024e\u024f\7@\2\2\u024f\u0250\7?\2\2\u0250"+
		"\u00ae\3\2\2\2\u0251\u0252\7?\2\2\u0252\u0253\7?\2\2\u0253\u00b0\3\2\2"+
		"\2\u0254\u0255\7#\2\2\u0255\u0256\7?\2\2\u0256\u00b2\3\2\2\2\u0257\u0258"+
		"\7/\2\2\u0258\u0259\7@\2\2\u0259\u00b4\3\2\2\2\u025a\u025b\7\60\2\2\u025b"+
		"\u00b6\3\2\2\2\u025c\u025d\7\60\2\2\u025d\u025e\7\60\2\2\u025e\u025f\7"+
		"\60\2\2\u025f\u00b8\3\2\2\2\u0260\u0261\7&\2\2\u0261\u00ba\3\2\2\2\u0262"+
		"\u0266\7\63\2\2\u0263\u0265\t\4\2\2\u0264\u0263\3\2\2\2\u0265\u0268\3"+
		"\2\2\2\u0266\u0264\3\2\2\2\u0266\u0267\3\2\2\2\u0267\u0269\3\2\2\2\u0268"+
		"\u0266\3\2\2\2\u0269\u026a\7d\2\2\u026a\u00bc\3\2\2\2\u026b\u026c\7\62"+
		"\2\2\u026c\u0270\t\5\2\2\u026d\u026f\t\6\2\2\u026e\u026d\3\2\2\2\u026f"+
		"\u0272\3\2\2\2\u0270\u026e\3\2\2\2\u0270\u0271\3\2\2\2\u0271\u00be\3\2"+
		"\2\2\u0272\u0270\3\2\2\2\u0273\u0277\t\7\2\2\u0274\u0276\t\b\2\2\u0275"+
		"\u0274\3\2\2\2\u0276\u0279\3\2\2\2\u0277\u0275\3\2\2\2\u0277\u0278\3\2"+
		"\2\2\u0278\u027c\3\2\2\2\u0279\u0277\3\2\2\2\u027a\u027c\7\62\2\2\u027b"+
		"\u0273\3\2\2\2\u027b\u027a\3\2\2\2\u027c\u00c0\3\2\2\2\u027d\u027e\7\62"+
		"\2\2\u027e\u027f\7z\2\2\u027f\u0281\3\2\2\2\u0280\u0282\t\t\2\2\u0281"+
		"\u0280\3\2\2\2\u0282\u0286\3\2\2\2\u0283\u0285\t\n\2\2\u0284\u0283\3\2"+
		"\2\2\u0285\u0288\3\2\2\2\u0286\u0284\3\2\2\2\u0286\u0287\3\2\2\2\u0287"+
		"\u00c2\3\2\2\2\u0288\u0286\3\2\2\2\u0289\u028b\t\13\2\2\u028a\u0289\3"+
		"\2\2\2\u028b\u028f\3\2\2\2\u028c\u028e\t\f\2\2\u028d\u028c\3\2\2\2\u028e"+
		"\u0291\3\2\2\2\u028f\u028d\3\2\2\2\u028f\u0290\3\2\2\2\u0290\u00c4\3\2"+
		"\2\2\u0291\u028f\3\2\2\2\u0292\u0296\7$\2\2\u0293\u0295\13\2\2\2\u0294"+
		"\u0293\3\2\2\2\u0295\u0298\3\2\2\2\u0296\u0297\3\2\2\2\u0296\u0294\3\2"+
		"\2\2\u0297\u0299\3\2\2\2\u0298\u0296\3\2\2\2\u0299\u029a\7$\2\2\u029a"+
		"\u00c6\3\2\2\2\22\2\u00cd\u00d4\u00d9\u00e6\u0266\u0270\u0277\u027b\u0281"+
		"\u0284\u0286\u028a\u028d\u028f\u0296\3\b\2\2";
	public static final ATN _ATN =
		new ATNDeserializer().deserialize(_serializedATN.toCharArray());
	static {
		_decisionToDFA = new DFA[_ATN.getNumberOfDecisions()];
		for (int i = 0; i < _ATN.getNumberOfDecisions(); i++) {
			_decisionToDFA[i] = new DFA(_ATN.getDecisionState(i), i);
		}
	}
}