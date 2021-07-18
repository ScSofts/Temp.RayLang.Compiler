// Generated from g:\RayCompiler\antlr\java\Ray.g4 by ANTLR 4.8
import org.antlr.v4.runtime.atn.*;
import org.antlr.v4.runtime.dfa.DFA;
import org.antlr.v4.runtime.*;
import org.antlr.v4.runtime.misc.*;
import org.antlr.v4.runtime.tree.*;
import java.util.List;
import java.util.Iterator;
import java.util.ArrayList;

@SuppressWarnings({"all", "warnings", "unchecked", "unused", "cast"})
public class RayParser extends Parser {
	static { RuntimeMetaData.checkVersion("4.8", RuntimeMetaData.VERSION); }

	protected static final DFA[] _decisionToDFA;
	protected static final PredictionContextCache _sharedContextCache =
		new PredictionContextCache();
	public static final int
		T__0=1, T__1=2, T__2=3, T__3=4, T__4=5, T__5=6, T__6=7, T__7=8, T__8=9, 
		T__9=10, T__10=11, T__11=12, T__12=13, T__13=14, T__14=15, T__15=16, T__16=17, 
		T__17=18, T__18=19, T__19=20, T__20=21, Blanks=22, And=23, Xor=24, Not=25, 
		Or=26, Reverse=27, SetEqual=28, Dot=29, Colon=30, MultiLineComment=31, 
		SingleLineComment=32, BlockLeft=33, BlockRight=34, PairLeft=35, PairRight=36, 
		ListLeft=37, ListRight=38, At=39, Semicolon=40, Comma=41, Less=42, More=43, 
		MoveRight=44, MoveLeft=45, SingleArrow=46, Arrow=47, Equal=48, NotEqual=49, 
		LessEqual=50, MoreEqual=51, SingleQuotation=52, MultiQuotation=53, Import=54, 
		Export=55, Alias=56, Function=57, Var=58, Const=59, If=60, Else=61, Match=62, 
		For=63, While=64, Return=65, True=66, False=67, Null=68, Identifier=69, 
		Plus=70, Minus=71, Multiply=72, Divide=73, SelfPlus=74, SelfMinus=75, 
		Pow=76, Types=77, Integer=78, Float=79, StringLiteral=80;
	public static final int
		RULE_start = 0, RULE_declaration = 1, RULE_variableDeclaration = 2, RULE_nativedVar = 3, 
		RULE_functionDeclaration = 4, RULE_nativedDeclaration = 5, RULE_getDeclaration = 6, 
		RULE_getLine = 7, RULE_getBlock = 8, RULE_putDeclaration = 9, RULE_putBlock = 10, 
		RULE_statement = 11, RULE_functionStatement = 12, RULE_arg = 13, RULE_typeStatement = 14, 
		RULE_functionSuffix = 15, RULE_exportStatement = 16, RULE_ifExpression = 17, 
		RULE_whileExpression = 18, RULE_matchExpression = 19, RULE_forExpression = 20, 
		RULE_breakExpression = 21, RULE_continueExpression = 22, RULE_returnExpression = 23, 
		RULE_functionLine = 24, RULE_functionBlock = 25, RULE_expression = 26, 
		RULE_functionCall = 27, RULE_typeAppendix = 28;
	private static String[] makeRuleNames() {
		return new String[] {
			"start", "declaration", "variableDeclaration", "nativedVar", "functionDeclaration", 
			"nativedDeclaration", "getDeclaration", "getLine", "getBlock", "putDeclaration", 
			"putBlock", "statement", "functionStatement", "arg", "typeStatement", 
			"functionSuffix", "exportStatement", "ifExpression", "whileExpression", 
			"matchExpression", "forExpression", "breakExpression", "continueExpression", 
			"returnExpression", "functionLine", "functionBlock", "expression", "functionCall", 
			"typeAppendix"
		};
	}
	public static final String[] ruleNames = makeRuleNames();

