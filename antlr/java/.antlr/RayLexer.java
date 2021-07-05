// Generated from g:\RayCompiler\antlr\java\Ray.g4 by ANTLR 4.8
import org.antlr.v4.runtime.Lexer;
import org.antlr.v4.runtime.CharStream;
import org.antlr.v4.runtime.Token;
import org.antlr.v4.runtime.TokenStream;
import org.antlr.v4.runtime.*;
import org.antlr.v4.runtime.atn.*;
import org.antlr.v4.runtime.dfa.DFA;
import org.antlr.v4.runtime.misc.*;

@SuppressWarnings({"all", "warnings", "unchecked", "unused", "cast"})
public class RayLexer extends Lexer {
	static { RuntimeMetaData.checkVersion("4.8", RuntimeMetaData.VERSION); }

	protected static final DFA[] _decisionToDFA;
	protected static final PredictionContextCache _sharedContextCache =
		new PredictionContextCache();
	public static final int
		T__0=1, T__1=2, T__2=3, T__3=4, T__4=5, T__5=6, Blanks=7, And=8, Xor=9, 
		Not=10, Or=11, Reverse=12, SetEqual=13, Dot=14, Colon=15, MultiLineComment=16, 
		SingleLineComment=17, BlockLeft=18, BlockRight=19, PairLeft=20, PairRight=21, 
		ListLeft=22, ListRight=23, At=24, Semicolon=25, Comma=26, Less=27, More=28, 
		SingleArrow=29, Arrow=30, Equal=31, NotEqual=32, LessEqual=33, MoreEqual=34, 
		SingleQuotation=35, MultiQuotation=36, Import=37, Export=38, Alias=39, 
		Function=40, Var=41, Const=42, If=43, Else=44, Match=45, For=46, While=47, 
		Return=48, Identifier=49, Plus=50, Minus=51, Multiply=52, Divide=53, SlefPlus=54, 
		SelfMinus=55, Pow=56, Types=57, Integer=58, Float=59, StringLiteral=60;
	public static String[] channelNames = {
		"DEFAULT_TOKEN_CHANNEL", "HIDDEN"
	};

	public static String[] modeNames = {
		"DEFAULT_MODE"
	};

	private static String[] makeRuleNames() {
		return new String[] {
			"T__0", "T__1", "T__2", "T__3", "T__4", "T__5", "Space", "Blanks", "And", 
			"Xor", "Not", "Or", "Reverse", "SetEqual", "Dot", "Colon", "MultiLineComment", 
			"SingleLineComment", "BlockLeft", "BlockRight", "PairLeft", "PairRight", 
			"ListLeft", "ListRight", "At", "Semicolon", "Comma", "Less", "More", 
			"SingleArrow", "Arrow", "Equal", "NotEqual", "LessEqual", "MoreEqual", 
			"SingleQuotation", "MultiQuotation", "Import", "Export", "Alias", "Function", 
			"Var", "Const", "If", "Else", "Match", "For", "While", "Return", "Identifier", 
			"Plus", "Minus", "Multiply", "Divide", "SlefPlus", "SelfMinus", "Pow", 
			"OctalDigit", "BinaryConstant", "OctalConstant", "HexadecimalDigit", 
			"HexQuad", "UniversalCharacterName", "EscapeSequence", "SpecialEscapeSequence", 
			"OctalEscapeSequence", "HexadecimalEscapeSequence", "IntTypes", "FloatTypes", 
			"UIntTypes", "UFloatTypes", "StringTypes", "DecimalConstant", "HexadecimalConstant", 
			"HexadecimalPrefix", "Digit", "NonzeroDigit", "IntegerSuffix", "UnsignedSuffix", 
			"LongSuffix", "LongLongSuffix", "Types", "Integer", "Float", "DChar", 
			"SChar", "StringLiteral"
		};
	}
	public static final String[] ruleNames = makeRuleNames();