	private static String[] makeLiteralNames() {
		return new String[] {
			null, "'='", "'fn'", "'function'", "'native'", "'type'", "'export'", 
			"'case'", "'break'", "'continue'", "'&&'", "'||'", "'?'", "'+='", "'-='", 
			"'*='", "'/='", "'^='", "'|='", "'&='", "'<<='", "'=>>'", null, "'&'", 
			"'^'", "'!'", "'|'", "'~'", null, "'.'", "':'", null, null, "'{'", "'}'", 
			"'('", "')'", "'['", "']'", "'@'", "';'", "','", "'<'", "'>'", "'>>'", 
			"'<<'", "'->'", "'=>'", "'=='", "'!='", "'<='", "'>='", "'''", "'\"'", 
			"'get'", "'put'", "'as'", null, "'var'", "'const'", "'if'", "'else'", 
			"'match'", "'for'", "'While'", "'return'", "'true'", "'false'", "'null'", 
			null, "'+'", "'-'", "'*'", "'/'", "'++'", "'--'", "'**'"
		};
	}
	private static final String[] _LITERAL_NAMES = makeLiteralNames();
	private static String[] makeSymbolicNames() {
		return new String[] {
			null, null, null, null, null, null, null, null, null, null, null, null, 
			null, null, null, null, null, null, null, null, null, null, "Blanks", 
			"And", "Xor", "Not", "Or", "Reverse", "SetEqual", "Dot", "Colon", "MultiLineComment", 
			"SingleLineComment", "BlockLeft", "BlockRight", "PairLeft", "PairRight", 
			"ListLeft", "ListRight", "At", "Semicolon", "Comma", "Less", "More", 
			"MoveRight", "MoveLeft", "SingleArrow", "Arrow", "Equal", "NotEqual", 
			"LessEqual", "MoreEqual", "SingleQuotation", "MultiQuotation", "Import", 
			"Export", "Alias", "Function", "Var", "Const", "If", "Else", "Match", 
			"For", "While", "Return", "True", "False", "Null", "Identifier", "Plus", 
			"Minus", "Multiply", "Divide", "SelfPlus", "SelfMinus", "Pow", "Types", 
			"Integer", "Float", "StringLiteral"
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
	public String getGrammarFileName() { return "Ray.g4"; }

	@Override
	public String[] getRuleNames() { return ruleNames; }

	@Override
	public String getSerializedATN() { return _serializedATN; }

	@Override
	public ATN getATN() { return _ATN; }

	public RayParser(TokenStream input) {
		super(input);
		_interp = new ParserATNSimulator(this,_ATN,_decisionToDFA,_sharedContextCache);
	}

	public static class StartContext extends ParserRuleContext {
		public TerminalNode EOF() { return getToken(RayParser.EOF, 0); }
		public List<DeclarationContext> declaration() {
			return getRuleContexts(DeclarationContext.class);
		}
		public DeclarationContext declaration(int i) {
			return getRuleContext(DeclarationContext.class,i);
		}
		public List<StatementContext> statement() {
			return getRuleContexts(StatementContext.class);
		}
		public StatementContext statement(int i) {
			return getRuleContext(StatementContext.class,i);
		}
		public List<ExpressionContext> expression() {
			return getRuleContexts(ExpressionContext.class);
		}
		public ExpressionContext expression(int i) {
			return getRuleContext(ExpressionContext.class,i);
		}
		public StartContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_start; }
	}

	public final StartContext start() throws RecognitionException {
		StartContext _localctx = new StartContext(_ctx, getState());
		enterRule(_localctx, 0, RULE_start);
		try {
			int _alt;
			enterOuterAlt(_localctx, 1);
			{
			setState(63);
			_errHandler.sync(this);
			_alt = getInterpreter().adaptivePredict(_input,1,_ctx);
			while ( _alt!=1 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
				if ( _alt==1+1 ) {
					{
					setState(61);
					_errHandler.sync(this);
					switch ( getInterpreter().adaptivePredict(_input,0,_ctx) ) {
					case 1:
						{
						setState(58);
						declaration();
						}
						break;
					case 2:
						{
						setState(59);
						statement();
						}
						break;
					case 3:
						{
						setState(60);
						expression(0);
						}
						break;
					}
					} 
				}
				setState(65);
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,1,_ctx);
			}
			setState(66);
			match(EOF);
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

	public static class DeclarationContext extends ParserRuleContext {
		public VariableDeclarationContext variableDeclaration() {
			return getRuleContext(VariableDeclarationContext.class,0);
		}
		public NativedVarContext nativedVar() {
			return getRuleContext(NativedVarContext.class,0);
		}
		public FunctionDeclarationContext functionDeclaration() {
			return getRuleContext(FunctionDeclarationContext.class,0);
		}
		public GetDeclarationContext getDeclaration() {
			return getRuleContext(GetDeclarationContext.class,0);
		}
		public PutDeclarationContext putDeclaration() {
			return getRuleContext(PutDeclarationContext.class,0);
		}
		public DeclarationContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_declaration; }
	}

	public final DeclarationContext declaration() throws RecognitionException {
		DeclarationContext _localctx = new DeclarationContext(_ctx, getState());
		enterRule(_localctx, 2, RULE_declaration);
		try {
			setState(73);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,2,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(68);
				variableDeclaration();
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(69);
				nativedVar();
				}
				break;
			case 3:
				enterOuterAlt(_localctx, 3);
				{
				setState(70);
				functionDeclaration();
				}
				break;
			case 4:
				enterOuterAlt(_localctx, 4);
				{
				setState(71);
				getDeclaration();
				}
				break;
			case 5:
				enterOuterAlt(_localctx, 5);
				{
				setState(72);
				putDeclaration();
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

	public static class VariableDeclarationContext extends ParserRuleContext {
		public TerminalNode Identifier() { return getToken(RayParser.Identifier, 0); }
		public TerminalNode Colon() { return getToken(RayParser.Colon, 0); }
		public TypeAppendixContext typeAppendix() {
			return getRuleContext(TypeAppendixContext.class,0);
		}
		public TerminalNode Semicolon() { return getToken(RayParser.Semicolon, 0); }
		public TerminalNode Var() { return getToken(RayParser.Var, 0); }
		public TerminalNode Const() { return getToken(RayParser.Const, 0); }
		public ExportStatementContext exportStatement() {
			return getRuleContext(ExportStatementContext.class,0);
		}
		public ExpressionContext expression() {
			return getRuleContext(ExpressionContext.class,0);
		}
		public VariableDeclarationContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_variableDeclaration; }
	}

	public final VariableDeclarationContext variableDeclaration() throws RecognitionException {
		VariableDeclarationContext _localctx = new VariableDeclarationContext(_ctx, getState());
		enterRule(_localctx, 4, RULE_variableDeclaration);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(76);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==At) {
				{
				setState(75);
				exportStatement();
				}
			}

			setState(78);
			_la = _input.LA(1);
			if ( !(_la==Var || _la==Const) ) {
			_errHandler.recoverInline(this);
			}
			else {
				if ( _input.LA(1)==Token.EOF ) matchedEOF = true;
				_errHandler.reportMatch(this);
				consume();
			}
			setState(79);
			match(Identifier);
			setState(80);
			match(Colon);
			setState(81);
			typeAppendix();
			setState(84);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==T__0) {
				{
				setState(82);
				match(T__0);
				setState(83);
				expression(0);
				}
			}

			setState(86);
			match(Semicolon);
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

	public static class NativedVarContext extends ParserRuleContext {
		public NativedDeclarationContext nativedDeclaration() {
			return getRuleContext(NativedDeclarationContext.class,0);
		}
		public TerminalNode Identifier() { return getToken(RayParser.Identifier, 0); }
		public TerminalNode Colon() { return getToken(RayParser.Colon, 0); }
		public TypeAppendixContext typeAppendix() {
			return getRuleContext(TypeAppendixContext.class,0);
		}
		public TerminalNode Semicolon() { return getToken(RayParser.Semicolon, 0); }
		public TerminalNode Var() { return getToken(RayParser.Var, 0); }
		public TerminalNode Const() { return getToken(RayParser.Const, 0); }
		public NativedVarContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_nativedVar; }
	}

	public final NativedVarContext nativedVar() throws RecognitionException {
		NativedVarContext _localctx = new NativedVarContext(_ctx, getState());
		enterRule(_localctx, 6, RULE_nativedVar);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(88);
			nativedDeclaration();
			setState(89);
			_la = _input.LA(1);
			if ( !(_la==Var || _la==Const) ) {
			_errHandler.recoverInline(this);
			}
			else {
				if ( _input.LA(1)==Token.EOF ) matchedEOF = true;
				_errHandler.reportMatch(this);
				consume();
			}
			setState(90);
			match(Identifier);
			setState(91);
			match(Colon);
			setState(92);
			typeAppendix();
			setState(93);
			match(Semicolon);
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

	public static class FunctionDeclarationContext extends ParserRuleContext {
		public TerminalNode Identifier() { return getToken(RayParser.Identifier, 0); }
		public TerminalNode PairLeft() { return getToken(RayParser.PairLeft, 0); }
		public TerminalNode PairRight() { return getToken(RayParser.PairRight, 0); }
		public TerminalNode Semicolon() { return getToken(RayParser.Semicolon, 0); }
		public FunctionSuffixContext functionSuffix() {
			return getRuleContext(FunctionSuffixContext.class,0);
		}
		public NativedDeclarationContext nativedDeclaration() {
			return getRuleContext(NativedDeclarationContext.class,0);
		}
		public List<ArgContext> arg() {
			return getRuleContexts(ArgContext.class);
		}
		public ArgContext arg(int i) {
			return getRuleContext(ArgContext.class,i);
		}
		public TerminalNode Colon() { return getToken(RayParser.Colon, 0); }
		public TypeAppendixContext typeAppendix() {
			return getRuleContext(TypeAppendixContext.class,0);
		}
		public List<TerminalNode> Comma() { return getTokens(RayParser.Comma); }
		public TerminalNode Comma(int i) {
			return getToken(RayParser.Comma, i);
		}
		public FunctionDeclarationContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_functionDeclaration; }
	}

	public final FunctionDeclarationContext functionDeclaration() throws RecognitionException {
		FunctionDeclarationContext _localctx = new FunctionDeclarationContext(_ctx, getState());
		enterRule(_localctx, 8, RULE_functionDeclaration);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(97);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,5,_ctx) ) {
			case 1:
				{
				setState(95);
				functionSuffix();
				}
				break;
			case 2:
				{
				setState(96);
				nativedDeclaration();
				}
				break;
			}
			setState(99);
			_la = _input.LA(1);
			if ( !(_la==T__1 || _la==T__2) ) {
			_errHandler.recoverInline(this);
			}
			else {
				if ( _input.LA(1)==Token.EOF ) matchedEOF = true;
				_errHandler.reportMatch(this);
				consume();
			}
			setState(100);
			match(Identifier);
			setState(101);
			match(PairLeft);
			setState(110);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==Identifier) {
				{
				setState(102);
				arg();
				setState(107);
				_errHandler.sync(this);
				_la = _input.LA(1);
				while (_la==Comma) {
					{
					{
					setState(103);
					match(Comma);
					setState(104);
					arg();
					}
					}
					setState(109);
					_errHandler.sync(this);
					_la = _input.LA(1);
				}
				}
			}

			setState(112);
			match(PairRight);
			setState(115);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==Colon) {
				{
				setState(113);
				match(Colon);
				setState(114);
				typeAppendix();
				}
			}

			setState(117);
			match(Semicolon);
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

	public static class NativedDeclarationContext extends ParserRuleContext {
		public TerminalNode At() { return getToken(RayParser.At, 0); }
		public TerminalNode PairLeft() { return getToken(RayParser.PairLeft, 0); }
		public List<TerminalNode> StringLiteral() { return getTokens(RayParser.StringLiteral); }
		public TerminalNode StringLiteral(int i) {
			return getToken(RayParser.StringLiteral, i);
		}
		public TerminalNode Comma() { return getToken(RayParser.Comma, 0); }
		public TerminalNode PairRight() { return getToken(RayParser.PairRight, 0); }
		public NativedDeclarationContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_nativedDeclaration; }
	}

	public final NativedDeclarationContext nativedDeclaration() throws RecognitionException {
		NativedDeclarationContext _localctx = new NativedDeclarationContext(_ctx, getState());
		enterRule(_localctx, 10, RULE_nativedDeclaration);
		try {
			enterOuterAlt(_localctx, 1);
			{
			{
			setState(119);
			match(At);
			setState(120);
			match(T__3);
			setState(121);
			match(PairLeft);
			setState(122);
			match(StringLiteral);
			setState(123);
			match(Comma);
			setState(124);
			match(StringLiteral);
			setState(125);
			match(PairRight);
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

	public static class GetDeclarationContext extends ParserRuleContext {
		public TerminalNode At() { return getToken(RayParser.At, 0); }
		public TerminalNode Import() { return getToken(RayParser.Import, 0); }
		public List<TerminalNode> Identifier() { return getTokens(RayParser.Identifier); }
		public TerminalNode Identifier(int i) {
			return getToken(RayParser.Identifier, i);
		}
		public TerminalNode Alias() { return getToken(RayParser.Alias, 0); }
		public TerminalNode Semicolon() { return getToken(RayParser.Semicolon, 0); }
		public GetBlockContext getBlock() {
			return getRuleContext(GetBlockContext.class,0);
		}
		public List<TerminalNode> Dot() { return getTokens(RayParser.Dot); }
		public TerminalNode Dot(int i) {
			return getToken(RayParser.Dot, i);
		}
		public GetDeclarationContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_getDeclaration; }
	}

	public final GetDeclarationContext getDeclaration() throws RecognitionException {
		GetDeclarationContext _localctx = new GetDeclarationContext(_ctx, getState());
		enterRule(_localctx, 12, RULE_getDeclaration);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(127);
			match(At);
			setState(128);
			match(Import);
			setState(129);
			match(Identifier);
			setState(134);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (_la==Dot) {
				{
				{
				setState(130);
				match(Dot);
				setState(131);
				match(Identifier);
				}
				}
				setState(136);
				_errHandler.sync(this);
				_la = _input.LA(1);
			}
			setState(137);
			match(Alias);
			setState(140);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case BlockLeft:
				{
				setState(138);
				getBlock();
				}
				break;
			case Identifier:
				{
				setState(139);
				match(Identifier);
				}
				break;
			default:
				throw new NoViableAltException(this);
			}
			setState(142);
			match(Semicolon);
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

	public static class GetLineContext extends ParserRuleContext {
		public List<TerminalNode> Identifier() { return getTokens(RayParser.Identifier); }
		public TerminalNode Identifier(int i) {
			return getToken(RayParser.Identifier, i);
		}
		public TerminalNode Alias() { return getToken(RayParser.Alias, 0); }
		public GetLineContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_getLine; }
	}

	public final GetLineContext getLine() throws RecognitionException {
		GetLineContext _localctx = new GetLineContext(_ctx, getState());
		enterRule(_localctx, 14, RULE_getLine);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(144);
			match(Identifier);
			setState(147);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==Alias) {
				{
				setState(145);
				match(Alias);
				setState(146);
				match(Identifier);
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

	public static class GetBlockContext extends ParserRuleContext {
		public TerminalNode BlockLeft() { return getToken(RayParser.BlockLeft, 0); }
		public TerminalNode BlockRight() { return getToken(RayParser.BlockRight, 0); }
		public List<GetLineContext> getLine() {
			return getRuleContexts(GetLineContext.class);
		}
		public GetLineContext getLine(int i) {
			return getRuleContext(GetLineContext.class,i);
		}
		public List<TerminalNode> Comma() { return getTokens(RayParser.Comma); }
		public TerminalNode Comma(int i) {
			return getToken(RayParser.Comma, i);
		}
		public GetBlockContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_getBlock; }
	}

	public final GetBlockContext getBlock() throws RecognitionException {
		GetBlockContext _localctx = new GetBlockContext(_ctx, getState());
		enterRule(_localctx, 16, RULE_getBlock);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(149);
			match(BlockLeft);
			setState(151);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==Identifier) {
				{
				setState(150);
				getLine();
				}
			}

			setState(157);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (_la==Comma) {
				{
				{
				setState(153);
				match(Comma);
				setState(154);
				getLine();
				}
				}
				setState(159);
				_errHandler.sync(this);
				_la = _input.LA(1);
			}
			setState(160);
			match(BlockRight);
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

	public static class PutDeclarationContext extends ParserRuleContext {
		public TerminalNode At() { return getToken(RayParser.At, 0); }
		public TerminalNode Export() { return getToken(RayParser.Export, 0); }
		public PutBlockContext putBlock() {
			return getRuleContext(PutBlockContext.class,0);
		}
		public TerminalNode Semicolon() { return getToken(RayParser.Semicolon, 0); }
		public PutDeclarationContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_putDeclaration; }
	}

	public final PutDeclarationContext putDeclaration() throws RecognitionException {
		PutDeclarationContext _localctx = new PutDeclarationContext(_ctx, getState());
		enterRule(_localctx, 18, RULE_putDeclaration);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(162);
			match(At);
			setState(163);
			match(Export);
			setState(164);
			putBlock();
			setState(166);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==Semicolon) {
				{
				setState(165);
				match(Semicolon);
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

	public static class PutBlockContext extends ParserRuleContext {
		public TerminalNode BlockLeft() { return getToken(RayParser.BlockLeft, 0); }
		public TerminalNode BlockRight() { return getToken(RayParser.BlockRight, 0); }
		public List<VariableDeclarationContext> variableDeclaration() {
			return getRuleContexts(VariableDeclarationContext.class);
		}
		public VariableDeclarationContext variableDeclaration(int i) {
			return getRuleContext(VariableDeclarationContext.class,i);
		}
		public List<FunctionDeclarationContext> functionDeclaration() {
			return getRuleContexts(FunctionDeclarationContext.class);
		}
		public FunctionDeclarationContext functionDeclaration(int i) {
			return getRuleContext(FunctionDeclarationContext.class,i);
		}
		public List<StatementContext> statement() {
			return getRuleContexts(StatementContext.class);
		}
		public StatementContext statement(int i) {
			return getRuleContext(StatementContext.class,i);
		}
		public PutBlockContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_putBlock; }
	}

	public final PutBlockContext putBlock() throws RecognitionException {
		PutBlockContext _localctx = new PutBlockContext(_ctx, getState());
		enterRule(_localctx, 20, RULE_putBlock);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(168);
			match(BlockLeft);
			setState(174);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while ((((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << T__1) | (1L << T__2) | (1L << T__4) | (1L << At) | (1L << Var) | (1L << Const))) != 0)) {
				{
				setState(172);
				_errHandler.sync(this);
				switch ( getInterpreter().adaptivePredict(_input,15,_ctx) ) {
				case 1:
					{
					setState(169);
					variableDeclaration();
					}
					break;
				case 2:
					{
					setState(170);
					functionDeclaration();
					}
					break;
				case 3:
					{
					setState(171);
					statement();
					}
					break;
				}
				}
				setState(176);
				_errHandler.sync(this);
				_la = _input.LA(1);
			}
			setState(177);
			match(BlockRight);
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

	public static class StatementContext extends ParserRuleContext {
		public FunctionStatementContext functionStatement() {
			return getRuleContext(FunctionStatementContext.class,0);
		}
		public TypeStatementContext typeStatement() {
			return getRuleContext(TypeStatementContext.class,0);
		}
		public StatementContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_statement; }
	}

	public final StatementContext statement() throws RecognitionException {
		StatementContext _localctx = new StatementContext(_ctx, getState());
		enterRule(_localctx, 22, RULE_statement);
		try {
			setState(181);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case T__1:
			case T__2:
			case At:
				enterOuterAlt(_localctx, 1);
				{
				setState(179);
				functionStatement();
				}
				break;
			case T__4:
				enterOuterAlt(_localctx, 2);
				{
				setState(180);
				typeStatement();
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

	public static class FunctionStatementContext extends ParserRuleContext {
		public TerminalNode Identifier() { return getToken(RayParser.Identifier, 0); }
		public TerminalNode PairLeft() { return getToken(RayParser.PairLeft, 0); }
		public TerminalNode PairRight() { return getToken(RayParser.PairRight, 0); }
		public FunctionBlockContext functionBlock() {
			return getRuleContext(FunctionBlockContext.class,0);
		}
		public FunctionSuffixContext functionSuffix() {
			return getRuleContext(FunctionSuffixContext.class,0);
		}
		public List<ArgContext> arg() {
			return getRuleContexts(ArgContext.class);
		}
		public ArgContext arg(int i) {
			return getRuleContext(ArgContext.class,i);
		}
		public TerminalNode Colon() { return getToken(RayParser.Colon, 0); }
		public TypeAppendixContext typeAppendix() {
			return getRuleContext(TypeAppendixContext.class,0);
		}
		public List<TerminalNode> Comma() { return getTokens(RayParser.Comma); }
		public TerminalNode Comma(int i) {
			return getToken(RayParser.Comma, i);
		}
		public FunctionStatementContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_functionStatement; }
	}

	public final FunctionStatementContext functionStatement() throws RecognitionException {
		FunctionStatementContext _localctx = new FunctionStatementContext(_ctx, getState());
		enterRule(_localctx, 24, RULE_functionStatement);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(184);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==At) {
				{
				setState(183);
				functionSuffix();
				}
			}

			setState(186);
			_la = _input.LA(1);
			if ( !(_la==T__1 || _la==T__2) ) {
			_errHandler.recoverInline(this);
			}
			else {
				if ( _input.LA(1)==Token.EOF ) matchedEOF = true;
				_errHandler.reportMatch(this);
				consume();
			}
			setState(187);
			match(Identifier);
			setState(188);
			match(PairLeft);
			setState(197);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==Identifier) {
				{
				setState(189);
				arg();
				setState(194);
				_errHandler.sync(this);
				_la = _input.LA(1);
				while (_la==Comma) {
					{
					{
					setState(190);
					match(Comma);
					setState(191);
					arg();
					}
					}
					setState(196);
					_errHandler.sync(this);
					_la = _input.LA(1);
				}
				}
			}

			setState(199);
			match(PairRight);
			setState(202);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==Colon) {
				{
				setState(200);
				match(Colon);
				setState(201);
				typeAppendix();
				}
			}

			setState(204);
			functionBlock();
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

	public static class ArgContext extends ParserRuleContext {
		public TerminalNode Identifier() { return getToken(RayParser.Identifier, 0); }
		public TerminalNode Colon() { return getToken(RayParser.Colon, 0); }
		public TypeAppendixContext typeAppendix() {
			return getRuleContext(TypeAppendixContext.class,0);
		}
		public ArgContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_arg; }
	}

	public final ArgContext arg() throws RecognitionException {
		ArgContext _localctx = new ArgContext(_ctx, getState());
		enterRule(_localctx, 26, RULE_arg);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(206);
			match(Identifier);
			setState(207);
			match(Colon);
			setState(208);
			typeAppendix();
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

	public static class TypeStatementContext extends ParserRuleContext {
		public TerminalNode Identifier() { return getToken(RayParser.Identifier, 0); }
		public TypeAppendixContext typeAppendix() {
			return getRuleContext(TypeAppendixContext.class,0);
		}
		public TerminalNode Semicolon() { return getToken(RayParser.Semicolon, 0); }
		public TypeStatementContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_typeStatement; }
	}

	public final TypeStatementContext typeStatement() throws RecognitionException {
		TypeStatementContext _localctx = new TypeStatementContext(_ctx, getState());
		enterRule(_localctx, 28, RULE_typeStatement);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(210);
			match(T__4);
			setState(211);
			match(Identifier);
			setState(212);
			match(T__0);
			setState(213);
			typeAppendix();
			setState(214);
			match(Semicolon);
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

	public static class FunctionSuffixContext extends ParserRuleContext {
		public ExportStatementContext exportStatement() {
			return getRuleContext(ExportStatementContext.class,0);
		}
		public List<TerminalNode> At() { return getTokens(RayParser.At); }
		public TerminalNode At(int i) {
			return getToken(RayParser.At, i);
		}
		public List<TerminalNode> Identifier() { return getTokens(RayParser.Identifier); }
		public TerminalNode Identifier(int i) {
			return getToken(RayParser.Identifier, i);
		}
		public FunctionSuffixContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_functionSuffix; }
	}

	public final FunctionSuffixContext functionSuffix() throws RecognitionException {
		FunctionSuffixContext _localctx = new FunctionSuffixContext(_ctx, getState());
		enterRule(_localctx, 30, RULE_functionSuffix);
		int _la;
		try {
			setState(223);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,23,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(216);
				exportStatement();
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(219); 
				_errHandler.sync(this);
				_la = _input.LA(1);
				do {
					{
					{
					setState(217);
					match(At);
					setState(218);
					match(Identifier);
					}
					}
					setState(221); 
					_errHandler.sync(this);
					_la = _input.LA(1);
				} while ( _la==At );
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

	public static class ExportStatementContext extends ParserRuleContext {
		public TerminalNode At() { return getToken(RayParser.At, 0); }
		public TerminalNode PairLeft() { return getToken(RayParser.PairLeft, 0); }
		public TerminalNode StringLiteral() { return getToken(RayParser.StringLiteral, 0); }
		public TerminalNode PairRight() { return getToken(RayParser.PairRight, 0); }
		public ExportStatementContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_exportStatement; }
	}

	public final ExportStatementContext exportStatement() throws RecognitionException {
		ExportStatementContext _localctx = new ExportStatementContext(_ctx, getState());
		enterRule(_localctx, 32, RULE_exportStatement);
		try {
			enterOuterAlt(_localctx, 1);
			{
			{
			setState(225);
			match(At);
			setState(226);
			match(T__5);
			setState(227);
			match(PairLeft);
			setState(228);
			match(StringLiteral);
			setState(229);
			match(PairRight);
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

	public static class IfExpressionContext extends ParserRuleContext {
		public List<TerminalNode> If() { return getTokens(RayParser.If); }
		public TerminalNode If(int i) {
			return getToken(RayParser.If, i);
		}
		public List<TerminalNode> PairLeft() { return getTokens(RayParser.PairLeft); }
		public TerminalNode PairLeft(int i) {
			return getToken(RayParser.PairLeft, i);
		}
		public List<ExpressionContext> expression() {
			return getRuleContexts(ExpressionContext.class);
		}
		public ExpressionContext expression(int i) {
			return getRuleContext(ExpressionContext.class,i);
		}
		public List<TerminalNode> PairRight() { return getTokens(RayParser.PairRight); }
		public TerminalNode PairRight(int i) {
			return getToken(RayParser.PairRight, i);
		}
		public List<TerminalNode> BlockLeft() { return getTokens(RayParser.BlockLeft); }
		public TerminalNode BlockLeft(int i) {
			return getToken(RayParser.BlockLeft, i);
		}
		public List<FunctionLineContext> functionLine() {
			return getRuleContexts(FunctionLineContext.class);
		}
		public FunctionLineContext functionLine(int i) {
			return getRuleContext(FunctionLineContext.class,i);
		}
		public List<TerminalNode> BlockRight() { return getTokens(RayParser.BlockRight); }
		public TerminalNode BlockRight(int i) {
			return getToken(RayParser.BlockRight, i);
		}
		public List<TerminalNode> Else() { return getTokens(RayParser.Else); }
		public TerminalNode Else(int i) {
			return getToken(RayParser.Else, i);
		}
		public IfExpressionContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_ifExpression; }
	}

	public final IfExpressionContext ifExpression() throws RecognitionException {
		IfExpressionContext _localctx = new IfExpressionContext(_ctx, getState());
		enterRule(_localctx, 34, RULE_ifExpression);
		int _la;
		try {
			int _alt;
			enterOuterAlt(_localctx, 1);
			{
			{
			setState(231);
			match(If);
			setState(232);
			match(PairLeft);
			setState(233);
			expression(0);
			setState(234);
			match(PairRight);
			setState(235);
			match(BlockLeft);
			setState(236);
			functionLine();
			setState(237);
			match(BlockRight);
			}
			setState(250);
			_errHandler.sync(this);
			_alt = getInterpreter().adaptivePredict(_input,24,_ctx);
			while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
				if ( _alt==1 ) {
					{
					{
					setState(239);
					match(Else);
					setState(240);
					match(If);
					setState(241);
					match(PairLeft);
					setState(242);
					expression(0);
					setState(243);
					match(PairRight);
					setState(244);
					match(BlockLeft);
					setState(245);
					functionLine();
					setState(246);
					match(BlockRight);
					}
					} 
				}
				setState(252);
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,24,_ctx);
			}
			setState(258);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==Else) {
				{
				setState(253);
				match(Else);
				setState(254);
				match(BlockLeft);
				setState(255);
				functionLine();
				setState(256);
				match(BlockRight);
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

	public static class WhileExpressionContext extends ParserRuleContext {
		public TerminalNode While() { return getToken(RayParser.While, 0); }
		public TerminalNode PairLeft() { return getToken(RayParser.PairLeft, 0); }
		public TerminalNode PairRight() { return getToken(RayParser.PairRight, 0); }
		public FunctionBlockContext functionBlock() {
			return getRuleContext(FunctionBlockContext.class,0);
		}
		public WhileExpressionContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_whileExpression; }
	}

	public final WhileExpressionContext whileExpression() throws RecognitionException {
		WhileExpressionContext _localctx = new WhileExpressionContext(_ctx, getState());
		enterRule(_localctx, 36, RULE_whileExpression);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(260);
			match(While);
			setState(261);
			match(PairLeft);
			setState(262);
			match(PairRight);
			setState(263);
			functionBlock();
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

	public static class MatchExpressionContext extends ParserRuleContext {
		public TerminalNode Match() { return getToken(RayParser.Match, 0); }
		public TerminalNode PairLeft() { return getToken(RayParser.PairLeft, 0); }
		public ExpressionContext expression() {
			return getRuleContext(ExpressionContext.class,0);
		}
		public TerminalNode PairRight() { return getToken(RayParser.PairRight, 0); }
		public TerminalNode BlockLeft() { return getToken(RayParser.BlockLeft, 0); }
		public TerminalNode BlockRight() { return getToken(RayParser.BlockRight, 0); }
		public List<FunctionBlockContext> functionBlock() {
			return getRuleContexts(FunctionBlockContext.class);
		}
		public FunctionBlockContext functionBlock(int i) {
			return getRuleContext(FunctionBlockContext.class,i);
		}
		public TerminalNode Else() { return getToken(RayParser.Else, 0); }
		public List<TerminalNode> StringLiteral() { return getTokens(RayParser.StringLiteral); }
		public TerminalNode StringLiteral(int i) {
			return getToken(RayParser.StringLiteral, i);
		}
		public List<TerminalNode> Integer() { return getTokens(RayParser.Integer); }
		public TerminalNode Integer(int i) {
			return getToken(RayParser.Integer, i);
		}
		public List<TerminalNode> Float() { return getTokens(RayParser.Float); }
		public TerminalNode Float(int i) {
			return getToken(RayParser.Float, i);
		}
		public List<TerminalNode> Comma() { return getTokens(RayParser.Comma); }
		public TerminalNode Comma(int i) {
			return getToken(RayParser.Comma, i);
		}
		public MatchExpressionContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_matchExpression; }
	}

	public final MatchExpressionContext matchExpression() throws RecognitionException {
		MatchExpressionContext _localctx = new MatchExpressionContext(_ctx, getState());
		enterRule(_localctx, 38, RULE_matchExpression);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(265);
			match(Match);
			setState(266);
			match(PairLeft);
			setState(267);
			expression(0);
			setState(268);
			match(PairRight);
			setState(269);
			match(BlockLeft);
			setState(282);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (_la==T__6) {
				{
				{
				setState(270);
				match(T__6);
				{
				setState(271);
				_la = _input.LA(1);
				if ( !(((((_la - 78)) & ~0x3f) == 0 && ((1L << (_la - 78)) & ((1L << (Integer - 78)) | (1L << (Float - 78)) | (1L << (StringLiteral - 78)))) != 0)) ) {
				_errHandler.recoverInline(this);
				}
				else {
					if ( _input.LA(1)==Token.EOF ) matchedEOF = true;
					_errHandler.reportMatch(this);
					consume();
				}
				setState(276);
				_errHandler.sync(this);
				_la = _input.LA(1);
				while (_la==Comma) {
					{
					{
					setState(272);
					match(Comma);
					setState(273);
					_la = _input.LA(1);
					if ( !(((((_la - 78)) & ~0x3f) == 0 && ((1L << (_la - 78)) & ((1L << (Integer - 78)) | (1L << (Float - 78)) | (1L << (StringLiteral - 78)))) != 0)) ) {
					_errHandler.recoverInline(this);
					}
					else {
						if ( _input.LA(1)==Token.EOF ) matchedEOF = true;
						_errHandler.reportMatch(this);
						consume();
					}
					}
					}
					setState(278);
					_errHandler.sync(this);
					_la = _input.LA(1);
				}
				}
				setState(279);
				functionBlock();
				}
				}
				setState(284);
				_errHandler.sync(this);
				_la = _input.LA(1);
			}
			setState(287);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==Else) {
				{
				setState(285);
				match(Else);
				setState(286);
				functionBlock();
				}
			}

			setState(289);
			match(BlockRight);
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

	public static class ForExpressionContext extends ParserRuleContext {
		public TerminalNode For() { return getToken(RayParser.For, 0); }
		public TerminalNode PairLeft() { return getToken(RayParser.PairLeft, 0); }
		public List<TerminalNode> Semicolon() { return getTokens(RayParser.Semicolon); }
		public TerminalNode Semicolon(int i) {
			return getToken(RayParser.Semicolon, i);
		}
		public TerminalNode PairRight() { return getToken(RayParser.PairRight, 0); }
		public FunctionBlockContext functionBlock() {
			return getRuleContext(FunctionBlockContext.class,0);
		}
		public VariableDeclarationContext variableDeclaration() {
			return getRuleContext(VariableDeclarationContext.class,0);
		}
		public List<ExpressionContext> expression() {
			return getRuleContexts(ExpressionContext.class);
		}
		public ExpressionContext expression(int i) {
			return getRuleContext(ExpressionContext.class,i);
		}
		public ForExpressionContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_forExpression; }
	}

	public final ForExpressionContext forExpression() throws RecognitionException {
		ForExpressionContext _localctx = new ForExpressionContext(_ctx, getState());
		enterRule(_localctx, 40, RULE_forExpression);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(291);
			match(For);
			setState(292);
			match(PairLeft);
			setState(294);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if ((((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << At) | (1L << Var) | (1L << Const))) != 0)) {
				{
				setState(293);
				variableDeclaration();
				}
			}

			setState(296);
			match(Semicolon);
			setState(298);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (((((_la - 25)) & ~0x3f) == 0 && ((1L << (_la - 25)) & ((1L << (Not - 25)) | (1L << (Reverse - 25)) | (1L << (PairLeft - 25)) | (1L << (ListLeft - 25)) | (1L << (True - 25)) | (1L << (False - 25)) | (1L << (Null - 25)) | (1L << (Identifier - 25)) | (1L << (SelfPlus - 25)) | (1L << (SelfMinus - 25)) | (1L << (Integer - 25)) | (1L << (Float - 25)) | (1L << (StringLiteral - 25)))) != 0)) {
				{
				setState(297);
				expression(0);
				}
			}

			setState(300);
			match(Semicolon);
			setState(302);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (((((_la - 25)) & ~0x3f) == 0 && ((1L << (_la - 25)) & ((1L << (Not - 25)) | (1L << (Reverse - 25)) | (1L << (PairLeft - 25)) | (1L << (ListLeft - 25)) | (1L << (True - 25)) | (1L << (False - 25)) | (1L << (Null - 25)) | (1L << (Identifier - 25)) | (1L << (SelfPlus - 25)) | (1L << (SelfMinus - 25)) | (1L << (Integer - 25)) | (1L << (Float - 25)) | (1L << (StringLiteral - 25)))) != 0)) {
				{
				setState(301);
				expression(0);
				}
			}

			setState(304);
			match(PairRight);
			setState(305);
			functionBlock();
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

	public static class BreakExpressionContext extends ParserRuleContext {
		public BreakExpressionContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_breakExpression; }
	}

	public final BreakExpressionContext breakExpression() throws RecognitionException {
		BreakExpressionContext _localctx = new BreakExpressionContext(_ctx, getState());
		enterRule(_localctx, 42, RULE_breakExpression);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(307);
			match(T__7);
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

	public static class ContinueExpressionContext extends ParserRuleContext {
		public ContinueExpressionContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_continueExpression; }
	}

	public final ContinueExpressionContext continueExpression() throws RecognitionException {
		ContinueExpressionContext _localctx = new ContinueExpressionContext(_ctx, getState());
		enterRule(_localctx, 44, RULE_continueExpression);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(309);
			match(T__8);
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

	public static class ReturnExpressionContext extends ParserRuleContext {
		public TerminalNode Return() { return getToken(RayParser.Return, 0); }
		public TerminalNode Semicolon() { return getToken(RayParser.Semicolon, 0); }
		public ExpressionContext expression() {
			return getRuleContext(ExpressionContext.class,0);
		}
		public ReturnExpressionContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_returnExpression; }
	}

	public final ReturnExpressionContext returnExpression() throws RecognitionException {
		ReturnExpressionContext _localctx = new ReturnExpressionContext(_ctx, getState());
		enterRule(_localctx, 46, RULE_returnExpression);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(311);
			match(Return);
			setState(313);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (((((_la - 25)) & ~0x3f) == 0 && ((1L << (_la - 25)) & ((1L << (Not - 25)) | (1L << (Reverse - 25)) | (1L << (PairLeft - 25)) | (1L << (ListLeft - 25)) | (1L << (True - 25)) | (1L << (False - 25)) | (1L << (Null - 25)) | (1L << (Identifier - 25)) | (1L << (SelfPlus - 25)) | (1L << (SelfMinus - 25)) | (1L << (Integer - 25)) | (1L << (Float - 25)) | (1L << (StringLiteral - 25)))) != 0)) {
				{
				setState(312);
				expression(0);
				}
			}

			setState(315);
			match(Semicolon);
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

	public static class FunctionLineContext extends ParserRuleContext {
		public DeclarationContext declaration() {
			return getRuleContext(DeclarationContext.class,0);
		}
		public ExpressionContext expression() {
			return getRuleContext(ExpressionContext.class,0);
		}
		public TerminalNode Semicolon() { return getToken(RayParser.Semicolon, 0); }
		public IfExpressionContext ifExpression() {
			return getRuleContext(IfExpressionContext.class,0);
		}
		public WhileExpressionContext whileExpression() {
			return getRuleContext(WhileExpressionContext.class,0);
		}
		public MatchExpressionContext matchExpression() {
			return getRuleContext(MatchExpressionContext.class,0);
		}
		public ForExpressionContext forExpression() {
			return getRuleContext(ForExpressionContext.class,0);
		}
		public TypeStatementContext typeStatement() {
			return getRuleContext(TypeStatementContext.class,0);
		}
		public BreakExpressionContext breakExpression() {
			return getRuleContext(BreakExpressionContext.class,0);
		}
		public ContinueExpressionContext continueExpression() {
			return getRuleContext(ContinueExpressionContext.class,0);
		}
		public ReturnExpressionContext returnExpression() {
			return getRuleContext(ReturnExpressionContext.class,0);
		}
		public FunctionLineContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_functionLine; }
	}

	public final FunctionLineContext functionLine() throws RecognitionException {
		FunctionLineContext _localctx = new FunctionLineContext(_ctx, getState());
		enterRule(_localctx, 48, RULE_functionLine);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(329);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case T__1:
			case T__2:
			case At:
			case Var:
			case Const:
				{
				setState(317);
				declaration();
				}
				break;
			case Not:
			case Reverse:
			case PairLeft:
			case ListLeft:
			case True:
			case False:
			case Null:
			case Identifier:
			case SelfPlus:
			case SelfMinus:
			case Integer:
			case Float:
			case StringLiteral:
				{
				setState(318);
				expression(0);
				setState(319);
				match(Semicolon);
				}
				break;
			case If:
				{
				setState(321);
				ifExpression();
				}
				break;
			case While:
				{
				setState(322);
				whileExpression();
				}
				break;
			case Match:
				{
				setState(323);
				matchExpression();
				}
				break;
			case For:
				{
				setState(324);
				forExpression();
				}
				break;
			case T__4:
				{
				setState(325);
				typeStatement();
				}
				break;
			case T__7:
				{
				setState(326);
				breakExpression();
				}
				break;
			case T__8:
				{
				setState(327);
				continueExpression();
				}
				break;
			case Return:
				{
				setState(328);
				returnExpression();
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

	public static class FunctionBlockContext extends ParserRuleContext {
		public TerminalNode BlockLeft() { return getToken(RayParser.BlockLeft, 0); }
		public TerminalNode BlockRight() { return getToken(RayParser.BlockRight, 0); }
		public List<FunctionLineContext> functionLine() {
			return getRuleContexts(FunctionLineContext.class);
		}
		public FunctionLineContext functionLine(int i) {
			return getRuleContext(FunctionLineContext.class,i);
		}
		public FunctionBlockContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_functionBlock; }
	}

	public final FunctionBlockContext functionBlock() throws RecognitionException {
		FunctionBlockContext _localctx = new FunctionBlockContext(_ctx, getState());
		enterRule(_localctx, 50, RULE_functionBlock);
		try {
			int _alt;
			enterOuterAlt(_localctx, 1);
			{
			setState(331);
			match(BlockLeft);
			setState(335);
			_errHandler.sync(this);
			_alt = getInterpreter().adaptivePredict(_input,34,_ctx);
			while ( _alt!=1 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
				if ( _alt==1+1 ) {
					{
					{
					setState(332);
					functionLine();
					}
					} 
				}
				setState(337);
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,34,_ctx);
			}
			setState(338);
			match(BlockRight);
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

	public static class ExpressionContext extends ParserRuleContext {
		public TerminalNode StringLiteral() { return getToken(RayParser.StringLiteral, 0); }
		public TerminalNode Integer() { return getToken(RayParser.Integer, 0); }
		public TerminalNode Float() { return getToken(RayParser.Float, 0); }
		public List<TerminalNode> Identifier() { return getTokens(RayParser.Identifier); }
		public TerminalNode Identifier(int i) {
			return getToken(RayParser.Identifier, i);
		}
		public TerminalNode True() { return getToken(RayParser.True, 0); }
		public TerminalNode False() { return getToken(RayParser.False, 0); }
		public TerminalNode Null() { return getToken(RayParser.Null, 0); }
		public TerminalNode PairLeft() { return getToken(RayParser.PairLeft, 0); }
		public List<ExpressionContext> expression() {
			return getRuleContexts(ExpressionContext.class);
		}
		public ExpressionContext expression(int i) {
			return getRuleContext(ExpressionContext.class,i);
		}
		public TerminalNode PairRight() { return getToken(RayParser.PairRight, 0); }
		public FunctionCallContext functionCall() {
			return getRuleContext(FunctionCallContext.class,0);
		}
		public TerminalNode SelfPlus() { return getToken(RayParser.SelfPlus, 0); }
		public TerminalNode SelfMinus() { return getToken(RayParser.SelfMinus, 0); }
		public TerminalNode Not() { return getToken(RayParser.Not, 0); }
		public TerminalNode Reverse() { return getToken(RayParser.Reverse, 0); }
		public TerminalNode ListLeft() { return getToken(RayParser.ListLeft, 0); }
		public TerminalNode ListRight() { return getToken(RayParser.ListRight, 0); }
		public List<TerminalNode> Comma() { return getTokens(RayParser.Comma); }
		public TerminalNode Comma(int i) {
			return getToken(RayParser.Comma, i);
		}
		public TerminalNode MoveLeft() { return getToken(RayParser.MoveLeft, 0); }
		public TerminalNode MoveRight() { return getToken(RayParser.MoveRight, 0); }
		public TerminalNode More() { return getToken(RayParser.More, 0); }
		public TerminalNode Less() { return getToken(RayParser.Less, 0); }
		public TerminalNode MoreEqual() { return getToken(RayParser.MoreEqual, 0); }
		public TerminalNode LessEqual() { return getToken(RayParser.LessEqual, 0); }
		public TerminalNode Equal() { return getToken(RayParser.Equal, 0); }
		public TerminalNode NotEqual() { return getToken(RayParser.NotEqual, 0); }
		public TerminalNode And() { return getToken(RayParser.And, 0); }
		public TerminalNode Or() { return getToken(RayParser.Or, 0); }
		public TerminalNode Xor() { return getToken(RayParser.Xor, 0); }
		public TerminalNode Colon() { return getToken(RayParser.Colon, 0); }
		public TerminalNode Pow() { return getToken(RayParser.Pow, 0); }
		public TerminalNode Multiply() { return getToken(RayParser.Multiply, 0); }
		public TerminalNode Divide() { return getToken(RayParser.Divide, 0); }
		public TerminalNode Plus() { return getToken(RayParser.Plus, 0); }
		public TerminalNode Minus() { return getToken(RayParser.Minus, 0); }
		public List<TerminalNode> Dot() { return getTokens(RayParser.Dot); }
		public TerminalNode Dot(int i) {
			return getToken(RayParser.Dot, i);
		}
		public ExpressionContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_expression; }
	}

	public final ExpressionContext expression() throws RecognitionException {
		return expression(0);
	}

	private ExpressionContext expression(int _p) throws RecognitionException {
		ParserRuleContext _parentctx = _ctx;
		int _parentState = getState();
		ExpressionContext _localctx = new ExpressionContext(_ctx, _parentState);
		ExpressionContext _prevctx = _localctx;
		int _startState = 52;
		enterRecursionRule(_localctx, 52, RULE_expression, _p);
		int _la;
		try {
			int _alt;
			enterOuterAlt(_localctx, 1);
			{
			setState(370);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,37,_ctx) ) {
			case 1:
				{
				setState(341);
				match(StringLiteral);
				}
				break;
			case 2:
				{
				setState(342);
				match(Integer);
				}
				break;
			case 3:
				{
				setState(343);
				match(Float);
				}
				break;
			case 4:
				{
				setState(344);
				match(Identifier);
				}
				break;
			case 5:
				{
				setState(345);
				_la = _input.LA(1);
				if ( !(((((_la - 66)) & ~0x3f) == 0 && ((1L << (_la - 66)) & ((1L << (True - 66)) | (1L << (False - 66)) | (1L << (Null - 66)))) != 0)) ) {
				_errHandler.recoverInline(this);
				}
				else {
					if ( _input.LA(1)==Token.EOF ) matchedEOF = true;
					_errHandler.reportMatch(this);
					consume();
				}
				}
				break;
			case 6:
				{
				setState(346);
				match(PairLeft);
				setState(347);
				expression(0);
				setState(348);
				match(PairRight);
				}
				break;
			case 7:
				{
				setState(350);
				functionCall();
				}
				break;
			case 8:
				{
				setState(351);
				_la = _input.LA(1);
				if ( !(_la==SelfPlus || _la==SelfMinus) ) {
				_errHandler.recoverInline(this);
				}
				else {
					if ( _input.LA(1)==Token.EOF ) matchedEOF = true;
					_errHandler.reportMatch(this);
					consume();
				}
				setState(352);
				expression(13);
				}
				break;
			case 9:
				{
				setState(353);
				_la = _input.LA(1);
				if ( !(_la==Not || _la==Reverse) ) {
				_errHandler.recoverInline(this);
				}
				else {
					if ( _input.LA(1)==Token.EOF ) matchedEOF = true;
					_errHandler.reportMatch(this);
					consume();
				}
				setState(354);
				expression(3);
				}
				break;
			case 10:
				{
				setState(355);
				match(Identifier);
				setState(356);
				_la = _input.LA(1);
				if ( !((((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << T__0) | (1L << T__12) | (1L << T__13) | (1L << T__14) | (1L << T__15) | (1L << T__16) | (1L << T__17) | (1L << T__18) | (1L << T__19) | (1L << T__20))) != 0)) ) {
				_errHandler.recoverInline(this);
				}
				else {
					if ( _input.LA(1)==Token.EOF ) matchedEOF = true;
					_errHandler.reportMatch(this);
					consume();
				}
				setState(357);
				expression(2);
				}
				break;
			case 11:
				{
				setState(358);
				match(ListLeft);
				setState(367);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (((((_la - 25)) & ~0x3f) == 0 && ((1L << (_la - 25)) & ((1L << (Not - 25)) | (1L << (Reverse - 25)) | (1L << (PairLeft - 25)) | (1L << (ListLeft - 25)) | (1L << (True - 25)) | (1L << (False - 25)) | (1L << (Null - 25)) | (1L << (Identifier - 25)) | (1L << (SelfPlus - 25)) | (1L << (SelfMinus - 25)) | (1L << (Integer - 25)) | (1L << (Float - 25)) | (1L << (StringLiteral - 25)))) != 0)) {
					{
					setState(359);
					expression(0);
					setState(364);
					_errHandler.sync(this);
					_la = _input.LA(1);
					while (_la==Comma) {
						{
						{
						setState(360);
						match(Comma);
						setState(361);
						expression(0);
						}
						}
						setState(366);
						_errHandler.sync(this);
						_la = _input.LA(1);
					}
					}
				}

				setState(369);
				match(ListRight);
				}
				break;
			}
			_ctx.stop = _input.LT(-1);
			setState(421);
			_errHandler.sync(this);
			_alt = getInterpreter().adaptivePredict(_input,40,_ctx);
			while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
				if ( _alt==1 ) {
					if ( _parseListeners!=null ) triggerExitRuleEvent();
					_prevctx = _localctx;
					{
					setState(419);
					_errHandler.sync(this);
					switch ( getInterpreter().adaptivePredict(_input,39,_ctx) ) {
					case 1:
						{
						_localctx = new ExpressionContext(_parentctx, _parentState);
						pushNewRecursionContext(_localctx, _startState, RULE_expression);
						setState(372);
						if (!(precpred(_ctx, 12))) throw new FailedPredicateException(this, "precpred(_ctx, 12)");
						setState(373);
						_la = _input.LA(1);
						if ( !(_la==MoveRight || _la==MoveLeft) ) {
						_errHandler.recoverInline(this);
						}
						else {
							if ( _input.LA(1)==Token.EOF ) matchedEOF = true;
							_errHandler.reportMatch(this);
							consume();
						}
						setState(374);
						expression(13);
						}
						break;
					case 2:
						{
						_localctx = new ExpressionContext(_parentctx, _parentState);
						pushNewRecursionContext(_localctx, _startState, RULE_expression);
						setState(375);
						if (!(precpred(_ctx, 11))) throw new FailedPredicateException(this, "precpred(_ctx, 11)");
						setState(376);
						_la = _input.LA(1);
						if ( !((((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << Less) | (1L << More) | (1L << Equal) | (1L << NotEqual) | (1L << LessEqual) | (1L << MoreEqual))) != 0)) ) {
						_errHandler.recoverInline(this);
						}
						else {
							if ( _input.LA(1)==Token.EOF ) matchedEOF = true;
							_errHandler.reportMatch(this);
							consume();
						}
						setState(377);
						expression(12);
						}
						break;
					case 3:
						{
						_localctx = new ExpressionContext(_parentctx, _parentState);
						pushNewRecursionContext(_localctx, _startState, RULE_expression);
						setState(378);
						if (!(precpred(_ctx, 10))) throw new FailedPredicateException(this, "precpred(_ctx, 10)");
						setState(379);
						_la = _input.LA(1);
						if ( !(_la==And || _la==Or) ) {
						_errHandler.recoverInline(this);
						}
						else {
							if ( _input.LA(1)==Token.EOF ) matchedEOF = true;
							_errHandler.reportMatch(this);
							consume();
						}
						setState(380);
						expression(11);
						}
						break;
					case 4:
						{
						_localctx = new ExpressionContext(_parentctx, _parentState);
						pushNewRecursionContext(_localctx, _startState, RULE_expression);
						setState(381);
						if (!(precpred(_ctx, 9))) throw new FailedPredicateException(this, "precpred(_ctx, 9)");
						setState(382);
						match(Xor);
						setState(383);
						expression(9);
						}
						break;
					case 5:
						{
						_localctx = new ExpressionContext(_parentctx, _parentState);
						pushNewRecursionContext(_localctx, _startState, RULE_expression);
						setState(384);
						if (!(precpred(_ctx, 8))) throw new FailedPredicateException(this, "precpred(_ctx, 8)");
						setState(385);
						_la = _input.LA(1);
						if ( !(_la==T__9 || _la==T__10) ) {
						_errHandler.recoverInline(this);
						}
						else {
							if ( _input.LA(1)==Token.EOF ) matchedEOF = true;
							_errHandler.reportMatch(this);
							consume();
						}
						setState(386);
						expression(9);
						}
						break;
					case 6:
						{
						_localctx = new ExpressionContext(_parentctx, _parentState);
						pushNewRecursionContext(_localctx, _startState, RULE_expression);
						setState(387);
						if (!(precpred(_ctx, 7))) throw new FailedPredicateException(this, "precpred(_ctx, 7)");
						setState(388);
						match(T__11);
						setState(389);
						expression(0);
						setState(390);
						match(Colon);
						setState(391);
						expression(8);
						}
						break;
					case 7:
						{
						_localctx = new ExpressionContext(_parentctx, _parentState);
						pushNewRecursionContext(_localctx, _startState, RULE_expression);
						setState(393);
						if (!(precpred(_ctx, 6))) throw new FailedPredicateException(this, "precpred(_ctx, 6)");
						setState(394);
						match(Pow);
						setState(395);
						expression(6);
						}
						break;
					case 8:
						{
						_localctx = new ExpressionContext(_parentctx, _parentState);
						pushNewRecursionContext(_localctx, _startState, RULE_expression);
						setState(396);
						if (!(precpred(_ctx, 5))) throw new FailedPredicateException(this, "precpred(_ctx, 5)");
						setState(397);
						_la = _input.LA(1);
						if ( !(_la==Multiply || _la==Divide) ) {
						_errHandler.recoverInline(this);
						}
						else {
							if ( _input.LA(1)==Token.EOF ) matchedEOF = true;
							_errHandler.reportMatch(this);
							consume();
						}
						setState(398);
						expression(6);
						}
						break;
					case 9:
						{
						_localctx = new ExpressionContext(_parentctx, _parentState);
						pushNewRecursionContext(_localctx, _startState, RULE_expression);
						setState(399);
						if (!(precpred(_ctx, 4))) throw new FailedPredicateException(this, "precpred(_ctx, 4)");
						setState(400);
						_la = _input.LA(1);
						if ( !(_la==Plus || _la==Minus) ) {
						_errHandler.recoverInline(this);
						}
						else {
							if ( _input.LA(1)==Token.EOF ) matchedEOF = true;
							_errHandler.reportMatch(this);
							consume();
						}
						setState(401);
						expression(5);
						}
						break;
					case 10:
						{
						_localctx = new ExpressionContext(_parentctx, _parentState);
						pushNewRecursionContext(_localctx, _startState, RULE_expression);
						setState(402);
						if (!(precpred(_ctx, 17))) throw new FailedPredicateException(this, "precpred(_ctx, 17)");
						setState(403);
						match(ListLeft);
						setState(404);
						expression(0);
						setState(405);
						match(ListRight);
						}
						break;
					case 11:
						{
						_localctx = new ExpressionContext(_parentctx, _parentState);
						pushNewRecursionContext(_localctx, _startState, RULE_expression);
						setState(407);
						if (!(precpred(_ctx, 16))) throw new FailedPredicateException(this, "precpred(_ctx, 16)");
						setState(408);
						match(Dot);
						setState(409);
						functionCall();
						}
						break;
					case 12:
						{
						_localctx = new ExpressionContext(_parentctx, _parentState);
						pushNewRecursionContext(_localctx, _startState, RULE_expression);
						setState(410);
						if (!(precpred(_ctx, 15))) throw new FailedPredicateException(this, "precpred(_ctx, 15)");
						setState(413); 
						_errHandler.sync(this);
						_alt = 1;
						do {
							switch (_alt) {
							case 1:
								{
								{
								setState(411);
								match(Dot);
								setState(412);
								match(Identifier);
								}
								}
								break;
							default:
								throw new NoViableAltException(this);
							}
							setState(415); 
							_errHandler.sync(this);
							_alt = getInterpreter().adaptivePredict(_input,38,_ctx);
						} while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER );
						}
						break;
					case 13:
						{
						_localctx = new ExpressionContext(_parentctx, _parentState);
						pushNewRecursionContext(_localctx, _startState, RULE_expression);
						setState(417);
						if (!(precpred(_ctx, 14))) throw new FailedPredicateException(this, "precpred(_ctx, 14)");
						setState(418);
						_la = _input.LA(1);
						if ( !(_la==SelfPlus || _la==SelfMinus) ) {
						_errHandler.recoverInline(this);
						}
						else {
							if ( _input.LA(1)==Token.EOF ) matchedEOF = true;
							_errHandler.reportMatch(this);
							consume();
						}
						}
						break;
					}
					} 
				}
				setState(423);
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,40,_ctx);
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

	public static class FunctionCallContext extends ParserRuleContext {
		public TerminalNode Identifier() { return getToken(RayParser.Identifier, 0); }
		public TerminalNode PairLeft() { return getToken(RayParser.PairLeft, 0); }
		public TerminalNode PairRight() { return getToken(RayParser.PairRight, 0); }
		public List<ExpressionContext> expression() {
			return getRuleContexts(ExpressionContext.class);
		}
		public ExpressionContext expression(int i) {
			return getRuleContext(ExpressionContext.class,i);
		}
		public List<TerminalNode> Comma() { return getTokens(RayParser.Comma); }
		public TerminalNode Comma(int i) {
			return getToken(RayParser.Comma, i);
		}
		public FunctionCallContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_functionCall; }
	}

	public final FunctionCallContext functionCall() throws RecognitionException {
		FunctionCallContext _localctx = new FunctionCallContext(_ctx, getState());
		enterRule(_localctx, 54, RULE_functionCall);
		int _la;
		try {
			int _alt;
			enterOuterAlt(_localctx, 1);
			{
			setState(424);
			match(Identifier);
			setState(425);
			match(PairLeft);
			setState(434);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (((((_la - 25)) & ~0x3f) == 0 && ((1L << (_la - 25)) & ((1L << (Not - 25)) | (1L << (Reverse - 25)) | (1L << (PairLeft - 25)) | (1L << (ListLeft - 25)) | (1L << (True - 25)) | (1L << (False - 25)) | (1L << (Null - 25)) | (1L << (Identifier - 25)) | (1L << (SelfPlus - 25)) | (1L << (SelfMinus - 25)) | (1L << (Integer - 25)) | (1L << (Float - 25)) | (1L << (StringLiteral - 25)))) != 0)) {
				{
				setState(426);
				expression(0);
				setState(431);
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,41,_ctx);
				while ( _alt!=1 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
					if ( _alt==1+1 ) {
						{
						{
						setState(427);
						match(Comma);
						setState(428);
						expression(0);
						}
						} 
					}
					setState(433);
					_errHandler.sync(this);
					_alt = getInterpreter().adaptivePredict(_input,41,_ctx);
				}
				}
			}

			setState(436);
			match(PairRight);
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

	public static class TypeAppendixContext extends ParserRuleContext {
		public TerminalNode Types() { return getToken(RayParser.Types, 0); }
		public TerminalNode Identifier() { return getToken(RayParser.Identifier, 0); }
		public List<TerminalNode> ListLeft() { return getTokens(RayParser.ListLeft); }
		public TerminalNode ListLeft(int i) {
			return getToken(RayParser.ListLeft, i);
		}
		public List<TerminalNode> ListRight() { return getTokens(RayParser.ListRight); }
		public TerminalNode ListRight(int i) {
			return getToken(RayParser.ListRight, i);
		}
		public TypeAppendixContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_typeAppendix; }
	}

	public final TypeAppendixContext typeAppendix() throws RecognitionException {
		TypeAppendixContext _localctx = new TypeAppendixContext(_ctx, getState());
		enterRule(_localctx, 56, RULE_typeAppendix);
		int _la;
		try {
			setState(454);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,45,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(438);
				match(Types);
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(439);
				match(Identifier);
				}
				break;
			case 3:
				enterOuterAlt(_localctx, 3);
				{
				setState(440);
				match(Types);
				setState(443); 
				_errHandler.sync(this);
				_la = _input.LA(1);
				do {
					{
					{
					setState(441);
					match(ListLeft);
					setState(442);
					match(ListRight);
					}
					}
					setState(445); 
					_errHandler.sync(this);
					_la = _input.LA(1);
				} while ( _la==ListLeft );
				}
				break;
			case 4:
				enterOuterAlt(_localctx, 4);
				{
				setState(447);
				match(Identifier);
				setState(450); 
				_errHandler.sync(this);
				_la = _input.LA(1);
				do {
					{
					{
					setState(448);
					match(ListLeft);
					setState(449);
					match(ListRight);
					}
					}
					setState(452); 
					_errHandler.sync(this);
					_la = _input.LA(1);
				} while ( _la==ListLeft );
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

	public boolean sempred(RuleContext _localctx, int ruleIndex, int predIndex) {
		switch (ruleIndex) {
		case 26:
			return expression_sempred((ExpressionContext)_localctx, predIndex);
		}
		return true;
	}
	private boolean expression_sempred(ExpressionContext _localctx, int predIndex) {
		switch (predIndex) {
		case 0:
			return precpred(_ctx, 12);
		case 1:
			return precpred(_ctx, 11);
		case 2:
			return precpred(_ctx, 10);
		case 3:
			return precpred(_ctx, 9);
		case 4:
			return precpred(_ctx, 8);
		case 5:
			return precpred(_ctx, 7);
		case 6:
			return precpred(_ctx, 6);
		case 7:
			return precpred(_ctx, 5);
		case 8:
			return precpred(_ctx, 4);
		case 9:
			return precpred(_ctx, 17);
		case 10:
			return precpred(_ctx, 16);
		case 11:
			return precpred(_ctx, 15);
		case 12:
			return precpred(_ctx, 14);
		}
		return true;
	}

	public static final String _serializedATN =
		"\3\u608b\ua72a\u8133\ub9ed\u417c\u3be7\u7786\u5964\3R\u01cb\4\2\t\2\4"+
		"\3\t\3\4\4\t\4\4\5\t\5\4\6\t\6\4\7\t\7\4\b\t\b\4\t\t\t\4\n\t\n\4\13\t"+
		"\13\4\f\t\f\4\r\t\r\4\16\t\16\4\17\t\17\4\20\t\20\4\21\t\21\4\22\t\22"+
		"\4\23\t\23\4\24\t\24\4\25\t\25\4\26\t\26\4\27\t\27\4\30\t\30\4\31\t\31"+
		"\4\32\t\32\4\33\t\33\4\34\t\34\4\35\t\35\4\36\t\36\3\2\3\2\3\2\7\2@\n"+
		"\2\f\2\16\2C\13\2\3\2\3\2\3\3\3\3\3\3\3\3\3\3\5\3L\n\3\3\4\5\4O\n\4\3"+
		"\4\3\4\3\4\3\4\3\4\3\4\5\4W\n\4\3\4\3\4\3\5\3\5\3\5\3\5\3\5\3\5\3\5\3"+
		"\6\3\6\5\6d\n\6\3\6\3\6\3\6\3\6\3\6\3\6\7\6l\n\6\f\6\16\6o\13\6\5\6q\n"+
		"\6\3\6\3\6\3\6\5\6v\n\6\3\6\3\6\3\7\3\7\3\7\3\7\3\7\3\7\3\7\3\7\3\b\3"+
		"\b\3\b\3\b\3\b\7\b\u0087\n\b\f\b\16\b\u008a\13\b\3\b\3\b\3\b\5\b\u008f"+
		"\n\b\3\b\3\b\3\t\3\t\3\t\5\t\u0096\n\t\3\n\3\n\5\n\u009a\n\n\3\n\3\n\7"+
		"\n\u009e\n\n\f\n\16\n\u00a1\13\n\3\n\3\n\3\13\3\13\3\13\3\13\5\13\u00a9"+
		"\n\13\3\f\3\f\3\f\3\f\7\f\u00af\n\f\f\f\16\f\u00b2\13\f\3\f\3\f\3\r\3"+
		"\r\5\r\u00b8\n\r\3\16\5\16\u00bb\n\16\3\16\3\16\3\16\3\16\3\16\3\16\7"+
		"\16\u00c3\n\16\f\16\16\16\u00c6\13\16\5\16\u00c8\n\16\3\16\3\16\3\16\5"+
		"\16\u00cd\n\16\3\16\3\16\3\17\3\17\3\17\3\17\3\20\3\20\3\20\3\20\3\20"+
		"\3\20\3\21\3\21\3\21\6\21\u00de\n\21\r\21\16\21\u00df\5\21\u00e2\n\21"+
		"\3\22\3\22\3\22\3\22\3\22\3\22\3\23\3\23\3\23\3\23\3\23\3\23\3\23\3\23"+
		"\3\23\3\23\3\23\3\23\3\23\3\23\3\23\3\23\3\23\7\23\u00fb\n\23\f\23\16"+
		"\23\u00fe\13\23\3\23\3\23\3\23\3\23\3\23\5\23\u0105\n\23\3\24\3\24\3\24"+
		"\3\24\3\24\3\25\3\25\3\25\3\25\3\25\3\25\3\25\3\25\3\25\7\25\u0115\n\25"+
		"\f\25\16\25\u0118\13\25\3\25\7\25\u011b\n\25\f\25\16\25\u011e\13\25\3"+
		"\25\3\25\5\25\u0122\n\25\3\25\3\25\3\26\3\26\3\26\5\26\u0129\n\26\3\26"+
		"\3\26\5\26\u012d\n\26\3\26\3\26\5\26\u0131\n\26\3\26\3\26\3\26\3\27\3"+
		"\27\3\30\3\30\3\31\3\31\5\31\u013c\n\31\3\31\3\31\3\32\3\32\3\32\3\32"+
		"\3\32\3\32\3\32\3\32\3\32\3\32\3\32\3\32\5\32\u014c\n\32\3\33\3\33\7\33"+
		"\u0150\n\33\f\33\16\33\u0153\13\33\3\33\3\33\3\34\3\34\3\34\3\34\3\34"+
		"\3\34\3\34\3\34\3\34\3\34\3\34\3\34\3\34\3\34\3\34\3\34\3\34\3\34\3\34"+
		"\3\34\3\34\3\34\7\34\u016d\n\34\f\34\16\34\u0170\13\34\5\34\u0172\n\34"+
		"\3\34\5\34\u0175\n\34\3\34\3\34\3\34\3\34\3\34\3\34\3\34\3\34\3\34\3\34"+
		"\3\34\3\34\3\34\3\34\3\34\3\34\3\34\3\34\3\34\3\34\3\34\3\34\3\34\3\34"+
		"\3\34\3\34\3\34\3\34\3\34\3\34\3\34\3\34\3\34\3\34\3\34\3\34\3\34\3\34"+
		"\3\34\3\34\3\34\6\34\u01a0\n\34\r\34\16\34\u01a1\3\34\3\34\7\34\u01a6"+
		"\n\34\f\34\16\34\u01a9\13\34\3\35\3\35\3\35\3\35\3\35\7\35\u01b0\n\35"+
		"\f\35\16\35\u01b3\13\35\5\35\u01b5\n\35\3\35\3\35\3\36\3\36\3\36\3\36"+
		"\3\36\6\36\u01be\n\36\r\36\16\36\u01bf\3\36\3\36\3\36\6\36\u01c5\n\36"+
		"\r\36\16\36\u01c6\5\36\u01c9\n\36\3\36\5A\u0151\u01b1\3\66\37\2\4\6\b"+
		"\n\f\16\20\22\24\26\30\32\34\36 \"$&(*,.\60\62\64\668:\2\17\3\2<=\3\2"+
		"\4\5\3\2PR\3\2DF\3\2LM\4\2\33\33\35\35\4\2\3\3\17\27\3\2./\4\2,-\62\65"+
		"\4\2\31\31\34\34\3\2\f\r\3\2JK\3\2HI\2\u01ff\2A\3\2\2\2\4K\3\2\2\2\6N"+
		"\3\2\2\2\bZ\3\2\2\2\nc\3\2\2\2\fy\3\2\2\2\16\u0081\3\2\2\2\20\u0092\3"+
		"\2\2\2\22\u0097\3\2\2\2\24\u00a4\3\2\2\2\26\u00aa\3\2\2\2\30\u00b7\3\2"+
		"\2\2\32\u00ba\3\2\2\2\34\u00d0\3\2\2\2\36\u00d4\3\2\2\2 \u00e1\3\2\2\2"+
		"\"\u00e3\3\2\2\2$\u00e9\3\2\2\2&\u0106\3\2\2\2(\u010b\3\2\2\2*\u0125\3"+
		"\2\2\2,\u0135\3\2\2\2.\u0137\3\2\2\2\60\u0139\3\2\2\2\62\u014b\3\2\2\2"+
		"\64\u014d\3\2\2\2\66\u0174\3\2\2\28\u01aa\3\2\2\2:\u01c8\3\2\2\2<@\5\4"+
		"\3\2=@\5\30\r\2>@\5\66\34\2?<\3\2\2\2?=\3\2\2\2?>\3\2\2\2@C\3\2\2\2AB"+
		"\3\2\2\2A?\3\2\2\2BD\3\2\2\2CA\3\2\2\2DE\7\2\2\3E\3\3\2\2\2FL\5\6\4\2"+
		"GL\5\b\5\2HL\5\n\6\2IL\5\16\b\2JL\5\24\13\2KF\3\2\2\2KG\3\2\2\2KH\3\2"+
		"\2\2KI\3\2\2\2KJ\3\2\2\2L\5\3\2\2\2MO\5\"\22\2NM\3\2\2\2NO\3\2\2\2OP\3"+
		"\2\2\2PQ\t\2\2\2QR\7G\2\2RS\7 \2\2SV\5:\36\2TU\7\3\2\2UW\5\66\34\2VT\3"+
		"\2\2\2VW\3\2\2\2WX\3\2\2\2XY\7*\2\2Y\7\3\2\2\2Z[\5\f\7\2[\\\t\2\2\2\\"+
		"]\7G\2\2]^\7 \2\2^_\5:\36\2_`\7*\2\2`\t\3\2\2\2ad\5 \21\2bd\5\f\7\2ca"+
		"\3\2\2\2cb\3\2\2\2cd\3\2\2\2de\3\2\2\2ef\t\3\2\2fg\7G\2\2gp\7%\2\2hm\5"+
		"\34\17\2ij\7+\2\2jl\5\34\17\2ki\3\2\2\2lo\3\2\2\2mk\3\2\2\2mn\3\2\2\2"+
		"nq\3\2\2\2om\3\2\2\2ph\3\2\2\2pq\3\2\2\2qr\3\2\2\2ru\7&\2\2st\7 \2\2t"+
		"v\5:\36\2us\3\2\2\2uv\3\2\2\2vw\3\2\2\2wx\7*\2\2x\13\3\2\2\2yz\7)\2\2"+
		"z{\7\6\2\2{|\7%\2\2|}\7R\2\2}~\7+\2\2~\177\7R\2\2\177\u0080\7&\2\2\u0080"+
		"\r\3\2\2\2\u0081\u0082\7)\2\2\u0082\u0083\78\2\2\u0083\u0088\7G\2\2\u0084"+
		"\u0085\7\37\2\2\u0085\u0087\7G\2\2\u0086\u0084\3\2\2\2\u0087\u008a\3\2"+
		"\2\2\u0088\u0086\3\2\2\2\u0088\u0089\3\2\2\2\u0089\u008b\3\2\2\2\u008a"+
		"\u0088\3\2\2\2\u008b\u008e\7:\2\2\u008c\u008f\5\22\n\2\u008d\u008f\7G"+
		"\2\2\u008e\u008c\3\2\2\2\u008e\u008d\3\2\2\2\u008f\u0090\3\2\2\2\u0090"+
		"\u0091\7*\2\2\u0091\17\3\2\2\2\u0092\u0095\7G\2\2\u0093\u0094\7:\2\2\u0094"+
		"\u0096\7G\2\2\u0095\u0093\3\2\2\2\u0095\u0096\3\2\2\2\u0096\21\3\2\2\2"+
		"\u0097\u0099\7#\2\2\u0098\u009a\5\20\t\2\u0099\u0098\3\2\2\2\u0099\u009a"+
		"\3\2\2\2\u009a\u009f\3\2\2\2\u009b\u009c\7+\2\2\u009c\u009e\5\20\t\2\u009d"+
		"\u009b\3\2\2\2\u009e\u00a1\3\2\2\2\u009f\u009d\3\2\2\2\u009f\u00a0\3\2"+
		"\2\2\u00a0\u00a2\3\2\2\2\u00a1\u009f\3\2\2\2\u00a2\u00a3\7$\2\2\u00a3"+
		"\23\3\2\2\2\u00a4\u00a5\7)\2\2\u00a5\u00a6\79\2\2\u00a6\u00a8\5\26\f\2"+
		"\u00a7\u00a9\7*\2\2\u00a8\u00a7\3\2\2\2\u00a8\u00a9\3\2\2\2\u00a9\25\3"+
		"\2\2\2\u00aa\u00b0\7#\2\2\u00ab\u00af\5\6\4\2\u00ac\u00af\5\n\6\2\u00ad"+
		"\u00af\5\30\r\2\u00ae\u00ab\3\2\2\2\u00ae\u00ac\3\2\2\2\u00ae\u00ad\3"+
		"\2\2\2\u00af\u00b2\3\2\2\2\u00b0\u00ae\3\2\2\2\u00b0\u00b1\3\2\2\2\u00b1"+
		"\u00b3\3\2\2\2\u00b2\u00b0\3\2\2\2\u00b3\u00b4\7$\2\2\u00b4\27\3\2\2\2"+
		"\u00b5\u00b8\5\32\16\2\u00b6\u00b8\5\36\20\2\u00b7\u00b5\3\2\2\2\u00b7"+
		"\u00b6\3\2\2\2\u00b8\31\3\2\2\2\u00b9\u00bb\5 \21\2\u00ba\u00b9\3\2\2"+
		"\2\u00ba\u00bb\3\2\2\2\u00bb\u00bc\3\2\2\2\u00bc\u00bd\t\3\2\2\u00bd\u00be"+
		"\7G\2\2\u00be\u00c7\7%\2\2\u00bf\u00c4\5\34\17\2\u00c0\u00c1\7+\2\2\u00c1"+
		"\u00c3\5\34\17\2\u00c2\u00c0\3\2\2\2\u00c3\u00c6\3\2\2\2\u00c4\u00c2\3"+
		"\2\2\2\u00c4\u00c5\3\2\2\2\u00c5\u00c8\3\2\2\2\u00c6\u00c4\3\2\2\2\u00c7"+
		"\u00bf\3\2\2\2\u00c7\u00c8\3\2\2\2\u00c8\u00c9\3\2\2\2\u00c9\u00cc\7&"+
		"\2\2\u00ca\u00cb\7 \2\2\u00cb\u00cd\5:\36\2\u00cc\u00ca\3\2\2\2\u00cc"+
		"\u00cd\3\2\2\2\u00cd\u00ce\3\2\2\2\u00ce\u00cf\5\64\33\2\u00cf\33\3\2"+
		"\2\2\u00d0\u00d1\7G\2\2\u00d1\u00d2\7 \2\2\u00d2\u00d3\5:\36\2\u00d3\35"+
		"\3\2\2\2\u00d4\u00d5\7\7\2\2\u00d5\u00d6\7G\2\2\u00d6\u00d7\7\3\2\2\u00d7"+
		"\u00d8\5:\36\2\u00d8\u00d9\7*\2\2\u00d9\37\3\2\2\2\u00da\u00e2\5\"\22"+
		"\2\u00db\u00dc\7)\2\2\u00dc\u00de\7G\2\2\u00dd\u00db\3\2\2\2\u00de\u00df"+
		"\3\2\2\2\u00df\u00dd\3\2\2\2\u00df\u00e0\3\2\2\2\u00e0\u00e2\3\2\2\2\u00e1"+
		"\u00da\3\2\2\2\u00e1\u00dd\3\2\2\2\u00e2!\3\2\2\2\u00e3\u00e4\7)\2\2\u00e4"+
		"\u00e5\7\b\2\2\u00e5\u00e6\7%\2\2\u00e6\u00e7\7R\2\2\u00e7\u00e8\7&\2"+
		"\2\u00e8#\3\2\2\2\u00e9\u00ea\7>\2\2\u00ea\u00eb\7%\2\2\u00eb\u00ec\5"+
		"\66\34\2\u00ec\u00ed\7&\2\2\u00ed\u00ee\7#\2\2\u00ee\u00ef\5\62\32\2\u00ef"+
		"\u00f0\7$\2\2\u00f0\u00fc\3\2\2\2\u00f1\u00f2\7?\2\2\u00f2\u00f3\7>\2"+
		"\2\u00f3\u00f4\7%\2\2\u00f4\u00f5\5\66\34\2\u00f5\u00f6\7&\2\2\u00f6\u00f7"+
		"\7#\2\2\u00f7\u00f8\5\62\32\2\u00f8\u00f9\7$\2\2\u00f9\u00fb\3\2\2\2\u00fa"+
		"\u00f1\3\2\2\2\u00fb\u00fe\3\2\2\2\u00fc\u00fa\3\2\2\2\u00fc\u00fd\3\2"+
		"\2\2\u00fd\u0104\3\2\2\2\u00fe\u00fc\3\2\2\2\u00ff\u0100\7?\2\2\u0100"+
		"\u0101\7#\2\2\u0101\u0102\5\62\32\2\u0102\u0103\7$\2\2\u0103\u0105\3\2"+
		"\2\2\u0104\u00ff\3\2\2\2\u0104\u0105\3\2\2\2\u0105%\3\2\2\2\u0106\u0107"+
		"\7B\2\2\u0107\u0108\7%\2\2\u0108\u0109\7&\2\2\u0109\u010a\5\64\33\2\u010a"+
		"\'\3\2\2\2\u010b\u010c\7@\2\2\u010c\u010d\7%\2\2\u010d\u010e\5\66\34\2"+
		"\u010e\u010f\7&\2\2\u010f\u011c\7#\2\2\u0110\u0111\7\t\2\2\u0111\u0116"+
		"\t\4\2\2\u0112\u0113\7+\2\2\u0113\u0115\t\4\2\2\u0114\u0112\3\2\2\2\u0115"+
		"\u0118\3\2\2\2\u0116\u0114\3\2\2\2\u0116\u0117\3\2\2\2\u0117\u0119\3\2"+
		"\2\2\u0118\u0116\3\2\2\2\u0119\u011b\5\64\33\2\u011a\u0110\3\2\2\2\u011b"+
		"\u011e\3\2\2\2\u011c\u011a\3\2\2\2\u011c\u011d\3\2\2\2\u011d\u0121\3\2"+
		"\2\2\u011e\u011c\3\2\2\2\u011f\u0120\7?\2\2\u0120\u0122\5\64\33\2\u0121"+
		"\u011f\3\2\2\2\u0121\u0122\3\2\2\2\u0122\u0123\3\2\2\2\u0123\u0124\7$"+
		"\2\2\u0124)\3\2\2\2\u0125\u0126\7A\2\2\u0126\u0128\7%\2\2\u0127\u0129"+
		"\5\6\4\2\u0128\u0127\3\2\2\2\u0128\u0129\3\2\2\2\u0129\u012a\3\2\2\2\u012a"+
		"\u012c\7*\2\2\u012b\u012d\5\66\34\2\u012c\u012b\3\2\2\2\u012c\u012d\3"+
		"\2\2\2\u012d\u012e\3\2\2\2\u012e\u0130\7*\2\2\u012f\u0131\5\66\34\2\u0130"+
		"\u012f\3\2\2\2\u0130\u0131\3\2\2\2\u0131\u0132\3\2\2\2\u0132\u0133\7&"+
		"\2\2\u0133\u0134\5\64\33\2\u0134+\3\2\2\2\u0135\u0136\7\n\2\2\u0136-\3"+
		"\2\2\2\u0137\u0138\7\13\2\2\u0138/\3\2\2\2\u0139\u013b\7C\2\2\u013a\u013c"+
		"\5\66\34\2\u013b\u013a\3\2\2\2\u013b\u013c\3\2\2\2\u013c\u013d\3\2\2\2"+
		"\u013d\u013e\7*\2\2\u013e\61\3\2\2\2\u013f\u014c\5\4\3\2\u0140\u0141\5"+
		"\66\34\2\u0141\u0142\7*\2\2\u0142\u014c\3\2\2\2\u0143\u014c\5$\23\2\u0144"+
		"\u014c\5&\24\2\u0145\u014c\5(\25\2\u0146\u014c\5*\26\2\u0147\u014c\5\36"+
		"\20\2\u0148\u014c\5,\27\2\u0149\u014c\5.\30\2\u014a\u014c\5\60\31\2\u014b"+
		"\u013f\3\2\2\2\u014b\u0140\3\2\2\2\u014b\u0143\3\2\2\2\u014b\u0144\3\2"+
		"\2\2\u014b\u0145\3\2\2\2\u014b\u0146\3\2\2\2\u014b\u0147\3\2\2\2\u014b"+
		"\u0148\3\2\2\2\u014b\u0149\3\2\2\2\u014b\u014a\3\2\2\2\u014c\63\3\2\2"+
		"\2\u014d\u0151\7#\2\2\u014e\u0150\5\62\32\2\u014f\u014e\3\2\2\2\u0150"+
		"\u0153\3\2\2\2\u0151\u0152\3\2\2\2\u0151\u014f\3\2\2\2\u0152\u0154\3\2"+
		"\2\2\u0153\u0151\3\2\2\2\u0154\u0155\7$\2\2\u0155\65\3\2\2\2\u0156\u0157"+
		"\b\34\1\2\u0157\u0175\7R\2\2\u0158\u0175\7P\2\2\u0159\u0175\7Q\2\2\u015a"+
		"\u0175\7G\2\2\u015b\u0175\t\5\2\2\u015c\u015d\7%\2\2\u015d\u015e\5\66"+
		"\34\2\u015e\u015f\7&\2\2\u015f\u0175\3\2\2\2\u0160\u0175\58\35\2\u0161"+
		"\u0162\t\6\2\2\u0162\u0175\5\66\34\17\u0163\u0164\t\7\2\2\u0164\u0175"+
		"\5\66\34\5\u0165\u0166\7G\2\2\u0166\u0167\t\b\2\2\u0167\u0175\5\66\34"+
		"\4\u0168\u0171\7\'\2\2\u0169\u016e\5\66\34\2\u016a\u016b\7+\2\2\u016b"+
		"\u016d\5\66\34\2\u016c\u016a\3\2\2\2\u016d\u0170\3\2\2\2\u016e\u016c\3"+
		"\2\2\2\u016e\u016f\3\2\2\2\u016f\u0172\3\2\2\2\u0170\u016e\3\2\2\2\u0171"+
		"\u0169\3\2\2\2\u0171\u0172\3\2\2\2\u0172\u0173\3\2\2\2\u0173\u0175\7("+
		"\2\2\u0174\u0156\3\2\2\2\u0174\u0158\3\2\2\2\u0174\u0159\3\2\2\2\u0174"+
		"\u015a\3\2\2\2\u0174\u015b\3\2\2\2\u0174\u015c\3\2\2\2\u0174\u0160\3\2"+
		"\2\2\u0174\u0161\3\2\2\2\u0174\u0163\3\2\2\2\u0174\u0165\3\2\2\2\u0174"+
		"\u0168\3\2\2\2\u0175\u01a7\3\2\2\2\u0176\u0177\f\16\2\2\u0177\u0178\t"+
		"\t\2\2\u0178\u01a6\5\66\34\17\u0179\u017a\f\r\2\2\u017a\u017b\t\n\2\2"+
		"\u017b\u01a6\5\66\34\16\u017c\u017d\f\f\2\2\u017d\u017e\t\13\2\2\u017e"+
		"\u01a6\5\66\34\r\u017f\u0180\f\13\2\2\u0180\u0181\7\32\2\2\u0181\u01a6"+
		"\5\66\34\13\u0182\u0183\f\n\2\2\u0183\u0184\t\f\2\2\u0184\u01a6\5\66\34"+
		"\13\u0185\u0186\f\t\2\2\u0186\u0187\7\16\2\2\u0187\u0188\5\66\34\2\u0188"+
		"\u0189\7 \2\2\u0189\u018a\5\66\34\n\u018a\u01a6\3\2\2\2\u018b\u018c\f"+
		"\b\2\2\u018c\u018d\7N\2\2\u018d\u01a6\5\66\34\b\u018e\u018f\f\7\2\2\u018f"+
		"\u0190\t\r\2\2\u0190\u01a6\5\66\34\b\u0191\u0192\f\6\2\2\u0192\u0193\t"+
		"\16\2\2\u0193\u01a6\5\66\34\7\u0194\u0195\f\23\2\2\u0195\u0196\7\'\2\2"+
		"\u0196\u0197\5\66\34\2\u0197\u0198\7(\2\2\u0198\u01a6\3\2\2\2\u0199\u019a"+
		"\f\22\2\2\u019a\u019b\7\37\2\2\u019b\u01a6\58\35\2\u019c\u019f\f\21\2"+
		"\2\u019d\u019e\7\37\2\2\u019e\u01a0\7G\2\2\u019f\u019d\3\2\2\2\u01a0\u01a1"+
		"\3\2\2\2\u01a1\u019f\3\2\2\2\u01a1\u01a2\3\2\2\2\u01a2\u01a6\3\2\2\2\u01a3"+
		"\u01a4\f\20\2\2\u01a4\u01a6\t\6\2\2\u01a5\u0176\3\2\2\2\u01a5\u0179\3"+
		"\2\2\2\u01a5\u017c\3\2\2\2\u01a5\u017f\3\2\2\2\u01a5\u0182\3\2\2\2\u01a5"+
		"\u0185\3\2\2\2\u01a5\u018b\3\2\2\2\u01a5\u018e\3\2\2\2\u01a5\u0191\3\2"+
		"\2\2\u01a5\u0194\3\2\2\2\u01a5\u0199\3\2\2\2\u01a5\u019c\3\2\2\2\u01a5"+
		"\u01a3\3\2\2\2\u01a6\u01a9\3\2\2\2\u01a7\u01a5\3\2\2\2\u01a7\u01a8\3\2"+
		"\2\2\u01a8\67\3\2\2\2\u01a9\u01a7\3\2\2\2\u01aa\u01ab\7G\2\2\u01ab\u01b4"+
		"\7%\2\2\u01ac\u01b1\5\66\34\2\u01ad\u01ae\7+\2\2\u01ae\u01b0\5\66\34\2"+
		"\u01af\u01ad\3\2\2\2\u01b0\u01b3\3\2\2\2\u01b1\u01b2\3\2\2\2\u01b1\u01af"+
		"\3\2\2\2\u01b2\u01b5\3\2\2\2\u01b3\u01b1\3\2\2\2\u01b4\u01ac\3\2\2\2\u01b4"+
		"\u01b5\3\2\2\2\u01b5\u01b6\3\2\2\2\u01b6\u01b7\7&\2\2\u01b79\3\2\2\2\u01b8"+
		"\u01c9\7O\2\2\u01b9\u01c9\7G\2\2\u01ba\u01bd\7O\2\2\u01bb\u01bc\7\'\2"+
		"\2\u01bc\u01be\7(\2\2\u01bd\u01bb\3\2\2\2\u01be\u01bf\3\2\2\2\u01bf\u01bd"+
		"\3\2\2\2\u01bf\u01c0\3\2\2\2\u01c0\u01c9\3\2\2\2\u01c1\u01c4\7G\2\2\u01c2"+
		"\u01c3\7\'\2\2\u01c3\u01c5\7(\2\2\u01c4\u01c2\3\2\2\2\u01c5\u01c6\3\2"+
		"\2\2\u01c6\u01c4\3\2\2\2\u01c6\u01c7\3\2\2\2\u01c7\u01c9\3\2\2\2\u01c8"+
		"\u01b8\3\2\2\2\u01c8\u01b9\3\2\2\2\u01c8\u01ba\3\2\2\2\u01c8\u01c1\3\2"+
		"\2\2\u01c9;\3\2\2\2\60?AKNVcmpu\u0088\u008e\u0095\u0099\u009f\u00a8\u00ae"+
		"\u00b0\u00b7\u00ba\u00c4\u00c7\u00cc\u00df\u00e1\u00fc\u0104\u0116\u011c"+
		"\u0121\u0128\u012c\u0130\u013b\u014b\u0151\u016e\u0171\u0174\u01a1\u01a5"+
		"\u01a7\u01b1\u01b4\u01bf\u01c6\u01c8";
	public static final ATN _ATN =
		new ATNDeserializer().deserialize(_serializedATN.toCharArray());
	static {
		_decisionToDFA = new DFA[_ATN.getNumberOfDecisions()];
		for (int i = 0; i < _ATN.getNumberOfDecisions(); i++) {
			_decisionToDFA[i] = new DFA(_ATN.getDecisionState(i), i);
		}
	}
}