	private static String[] makeLiteralNames() {
		return new String[] {
			null, "'fn'", "'function'", "'type'", "'case'", "'&&'", "'||'", null, 
			"'&'", "'^'", "'!'", "'|'", "'~'", "'='", "'.'", "':'", null, null, "'{'", 
			"'}'", "'('", "')'", "'['", "']'", "'@'", "';'", "','", "'<'", "'>'", 
			"'->'", "'=>'", "'=='", "'!='", "'<='", "'>='", "'''", "'\"'", "'get'", 
			"'put'", "'as'", null, "'var'", "'const'", "'if'", "'else'", "'match'", 
			"'for'", "'While'", "'return'", null, "'+'", "'-'", "'*'", "'/'", "'++'", 
			"'--'", "'**'"
		};
	}
	private static final String[] _LITERAL_NAMES = makeLiteralNames();
	private static String[] makeSymbolicNames() {
		return new String[] {
			null, null, null, null, null, null, null, "Blanks", "And", "Xor", "Not", 
			"Or", "Reverse", "SetEqual", "Dot", "Colon", "MultiLineComment", "SingleLineComment", 
			"BlockLeft", "BlockRight", "PairLeft", "PairRight", "ListLeft", "ListRight", 
			"At", "Semicolon", "Comma", "Less", "More", "SingleArrow", "Arrow", "Equal", 
			"NotEqual", "LessEqual", "MoreEqual", "SingleQuotation", "MultiQuotation", 
			"Import", "Export", "Alias", "Function", "Var", "Const", "If", "Else", 
			"Match", "For", "While", "Return", "Identifier", "Plus", "Minus", "Multiply", 
			"Divide", "SlefPlus", "SelfMinus", "Pow", "Types", "Integer", "Float", 
			"StringLiteral"
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


	public RayLexer(CharStream input) {
		super(input);
		_interp = new LexerATNSimulator(this,_ATN,_decisionToDFA,_sharedContextCache);
	}

	@Override
	public String getGrammarFileName() { return "Ray.g4"; }

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
		"\3\u608b\ua72a\u8133\ub9ed\u417c\u3be7\u7786\u5964\2>\u0264\b\1\4\2\t"+
		"\2\4\3\t\3\4\4\t\4\4\5\t\5\4\6\t\6\4\7\t\7\4\b\t\b\4\t\t\t\4\n\t\n\4\13"+
		"\t\13\4\f\t\f\4\r\t\r\4\16\t\16\4\17\t\17\4\20\t\20\4\21\t\21\4\22\t\22"+
		"\4\23\t\23\4\24\t\24\4\25\t\25\4\26\t\26\4\27\t\27\4\30\t\30\4\31\t\31"+
		"\4\32\t\32\4\33\t\33\4\34\t\34\4\35\t\35\4\36\t\36\4\37\t\37\4 \t \4!"+
		"\t!\4\"\t\"\4#\t#\4$\t$\4%\t%\4&\t&\4\'\t\'\4(\t(\4)\t)\4*\t*\4+\t+\4"+
		",\t,\4-\t-\4.\t.\4/\t/\4\60\t\60\4\61\t\61\4\62\t\62\4\63\t\63\4\64\t"+
		"\64\4\65\t\65\4\66\t\66\4\67\t\67\48\t8\49\t9\4:\t:\4;\t;\4<\t<\4=\t="+
		"\4>\t>\4?\t?\4@\t@\4A\tA\4B\tB\4C\tC\4D\tD\4E\tE\4F\tF\4G\tG\4H\tH\4I"+
		"\tI\4J\tJ\4K\tK\4L\tL\4M\tM\4N\tN\4O\tO\4P\tP\4Q\tQ\4R\tR\4S\tS\4T\tT"+
		"\4U\tU\4V\tV\4W\tW\4X\tX\3\2\3\2\3\2\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3"+
		"\3\3\4\3\4\3\4\3\4\3\4\3\5\3\5\3\5\3\5\3\5\3\6\3\6\3\6\3\7\3\7\3\7\3\b"+
		"\3\b\3\t\3\t\5\t\u00d2\n\t\3\t\3\t\3\n\3\n\3\13\3\13\3\f\3\f\3\r\3\r\3"+
		"\16\3\16\3\17\3\17\3\20\3\20\3\21\3\21\3\22\3\22\3\22\3\22\7\22\u00ea"+
		"\n\22\f\22\16\22\u00ed\13\22\3\22\3\22\3\22\3\22\3\22\3\23\3\23\3\23\3"+
		"\23\7\23\u00f8\n\23\f\23\16\23\u00fb\13\23\3\23\3\23\3\23\3\23\3\24\3"+
		"\24\3\25\3\25\3\26\3\26\3\27\3\27\3\30\3\30\3\31\3\31\3\32\3\32\3\33\3"+
		"\33\3\34\3\34\3\35\3\35\3\36\3\36\3\37\3\37\3\37\3 \3 \3 \3!\3!\3!\3\""+
		"\3\"\3\"\3#\3#\3#\3$\3$\3$\3%\3%\3&\3&\3\'\3\'\3\'\3\'\3(\3(\3(\3(\3)"+
		"\3)\3)\3*\3*\3*\3*\3*\3*\3*\3*\3*\3*\5*\u0142\n*\3+\3+\3+\3+\3,\3,\3,"+
		"\3,\3,\3,\3-\3-\3-\3.\3.\3.\3.\3.\3/\3/\3/\3/\3/\3/\3\60\3\60\3\60\3\60"+
		"\3\61\3\61\3\61\3\61\3\61\3\61\3\62\3\62\3\62\3\62\3\62\3\62\3\62\3\63"+
		"\3\63\7\63\u016f\n\63\f\63\16\63\u0172\13\63\3\64\3\64\3\65\3\65\3\66"+
		"\3\66\3\67\3\67\38\38\38\39\39\39\3:\3:\3:\3;\3;\3<\3<\3<\6<\u018a\n<"+
		"\r<\16<\u018b\3=\3=\7=\u0190\n=\f=\16=\u0193\13=\3>\3>\3?\3?\3?\3?\3?"+
		"\3@\3@\3@\3@\3@\3@\3@\3@\3@\3@\5@\u01a6\n@\3A\3A\3A\3A\5A\u01ac\nA\3B"+
		"\3B\3B\3C\3C\3C\5C\u01b4\nC\3C\5C\u01b7\nC\3D\3D\3D\3D\6D\u01bd\nD\rD"+
		"\16D\u01be\3E\3E\3E\3E\3E\3E\3E\3E\3E\3E\3E\3E\3E\3E\3E\3E\3E\3E\3E\5"+
		"E\u01d4\nE\3F\3F\3F\3F\3F\3F\3F\3F\3F\3F\3F\5F\u01e1\nF\3G\3G\3G\3H\3"+
		"H\3H\3I\3I\3I\3I\3I\3I\3I\3J\3J\5J\u01f2\nJ\3J\3J\7J\u01f6\nJ\fJ\16J\u01f9"+
		"\13J\3K\3K\6K\u01fd\nK\rK\16K\u01fe\3L\3L\3L\3M\3M\3N\3N\3O\3O\5O\u020a"+
		"\nO\3O\3O\3O\3O\3O\5O\u0211\nO\3O\3O\5O\u0215\nO\5O\u0217\nO\3P\3P\3Q"+
		"\3Q\3R\3R\3R\3R\5R\u0221\nR\3S\3S\3S\3S\5S\u0227\nS\3S\5S\u022a\nS\3S"+
		"\3S\5S\u022e\nS\3T\3T\3T\5T\u0233\nT\3T\5T\u0236\nT\3U\3U\3U\6U\u023b"+
		"\nU\rU\16U\u023c\3V\3V\3V\3V\3V\3V\3V\5V\u0246\nV\3W\3W\3W\3W\3W\3W\3"+
		"W\5W\u024f\nW\3X\3X\6X\u0253\nX\rX\16X\u0254\5X\u0257\nX\3X\3X\3X\6X\u025c"+
		"\nX\rX\16X\u025d\5X\u0260\nX\3X\5X\u0263\nX\4\u00eb\u00f9\2Y\3\3\5\4\7"+
		"\5\t\6\13\7\r\b\17\2\21\t\23\n\25\13\27\f\31\r\33\16\35\17\37\20!\21#"+
		"\22%\23\'\24)\25+\26-\27/\30\61\31\63\32\65\33\67\349\35;\36=\37? A!C"+
		"\"E#G$I%K&M\'O(Q)S*U+W,Y-[.]/_\60a\61c\62e\63g\64i\65k\66m\67o8q9s:u\2"+
		"w\2y\2{\2}\2\177\2\u0081\2\u0083\2\u0085\2\u0087\2\u0089\2\u008b\2\u008d"+
		"\2\u008f\2\u0091\2\u0093\2\u0095\2\u0097\2\u0099\2\u009b\2\u009d\2\u009f"+
		"\2\u00a1\2\u00a3\2\u00a5;\u00a7<\u00a9=\u00ab\2\u00ad\2\u00af>\3\2\22"+
		"\4\2\n\f\17\17\3\2\f\f\6\2&&C\\aac|\7\2&&\62;C\\aac|\3\2\629\4\2DDdd\3"+
		"\2\62\63\5\2\62;CHch\f\2$$))AA^^cdhhppttvvxx\4\2ZZzz\3\2\62;\3\2\63;\4"+
		"\2WWww\4\2NNnn\4\2$$^^\4\2))^^\2\u0279\2\3\3\2\2\2\2\5\3\2\2\2\2\7\3\2"+
		"\2\2\2\t\3\2\2\2\2\13\3\2\2\2\2\r\3\2\2\2\2\21\3\2\2\2\2\23\3\2\2\2\2"+
		"\25\3\2\2\2\2\27\3\2\2\2\2\31\3\2\2\2\2\33\3\2\2\2\2\35\3\2\2\2\2\37\3"+
		"\2\2\2\2!\3\2\2\2\2#\3\2\2\2\2%\3\2\2\2\2\'\3\2\2\2\2)\3\2\2\2\2+\3\2"+
		"\2\2\2-\3\2\2\2\2/\3\2\2\2\2\61\3\2\2\2\2\63\3\2\2\2\2\65\3\2\2\2\2\67"+
		"\3\2\2\2\29\3\2\2\2\2;\3\2\2\2\2=\3\2\2\2\2?\3\2\2\2\2A\3\2\2\2\2C\3\2"+
		"\2\2\2E\3\2\2\2\2G\3\2\2\2\2I\3\2\2\2\2K\3\2\2\2\2M\3\2\2\2\2O\3\2\2\2"+
		"\2Q\3\2\2\2\2S\3\2\2\2\2U\3\2\2\2\2W\3\2\2\2\2Y\3\2\2\2\2[\3\2\2\2\2]"+
		"\3\2\2\2\2_\3\2\2\2\2a\3\2\2\2\2c\3\2\2\2\2e\3\2\2\2\2g\3\2\2\2\2i\3\2"+
		"\2\2\2k\3\2\2\2\2m\3\2\2\2\2o\3\2\2\2\2q\3\2\2\2\2s\3\2\2\2\2\u00a5\3"+
		"\2\2\2\2\u00a7\3\2\2\2\2\u00a9\3\2\2\2\2\u00af\3\2\2\2\3\u00b1\3\2\2\2"+
		"\5\u00b4\3\2\2\2\7\u00bd\3\2\2\2\t\u00c2\3\2\2\2\13\u00c7\3\2\2\2\r\u00ca"+
		"\3\2\2\2\17\u00cd\3\2\2\2\21\u00d1\3\2\2\2\23\u00d5\3\2\2\2\25\u00d7\3"+
		"\2\2\2\27\u00d9\3\2\2\2\31\u00db\3\2\2\2\33\u00dd\3\2\2\2\35\u00df\3\2"+
		"\2\2\37\u00e1\3\2\2\2!\u00e3\3\2\2\2#\u00e5\3\2\2\2%\u00f3\3\2\2\2\'\u0100"+
		"\3\2\2\2)\u0102\3\2\2\2+\u0104\3\2\2\2-\u0106\3\2\2\2/\u0108\3\2\2\2\61"+
		"\u010a\3\2\2\2\63\u010c\3\2\2\2\65\u010e\3\2\2\2\67\u0110\3\2\2\29\u0112"+
		"\3\2\2\2;\u0114\3\2\2\2=\u0116\3\2\2\2?\u0119\3\2\2\2A\u011c\3\2\2\2C"+
		"\u011f\3\2\2\2E\u0122\3\2\2\2G\u0125\3\2\2\2I\u0128\3\2\2\2K\u012a\3\2"+
		"\2\2M\u012c\3\2\2\2O\u0130\3\2\2\2Q\u0134\3\2\2\2S\u0141\3\2\2\2U\u0143"+
		"\3\2\2\2W\u0147\3\2\2\2Y\u014d\3\2\2\2[\u0150\3\2\2\2]\u0155\3\2\2\2_"+
		"\u015b\3\2\2\2a\u015f\3\2\2\2c\u0165\3\2\2\2e\u016c\3\2\2\2g\u0173\3\2"+
		"\2\2i\u0175\3\2\2\2k\u0177\3\2\2\2m\u0179\3\2\2\2o\u017b\3\2\2\2q\u017e"+
		"\3\2\2\2s\u0181\3\2\2\2u\u0184\3\2\2\2w\u0186\3\2\2\2y\u018d\3\2\2\2{"+
		"\u0194\3\2\2\2}\u0196\3\2\2\2\177\u01a5\3\2\2\2\u0081\u01ab\3\2\2\2\u0083"+
		"\u01ad\3\2\2\2\u0085\u01b0\3\2\2\2\u0087\u01b8\3\2\2\2\u0089\u01d3\3\2"+
		"\2\2\u008b\u01e0\3\2\2\2\u008d\u01e2\3\2\2\2\u008f\u01e5\3\2\2\2\u0091"+
		"\u01e8\3\2\2\2\u0093\u01ef\3\2\2\2\u0095\u01fa\3\2\2\2\u0097\u0200\3\2"+
		"\2\2\u0099\u0203\3\2\2\2\u009b\u0205\3\2\2\2\u009d\u0216\3\2\2\2\u009f"+
		"\u0218\3\2\2\2\u00a1\u021a\3\2\2\2\u00a3\u0220\3\2\2\2\u00a5\u0226\3\2"+
		"\2\2\u00a7\u0232\3\2\2\2\u00a9\u0237\3\2\2\2\u00ab\u0245\3\2\2\2\u00ad"+
		"\u024e\3\2\2\2\u00af\u0262\3\2\2\2\u00b1\u00b2\7h\2\2\u00b2\u00b3\7p\2"+
		"\2\u00b3\4\3\2\2\2\u00b4\u00b5\7h\2\2\u00b5\u00b6\7w\2\2\u00b6\u00b7\7"+
		"p\2\2\u00b7\u00b8\7e\2\2\u00b8\u00b9\7v\2\2\u00b9\u00ba\7k\2\2\u00ba\u00bb"+
		"\7q\2\2\u00bb\u00bc\7p\2\2\u00bc\6\3\2\2\2\u00bd\u00be\7v\2\2\u00be\u00bf"+
		"\7{\2\2\u00bf\u00c0\7r\2\2\u00c0\u00c1\7g\2\2\u00c1\b\3\2\2\2\u00c2\u00c3"+
		"\7e\2\2\u00c3\u00c4\7c\2\2\u00c4\u00c5\7u\2\2\u00c5\u00c6\7g\2\2\u00c6"+
		"\n\3\2\2\2\u00c7\u00c8\7(\2\2\u00c8\u00c9\7(\2\2\u00c9\f\3\2\2\2\u00ca"+
		"\u00cb\7~\2\2\u00cb\u00cc\7~\2\2\u00cc\16\3\2\2\2\u00cd\u00ce\7\"\2\2"+
		"\u00ce\20\3\2\2\2\u00cf\u00d2\t\2\2\2\u00d0\u00d2\5\17\b\2\u00d1\u00cf"+
		"\3\2\2\2\u00d1\u00d0\3\2\2\2\u00d2\u00d3\3\2\2\2\u00d3\u00d4\b\t\2\2\u00d4"+
		"\22\3\2\2\2\u00d5\u00d6\7(\2\2\u00d6\24\3\2\2\2\u00d7\u00d8\7`\2\2\u00d8"+
		"\26\3\2\2\2\u00d9\u00da\7#\2\2\u00da\30\3\2\2\2\u00db\u00dc\7~\2\2\u00dc"+
		"\32\3\2\2\2\u00dd\u00de\7\u0080\2\2\u00de\34\3\2\2\2\u00df\u00e0\7?\2"+
		"\2\u00e0\36\3\2\2\2\u00e1\u00e2\7\60\2\2\u00e2 \3\2\2\2\u00e3\u00e4\7"+
		"<\2\2\u00e4\"\3\2\2\2\u00e5\u00e6\7\61\2\2\u00e6\u00e7\7,\2\2\u00e7\u00eb"+
		"\3\2\2\2\u00e8\u00ea\13\2\2\2\u00e9\u00e8\3\2\2\2\u00ea\u00ed\3\2\2\2"+
		"\u00eb\u00ec\3\2\2\2\u00eb\u00e9\3\2\2\2\u00ec\u00ee\3\2\2\2\u00ed\u00eb"+
		"\3\2\2\2\u00ee\u00ef\7,\2\2\u00ef\u00f0\7\61\2\2\u00f0\u00f1\3\2\2\2\u00f1"+
		"\u00f2\b\22\2\2\u00f2$\3\2\2\2\u00f3\u00f4\7\61\2\2\u00f4\u00f5\7\61\2"+
		"\2\u00f5\u00f9\3\2\2\2\u00f6\u00f8\13\2\2\2\u00f7\u00f6\3\2\2\2\u00f8"+
		"\u00fb\3\2\2\2\u00f9\u00fa\3\2\2\2\u00f9\u00f7\3\2\2\2\u00fa\u00fc\3\2"+
		"\2\2\u00fb\u00f9\3\2\2\2\u00fc\u00fd\t\3\2\2\u00fd\u00fe\3\2\2\2\u00fe"+
		"\u00ff\b\23\2\2\u00ff&\3\2\2\2\u0100\u0101\7}\2\2\u0101(\3\2\2\2\u0102"+
		"\u0103\7\177\2\2\u0103*\3\2\2\2\u0104\u0105\7*\2\2\u0105,\3\2\2\2\u0106"+
		"\u0107\7+\2\2\u0107.\3\2\2\2\u0108\u0109\7]\2\2\u0109\60\3\2\2\2\u010a"+
		"\u010b\7_\2\2\u010b\62\3\2\2\2\u010c\u010d\7B\2\2\u010d\64\3\2\2\2\u010e"+
		"\u010f\7=\2\2\u010f\66\3\2\2\2\u0110\u0111\7.\2\2\u01118\3\2\2\2\u0112"+
		"\u0113\7>\2\2\u0113:\3\2\2\2\u0114\u0115\7@\2\2\u0115<\3\2\2\2\u0116\u0117"+
		"\7/\2\2\u0117\u0118\7@\2\2\u0118>\3\2\2\2\u0119\u011a\7?\2\2\u011a\u011b"+
		"\7@\2\2\u011b@\3\2\2\2\u011c\u011d\7?\2\2\u011d\u011e\7?\2\2\u011eB\3"+
		"\2\2\2\u011f\u0120\7#\2\2\u0120\u0121\7?\2\2\u0121D\3\2\2\2\u0122\u0123"+
		"\7>\2\2\u0123\u0124\7?\2\2\u0124F\3\2\2\2\u0125\u0126\7@\2\2\u0126\u0127"+
		"\7?\2\2\u0127H\3\2\2\2\u0128\u0129\7)\2\2\u0129J\3\2\2\2\u012a\u012b\7"+
		"$\2\2\u012bL\3\2\2\2\u012c\u012d\7i\2\2\u012d\u012e\7g\2\2\u012e\u012f"+
		"\7v\2\2\u012fN\3\2\2\2\u0130\u0131\7r\2\2\u0131\u0132\7w\2\2\u0132\u0133"+
		"\7v\2\2\u0133P\3\2\2\2\u0134\u0135\7c\2\2\u0135\u0136\7u\2\2\u0136R\3"+
		"\2\2\2\u0137\u0138\7h\2\2\u0138\u0139\7w\2\2\u0139\u013a\7p\2\2\u013a"+
		"\u013b\7e\2\2\u013b\u013c\7v\2\2\u013c\u013d\7k\2\2\u013d\u013e\7q\2\2"+
		"\u013e\u0142\7p\2\2\u013f\u0140\7h\2\2\u0140\u0142\7p\2\2\u0141\u0137"+
		"\3\2\2\2\u0141\u013f\3\2\2\2\u0142T\3\2\2\2\u0143\u0144\7x\2\2\u0144\u0145"+
		"\7c\2\2\u0145\u0146\7t\2\2\u0146V\3\2\2\2\u0147\u0148\7e\2\2\u0148\u0149"+
		"\7q\2\2\u0149\u014a\7p\2\2\u014a\u014b\7u\2\2\u014b\u014c\7v\2\2\u014c"+
		"X\3\2\2\2\u014d\u014e\7k\2\2\u014e\u014f\7h\2\2\u014fZ\3\2\2\2\u0150\u0151"+
		"\7g\2\2\u0151\u0152\7n\2\2\u0152\u0153\7u\2\2\u0153\u0154\7g\2\2\u0154"+
		"\\\3\2\2\2\u0155\u0156\7o\2\2\u0156\u0157\7c\2\2\u0157\u0158\7v\2\2\u0158"+
		"\u0159\7e\2\2\u0159\u015a\7j\2\2\u015a^\3\2\2\2\u015b\u015c\7h\2\2\u015c"+
		"\u015d\7q\2\2\u015d\u015e\7t\2\2\u015e`\3\2\2\2\u015f\u0160\7Y\2\2\u0160"+
		"\u0161\7j\2\2\u0161\u0162\7k\2\2\u0162\u0163\7n\2\2\u0163\u0164\7g\2\2"+
		"\u0164b\3\2\2\2\u0165\u0166\7t\2\2\u0166\u0167\7g\2\2\u0167\u0168\7v\2"+
		"\2\u0168\u0169\7w\2\2\u0169\u016a\7t\2\2\u016a\u016b\7p\2\2\u016bd\3\2"+
		"\2\2\u016c\u0170\t\4\2\2\u016d\u016f\t\5\2\2\u016e\u016d\3\2\2\2\u016f"+
		"\u0172\3\2\2\2\u0170\u016e\3\2\2\2\u0170\u0171\3\2\2\2\u0171f\3\2\2\2"+
		"\u0172\u0170\3\2\2\2\u0173\u0174\7-\2\2\u0174h\3\2\2\2\u0175\u0176\7/"+
		"\2\2\u0176j\3\2\2\2\u0177\u0178\7,\2\2\u0178l\3\2\2\2\u0179\u017a\7\61"+
		"\2\2\u017an\3\2\2\2\u017b\u017c\7-\2\2\u017c\u017d\7-\2\2\u017dp\3\2\2"+
		"\2\u017e\u017f\7/\2\2\u017f\u0180\7/\2\2\u0180r\3\2\2\2\u0181\u0182\7"+
		",\2\2\u0182\u0183\7,\2\2\u0183t\3\2\2\2\u0184\u0185\t\6\2\2\u0185v\3\2"+
		"\2\2\u0186\u0187\7\62\2\2\u0187\u0189\t\7\2\2\u0188\u018a\t\b\2\2\u0189"+
		"\u0188\3\2\2\2\u018a\u018b\3\2\2\2\u018b\u0189\3\2\2\2\u018b\u018c\3\2"+
		"\2\2\u018cx\3\2\2\2\u018d\u0191\7\62\2\2\u018e\u0190\5u;\2\u018f\u018e"+
		"\3\2\2\2\u0190\u0193\3\2\2\2\u0191\u018f\3\2\2\2\u0191\u0192\3\2\2\2\u0192"+
		"z\3\2\2\2\u0193\u0191\3\2\2\2\u0194\u0195\t\t\2\2\u0195|\3\2\2\2\u0196"+
		"\u0197\5{>\2\u0197\u0198\5{>\2\u0198\u0199\5{>\2\u0199\u019a\5{>\2\u019a"+
		"~\3\2\2\2\u019b\u019c\7^\2\2\u019c\u019d\7w\2\2\u019d\u019e\3\2\2\2\u019e"+
		"\u01a6\5}?\2\u019f\u01a0\7^\2\2\u01a0\u01a1\7W\2\2\u01a1\u01a2\3\2\2\2"+
		"\u01a2\u01a3\5}?\2\u01a3\u01a4\5}?\2\u01a4\u01a6\3\2\2\2\u01a5\u019b\3"+
		"\2\2\2\u01a5\u019f\3\2\2\2\u01a6\u0080\3\2\2\2\u01a7\u01ac\5\u0083B\2"+
		"\u01a8\u01ac\5\u0085C\2\u01a9\u01ac\5\u0087D\2\u01aa\u01ac\5\177@\2\u01ab"+
		"\u01a7\3\2\2\2\u01ab\u01a8\3\2\2\2\u01ab\u01a9\3\2\2\2\u01ab\u01aa\3\2"+
		"\2\2\u01ac\u0082\3\2\2\2\u01ad\u01ae\7^\2\2\u01ae\u01af\t\n\2\2\u01af"+
		"\u0084\3\2\2\2\u01b0\u01b1\7^\2\2\u01b1\u01b3\5u;\2\u01b2\u01b4\5u;\2"+
		"\u01b3\u01b2\3\2\2\2\u01b3\u01b4\3\2\2\2\u01b4\u01b6\3\2\2\2\u01b5\u01b7"+
		"\5u;\2\u01b6\u01b5\3\2\2\2\u01b6\u01b7\3\2\2\2\u01b7\u0086\3\2\2\2\u01b8"+
		"\u01b9\7^\2\2\u01b9\u01ba\7z\2\2\u01ba\u01bc\3\2\2\2\u01bb\u01bd\5{>\2"+
		"\u01bc\u01bb\3\2\2\2\u01bd\u01be\3\2\2\2\u01be\u01bc\3\2\2\2\u01be\u01bf"+
		"\3\2\2\2\u01bf\u0088\3\2\2\2\u01c0\u01c1\7k\2\2\u01c1\u01c2\7p\2\2\u01c2"+
		"\u01c3\7v\2\2\u01c3\u01d4\7:\2\2\u01c4\u01c5\7k\2\2\u01c5\u01c6\7p\2\2"+
		"\u01c6\u01c7\7v\2\2\u01c7\u01c8\7\63\2\2\u01c8\u01d4\78\2\2\u01c9\u01ca"+
		"\7k\2\2\u01ca\u01cb\7p\2\2\u01cb\u01cc\7v\2\2\u01cc\u01cd\7\65\2\2\u01cd"+
		"\u01d4\7\64\2\2\u01ce\u01cf\7k\2\2\u01cf\u01d0\7p\2\2\u01d0\u01d1\7v\2"+
		"\2\u01d1\u01d2\78\2\2\u01d2\u01d4\7\66\2\2\u01d3\u01c0\3\2\2\2\u01d3\u01c4"+
		"\3\2\2\2\u01d3\u01c9\3\2\2\2\u01d3\u01ce\3\2\2\2\u01d4\u008a\3\2\2\2\u01d5"+
		"\u01d6\7h\2\2\u01d6\u01d7\7n\2\2\u01d7\u01d8\7q\2\2\u01d8\u01d9\7c\2\2"+
		"\u01d9\u01e1\7v\2\2\u01da\u01db\7f\2\2\u01db\u01dc\7q\2\2\u01dc\u01dd"+
		"\7w\2\2\u01dd\u01de\7d\2\2\u01de\u01df\7n\2\2\u01df\u01e1\7g\2\2\u01e0"+
		"\u01d5\3\2\2\2\u01e0\u01da\3\2\2\2\u01e1\u008c\3\2\2\2\u01e2\u01e3\7w"+
		"\2\2\u01e3\u01e4\5\u0089E\2\u01e4\u008e\3\2\2\2\u01e5\u01e6\7w\2\2\u01e6"+
		"\u01e7\5\u008bF\2\u01e7\u0090\3\2\2\2\u01e8\u01e9\7u\2\2\u01e9\u01ea\7"+
		"v\2\2\u01ea\u01eb\7t\2\2\u01eb\u01ec\7k\2\2\u01ec\u01ed\7p\2\2\u01ed\u01ee"+
		"\7i\2\2\u01ee\u0092\3\2\2\2\u01ef\u01f1\5\u009bN\2\u01f0\u01f2\7a\2\2"+
		"\u01f1\u01f0\3\2\2\2\u01f1\u01f2\3\2\2\2\u01f2\u01f7\3\2\2\2\u01f3\u01f6"+
		"\5\u0099M\2\u01f4\u01f6\7a\2\2\u01f5\u01f3\3\2\2\2\u01f5\u01f4\3\2\2\2"+
		"\u01f6\u01f9\3\2\2\2\u01f7\u01f5\3\2\2\2\u01f7\u01f8\3\2\2\2\u01f8\u0094"+
		"\3\2\2\2\u01f9\u01f7\3\2\2\2\u01fa\u01fc\5\u0097L\2\u01fb\u01fd\5{>\2"+
		"\u01fc\u01fb\3\2\2\2\u01fd\u01fe\3\2\2\2\u01fe\u01fc\3\2\2\2\u01fe\u01ff"+
		"\3\2\2\2\u01ff\u0096\3\2\2\2\u0200\u0201\7\62\2\2\u0201\u0202\t\13\2\2"+
		"\u0202\u0098\3\2\2\2\u0203\u0204\t\f\2\2\u0204\u009a\3\2\2\2\u0205\u0206"+
		"\t\r\2\2\u0206\u009c\3\2\2\2\u0207\u0209\5\u009fP\2\u0208\u020a\5\u00a1"+
		"Q\2\u0209\u0208\3\2\2\2\u0209\u020a\3\2\2\2\u020a\u0217\3\2\2\2\u020b"+
		"\u020c\5\u009fP\2\u020c\u020d\5\u00a3R\2\u020d\u0217\3\2\2\2\u020e\u0210"+
		"\5\u00a1Q\2\u020f\u0211\5\u009fP\2\u0210\u020f\3\2\2\2\u0210\u0211\3\2"+
		"\2\2\u0211\u0217\3\2\2\2\u0212\u0214\5\u00a3R\2\u0213\u0215\5\u009fP\2"+
		"\u0214\u0213\3\2\2\2\u0214\u0215\3\2\2\2\u0215\u0217\3\2\2\2\u0216\u0207"+
		"\3\2\2\2\u0216\u020b\3\2\2\2\u0216\u020e\3\2\2\2\u0216\u0212\3\2\2\2\u0217"+
		"\u009e\3\2\2\2\u0218\u0219\t\16\2\2\u0219\u00a0\3\2\2\2\u021a\u021b\t"+
		"\17\2\2\u021b\u00a2\3\2\2\2\u021c\u021d\7n\2\2\u021d\u0221\7n\2\2\u021e"+
		"\u021f\7N\2\2\u021f\u0221\7N\2\2\u0220\u021c\3\2\2\2\u0220\u021e\3\2\2"+
		"\2\u0221\u00a4\3\2\2\2\u0222\u0227\5\u0089E\2\u0223\u0227\5\u008bF\2\u0224"+
		"\u0227\5\u008dG\2\u0225\u0227\5\u0091I\2\u0226\u0222\3\2\2\2\u0226\u0223"+
		"\3\2\2\2\u0226\u0224\3\2\2\2\u0226\u0225\3\2\2\2\u0227\u022d\3\2\2\2\u0228"+
		"\u022a\7\"\2\2\u0229\u0228\3\2\2\2\u0229\u022a\3\2\2\2\u022a\u022b\3\2"+
		"\2\2\u022b\u022c\7]\2\2\u022c\u022e\7_\2\2\u022d\u0229\3\2\2\2\u022d\u022e"+
		"\3\2\2\2\u022e\u00a6\3\2\2\2\u022f\u0233\5w<\2\u0230\u0233\5y=\2\u0231"+
		"\u0233\5\u0093J\2\u0232\u022f\3\2\2\2\u0232\u0230\3\2\2\2\u0232\u0231"+
		"\3\2\2\2\u0233\u0235\3\2\2\2\u0234\u0236\5\u009dO\2\u0235\u0234\3\2\2"+
		"\2\u0235\u0236\3\2\2\2\u0236\u00a8\3\2\2\2\u0237\u0238\5\u0099M\2\u0238"+
		"\u023a\7\60\2\2\u0239\u023b\5\u0099M\2\u023a\u0239\3\2\2\2\u023b\u023c"+
		"\3\2\2\2\u023c\u023a\3\2\2\2\u023c\u023d\3\2\2\2\u023d\u00aa\3\2\2\2\u023e"+
		"\u0246\n\20\2\2\u023f\u0246\5\u0081A\2\u0240\u0241\7^\2\2\u0241\u0246"+
		"\7\f\2\2\u0242\u0243\7^\2\2\u0243\u0244\7\17\2\2\u0244\u0246\7\f\2\2\u0245"+
		"\u023e\3\2\2\2\u0245\u023f\3\2\2\2\u0245\u0240\3\2\2\2\u0245\u0242\3\2"+
		"\2\2\u0246\u00ac\3\2\2\2\u0247\u024f\n\21\2\2\u0248\u024f\5\u0081A\2\u0249"+
		"\u024a\7^\2\2\u024a\u024f\7\f\2\2\u024b\u024c\7^\2\2\u024c\u024d\7\17"+
		"\2\2\u024d\u024f\7\f\2\2\u024e\u0247\3\2\2\2\u024e\u0248\3\2\2\2\u024e"+
		"\u0249\3\2\2\2\u024e\u024b\3\2\2\2\u024f\u00ae\3\2\2\2\u0250\u0256\7$"+
		"\2\2\u0251\u0253\5\u00abV\2\u0252\u0251\3\2\2\2\u0253\u0254\3\2\2\2\u0254"+
		"\u0252\3\2\2\2\u0254\u0255\3\2\2\2\u0255\u0257\3\2\2\2\u0256\u0252\3\2"+
		"\2\2\u0256\u0257\3\2\2\2\u0257\u0258\3\2\2\2\u0258\u0263\7$\2\2\u0259"+
		"\u025f\7)\2\2\u025a\u025c\5\u00adW\2\u025b\u025a\3\2\2\2\u025c\u025d\3"+
		"\2\2\2\u025d\u025b\3\2\2\2\u025d\u025e\3\2\2\2\u025e\u0260\3\2\2\2\u025f"+
		"\u025b\3\2\2\2\u025f\u0260\3\2\2\2\u0260\u0261\3\2\2\2\u0261\u0263\7)"+
		"\2\2\u0262\u0250\3\2\2\2\u0262\u0259\3\2\2\2\u0263\u00b0\3\2\2\2\'\2\u00d1"+
		"\u00eb\u00f9\u0141\u0170\u018b\u0191\u01a5\u01ab\u01b3\u01b6\u01be\u01d3"+
		"\u01e0\u01f1\u01f5\u01f7\u01fe\u0209\u0210\u0214\u0216\u0220\u0226\u0229"+
		"\u022d\u0232\u0235\u023c\u0245\u024e\u0254\u0256\u025d\u025f\u0262\3\b"+
		"\2\2";
	public static final ATN _ATN =
		new ATNDeserializer().deserialize(_serializedATN.toCharArray());
	static {
		_decisionToDFA = new DFA[_ATN.getNumberOfDecisions()];
		for (int i = 0; i < _ATN.getNumberOfDecisions(); i++) {
			_decisionToDFA[i] = new DFA(_ATN.getDecisionState(i), i);
		}
	}
}