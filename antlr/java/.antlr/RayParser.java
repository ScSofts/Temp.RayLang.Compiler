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
		For=63, While=64, Return=65, Identifier=66, Plus=67, Minus=68, Multiply=69, 
		Divide=70, SelfPlus=71, SelfMinus=72, Pow=73, Types=74, Integer=75, Float=76, 
		StringLiteral=77;
	public static final int
		RULE_start = 0, RULE_declaration = 1, RULE_variableDeclaration = 2, RULE_nativedVar = 3, 
		RULE_functionDeclaration = 4, RULE_nativedDeclaration = 5, RULE_getDeclaration = 6, 
		RULE_getLine = 7, RULE_getBlock = 8, RULE_putDeclaration = 9, RULE_putBlock = 10, 
		RULE_statement = 11, RULE_functionStatement = 12, RULE_arg = 13, RULE_typeStatement = 14, 
		RULE_functionSuffix = 15, RULE_exportStatement = 16, RULE_ifExpression = 17, 
		RULE_whileExpression = 18, RULE_matchExpression = 19, RULE_forExpression = 20, 
		RULE_breakExpression = 21, RULE_continueExpression = 22, RULE_returnExpression = 23, 
		RULE_functionLine = 24, RULE_functionBlock = 25, RULE_expression = 26, 
		RULE_functionCall = 27;
	private static String[] makeRuleNames() {
		return new String[] {
			"start", "declaration", "variableDeclaration", "nativedVar", "functionDeclaration", 
			"nativedDeclaration", "getDeclaration", "getLine", "getBlock", "putDeclaration", 
			"putBlock", "statement", "functionStatement", "arg", "typeStatement", 
			"functionSuffix", "exportStatement", "ifExpression", "whileExpression", 
			"matchExpression", "forExpression", "breakExpression", "continueExpression", 
			"returnExpression", "functionLine", "functionBlock", "expression", "functionCall"
		};
	}
	public static final String[] ruleNames = makeRuleNames();

	private static String[] makeLiteralNames() {
		return new String[] {
			null, "'fn'", "'function'", "'native'", "'type'", "'='", "'export'", 
			"'case'", "'break'", "'continue'", "'&&'", "'||'", "'?'", "'+='", "'-='", 
			"'*='", "'/='", "'^='", "'|='", "'&='", "'<<='", "'=>>'", null, "'&'", 
			"'^'", "'!'", "'|'", "'~'", null, "'.'", "':'", null, null, "'{'", "'}'", 
			"'('", "')'", "'['", "']'", "'@'", "';'", "','", "'<'", "'>'", "'>>'", 
			"'<<'", "'->'", "'=>'", "'=='", "'!='", "'<='", "'>='", "'''", "'\"'", 
			"'get'", "'put'", "'as'", null, "'var'", "'const'", "'if'", "'else'", 
			"'match'", "'for'", "'While'", "'return'", null, "'+'", "'-'", "'*'", 
			"'/'", "'++'", "'--'", "'**'"
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
			"For", "While", "Return", "Identifier", "Plus", "Minus", "Multiply", 
			"Divide", "SelfPlus", "SelfMinus", "Pow", "Types", "Integer", "Float", 
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
			setState(61);
			_errHandler.sync(this);
			_alt = getInterpreter().adaptivePredict(_input,1,_ctx);
			while ( _alt!=1 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
				if ( _alt==1+1 ) {
					{
					setState(59);
					_errHandler.sync(this);
					switch ( getInterpreter().adaptivePredict(_input,0,_ctx) ) {
					case 1:
						{
						setState(56);
						declaration();
						}
						break;
					case 2:
						{
						setState(57);
						statement();
						}
						break;
					case 3:
						{
						setState(58);
						expression(0);
						}
						break;
					}
					} 
				}
				setState(63);
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,1,_ctx);
			}
			setState(64);
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
			setState(71);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,2,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(66);
				variableDeclaration();
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(67);
				nativedVar();
				}
				break;
			case 3:
				enterOuterAlt(_localctx, 3);
				{
				setState(68);
				functionDeclaration();
				}
				break;
			case 4:
				enterOuterAlt(_localctx, 4);
				{
				setState(69);
				getDeclaration();
				}
				break;
			case 5:
				enterOuterAlt(_localctx, 5);
				{
				setState(70);
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
		public List<TerminalNode> Identifier() { return getTokens(RayParser.Identifier); }
		public TerminalNode Identifier(int i) {
			return getToken(RayParser.Identifier, i);
		}
		public TerminalNode Colon() { return getToken(RayParser.Colon, 0); }
		public TerminalNode Semicolon() { return getToken(RayParser.Semicolon, 0); }
		public TerminalNode Var() { return getToken(RayParser.Var, 0); }
		public TerminalNode Const() { return getToken(RayParser.Const, 0); }
		public TerminalNode Types() { return getToken(RayParser.Types, 0); }
		public ExportStatementContext exportStatement() {
			return getRuleContext(ExportStatementContext.class,0);
		}
		public TerminalNode SetEqual() { return getToken(RayParser.SetEqual, 0); }
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
			setState(74);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==At) {
				{
				setState(73);
				exportStatement();
				}
			}

			setState(76);
			_la = _input.LA(1);
			if ( !(_la==Var || _la==Const) ) {
			_errHandler.recoverInline(this);
			}
			else {
				if ( _input.LA(1)==Token.EOF ) matchedEOF = true;
				_errHandler.reportMatch(this);
				consume();
			}
			setState(77);
			match(Identifier);
			setState(78);
			match(Colon);
			setState(79);
			_la = _input.LA(1);
			if ( !(_la==Identifier || _la==Types) ) {
			_errHandler.recoverInline(this);
			}
			else {
				if ( _input.LA(1)==Token.EOF ) matchedEOF = true;
				_errHandler.reportMatch(this);
				consume();
			}
			setState(82);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==SetEqual) {
				{
				setState(80);
				match(SetEqual);
				setState(81);
				expression(0);
				}
			}

			setState(84);
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
		public List<TerminalNode> Identifier() { return getTokens(RayParser.Identifier); }
		public TerminalNode Identifier(int i) {
			return getToken(RayParser.Identifier, i);
		}
		public TerminalNode Colon() { return getToken(RayParser.Colon, 0); }
		public TerminalNode Semicolon() { return getToken(RayParser.Semicolon, 0); }
		public TerminalNode Var() { return getToken(RayParser.Var, 0); }
		public TerminalNode Const() { return getToken(RayParser.Const, 0); }
		public TerminalNode Types() { return getToken(RayParser.Types, 0); }
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
			setState(86);
			nativedDeclaration();
			setState(87);
			_la = _input.LA(1);
			if ( !(_la==Var || _la==Const) ) {
			_errHandler.recoverInline(this);
			}
			else {
				if ( _input.LA(1)==Token.EOF ) matchedEOF = true;
				_errHandler.reportMatch(this);
				consume();
			}
			setState(88);
			match(Identifier);
			setState(89);
			match(Colon);
			setState(90);
			_la = _input.LA(1);
			if ( !(_la==Identifier || _la==Types) ) {
			_errHandler.recoverInline(this);
			}
			else {
				if ( _input.LA(1)==Token.EOF ) matchedEOF = true;
				_errHandler.reportMatch(this);
				consume();
			}
			setState(91);
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
		public List<TerminalNode> Identifier() { return getTokens(RayParser.Identifier); }
		public TerminalNode Identifier(int i) {
			return getToken(RayParser.Identifier, i);
		}
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
		public TerminalNode Types() { return getToken(RayParser.Types, 0); }
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
			setState(95);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,5,_ctx) ) {
			case 1:
				{
				setState(93);
				functionSuffix();
				}
				break;
			case 2:
				{
				setState(94);
				nativedDeclaration();
				}
				break;
			}
			setState(97);
			_la = _input.LA(1);
			if ( !(_la==T__0 || _la==T__1) ) {
			_errHandler.recoverInline(this);
			}
			else {
				if ( _input.LA(1)==Token.EOF ) matchedEOF = true;
				_errHandler.reportMatch(this);
				consume();
			}
			setState(98);
			match(Identifier);
			setState(99);
			match(PairLeft);
			setState(108);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==Identifier) {
				{
				setState(100);
				arg();
				setState(105);
				_errHandler.sync(this);
				_la = _input.LA(1);
				while (_la==Comma) {
					{
					{
					setState(101);
					match(Comma);
					setState(102);
					arg();
					}
					}
					setState(107);
					_errHandler.sync(this);
					_la = _input.LA(1);
				}
				}
			}

			setState(110);
			match(PairRight);
			setState(113);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==Colon) {
				{
				setState(111);
				match(Colon);
				setState(112);
				_la = _input.LA(1);
				if ( !(_la==Identifier || _la==Types) ) {
				_errHandler.recoverInline(this);
				}
				else {
					if ( _input.LA(1)==Token.EOF ) matchedEOF = true;
					_errHandler.reportMatch(this);
					consume();
				}
				}
			}

			setState(115);
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
			setState(117);
			match(At);
			setState(118);
			match(T__2);
			setState(119);
			match(PairLeft);
			setState(120);
			match(StringLiteral);
			setState(121);
			match(Comma);
			setState(122);
			match(StringLiteral);
			setState(123);
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
		public GetDeclarationContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_getDeclaration; }
	}

	public final GetDeclarationContext getDeclaration() throws RecognitionException {
		GetDeclarationContext _localctx = new GetDeclarationContext(_ctx, getState());
		enterRule(_localctx, 12, RULE_getDeclaration);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(125);
			match(At);
			setState(126);
			match(Import);
			setState(127);
			match(Identifier);
			setState(128);
			match(Alias);
			setState(131);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case BlockLeft:
				{
				setState(129);
				getBlock();
				}
				break;
			case Identifier:
				{
				setState(130);
				match(Identifier);
				}
				break;
			default:
				throw new NoViableAltException(this);
			}
			setState(133);
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
			setState(135);
			match(Identifier);
			setState(138);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==Alias) {
				{
				setState(136);
				match(Alias);
				setState(137);
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
			setState(140);
			match(BlockLeft);
			setState(142);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==Identifier) {
				{
				setState(141);
				getLine();
				}
			}

			setState(148);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (_la==Comma) {
				{
				{
				setState(144);
				match(Comma);
				setState(145);
				getLine();
				}
				}
				setState(150);
				_errHandler.sync(this);
				_la = _input.LA(1);
			}
			setState(151);
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
			setState(153);
			match(At);
			setState(154);
			match(Export);
			setState(155);
			putBlock();
			setState(157);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==Semicolon) {
				{
				setState(156);
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
			setState(159);
			match(BlockLeft);
			setState(165);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while ((((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << T__0) | (1L << T__1) | (1L << T__3) | (1L << At) | (1L << Var) | (1L << Const))) != 0)) {
				{
				setState(163);
				_errHandler.sync(this);
				switch ( getInterpreter().adaptivePredict(_input,14,_ctx) ) {
				case 1:
					{
					setState(160);
					variableDeclaration();
					}
					break;
				case 2:
					{
					setState(161);
					functionDeclaration();
					}
					break;
				case 3:
					{
					setState(162);
					statement();
					}
					break;
				}
				}
				setState(167);
				_errHandler.sync(this);
				_la = _input.LA(1);
			}
			setState(168);
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
			setState(172);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case T__0:
			case T__1:
			case At:
				enterOuterAlt(_localctx, 1);
				{
				setState(170);
				functionStatement();
				}
				break;
			case T__3:
				enterOuterAlt(_localctx, 2);
				{
				setState(171);
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
		public List<TerminalNode> Identifier() { return getTokens(RayParser.Identifier); }
		public TerminalNode Identifier(int i) {
			return getToken(RayParser.Identifier, i);
		}
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
		public TerminalNode Types() { return getToken(RayParser.Types, 0); }
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
			setState(175);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==At) {
				{
				setState(174);
				functionSuffix();
				}
			}

			setState(177);
			_la = _input.LA(1);
			if ( !(_la==T__0 || _la==T__1) ) {
			_errHandler.recoverInline(this);
			}
			else {
				if ( _input.LA(1)==Token.EOF ) matchedEOF = true;
				_errHandler.reportMatch(this);
				consume();
			}
			setState(178);
			match(Identifier);
			setState(179);
			match(PairLeft);
			setState(188);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==Identifier) {
				{
				setState(180);
				arg();
				setState(185);
				_errHandler.sync(this);
				_la = _input.LA(1);
				while (_la==Comma) {
					{
					{
					setState(181);
					match(Comma);
					setState(182);
					arg();
					}
					}
					setState(187);
					_errHandler.sync(this);
					_la = _input.LA(1);
				}
				}
			}

			setState(190);
			match(PairRight);
			setState(193);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==Colon) {
				{
				setState(191);
				match(Colon);
				setState(192);
				_la = _input.LA(1);
				if ( !(_la==Identifier || _la==Types) ) {
				_errHandler.recoverInline(this);
				}
				else {
					if ( _input.LA(1)==Token.EOF ) matchedEOF = true;
					_errHandler.reportMatch(this);
					consume();
				}
				}
			}

			setState(195);
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
		public List<TerminalNode> Identifier() { return getTokens(RayParser.Identifier); }
		public TerminalNode Identifier(int i) {
			return getToken(RayParser.Identifier, i);
		}
		public TerminalNode Colon() { return getToken(RayParser.Colon, 0); }
		public TerminalNode Types() { return getToken(RayParser.Types, 0); }
		public ArgContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_arg; }
	}

	public final ArgContext arg() throws RecognitionException {
		ArgContext _localctx = new ArgContext(_ctx, getState());
		enterRule(_localctx, 26, RULE_arg);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(197);
			match(Identifier);
			setState(198);
			match(Colon);
			setState(199);
			_la = _input.LA(1);
			if ( !(_la==Identifier || _la==Types) ) {
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

	public static class TypeStatementContext extends ParserRuleContext {
		public List<TerminalNode> Identifier() { return getTokens(RayParser.Identifier); }
		public TerminalNode Identifier(int i) {
			return getToken(RayParser.Identifier, i);
		}
		public TerminalNode Semicolon() { return getToken(RayParser.Semicolon, 0); }
		public TerminalNode Types() { return getToken(RayParser.Types, 0); }
		public TypeStatementContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_typeStatement; }
	}

	public final TypeStatementContext typeStatement() throws RecognitionException {
		TypeStatementContext _localctx = new TypeStatementContext(_ctx, getState());
		enterRule(_localctx, 28, RULE_typeStatement);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(201);
			match(T__3);
			setState(202);
			match(Identifier);
			setState(203);
			match(T__4);
			setState(204);
			_la = _input.LA(1);
			if ( !(_la==Identifier || _la==Types) ) {
			_errHandler.recoverInline(this);
			}
			else {
				if ( _input.LA(1)==Token.EOF ) matchedEOF = true;
				_errHandler.reportMatch(this);
				consume();
			}
			setState(205);
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
			setState(214);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,22,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(207);
				exportStatement();
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(210); 
				_errHandler.sync(this);
				_la = _input.LA(1);
				do {
					{
					{
					setState(208);
					match(At);
					setState(209);
					match(Identifier);
					}
					}
					setState(212); 
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
			setState(216);
			match(At);
			setState(217);
			match(T__5);
			setState(218);
			match(PairLeft);
			setState(219);
			match(StringLiteral);
			setState(220);
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
			setState(222);
			match(If);
			setState(223);
			match(PairLeft);
			setState(224);
			expression(0);
			setState(225);
			match(PairRight);
			setState(226);
			match(BlockLeft);
			setState(227);
			functionLine();
			setState(228);
			match(BlockRight);
			}
			setState(241);
			_errHandler.sync(this);
			_alt = getInterpreter().adaptivePredict(_input,23,_ctx);
			while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
				if ( _alt==1 ) {
					{
					{
					setState(230);
					match(Else);
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
					} 
				}
				setState(243);
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,23,_ctx);
			}
			setState(249);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==Else) {
				{
				setState(244);
				match(Else);
				setState(245);
				match(BlockLeft);
				setState(246);
				functionLine();
				setState(247);
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
			setState(251);
			match(While);
			setState(252);
			match(PairLeft);
			setState(253);
			match(PairRight);
			setState(254);
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
			setState(256);
			match(Match);
			setState(257);
			match(PairLeft);
			setState(258);
			expression(0);
			setState(259);
			match(PairRight);
			setState(260);
			match(BlockLeft);
			setState(273);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (_la==T__6) {
				{
				{
				setState(261);
				match(T__6);
				{
				setState(262);
				_la = _input.LA(1);
				if ( !(((((_la - 75)) & ~0x3f) == 0 && ((1L << (_la - 75)) & ((1L << (Integer - 75)) | (1L << (Float - 75)) | (1L << (StringLiteral - 75)))) != 0)) ) {
				_errHandler.recoverInline(this);
				}
				else {
					if ( _input.LA(1)==Token.EOF ) matchedEOF = true;
					_errHandler.reportMatch(this);
					consume();
				}
				setState(267);
				_errHandler.sync(this);
				_la = _input.LA(1);
				while (_la==Comma) {
					{
					{
					setState(263);
					match(Comma);
					setState(264);
					_la = _input.LA(1);
					if ( !(((((_la - 75)) & ~0x3f) == 0 && ((1L << (_la - 75)) & ((1L << (Integer - 75)) | (1L << (Float - 75)) | (1L << (StringLiteral - 75)))) != 0)) ) {
					_errHandler.recoverInline(this);
					}
					else {
						if ( _input.LA(1)==Token.EOF ) matchedEOF = true;
						_errHandler.reportMatch(this);
						consume();
					}
					}
					}
					setState(269);
					_errHandler.sync(this);
					_la = _input.LA(1);
				}
				}
				setState(270);
				functionBlock();
				}
				}
				setState(275);
				_errHandler.sync(this);
				_la = _input.LA(1);
			}
			setState(278);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==Else) {
				{
				setState(276);
				match(Else);
				setState(277);
				functionBlock();
				}
			}

			setState(280);
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
			setState(282);
			match(For);
			setState(283);
			match(PairLeft);
			setState(285);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if ((((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << At) | (1L << Var) | (1L << Const))) != 0)) {
				{
				setState(284);
				variableDeclaration();
				}
			}

			setState(287);
			match(Semicolon);
			setState(289);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (((((_la - 25)) & ~0x3f) == 0 && ((1L << (_la - 25)) & ((1L << (Not - 25)) | (1L << (Reverse - 25)) | (1L << (PairLeft - 25)) | (1L << (Identifier - 25)) | (1L << (SelfPlus - 25)) | (1L << (SelfMinus - 25)) | (1L << (Integer - 25)) | (1L << (Float - 25)) | (1L << (StringLiteral - 25)))) != 0)) {
				{
				setState(288);
				expression(0);
				}
			}

			setState(291);
			match(Semicolon);
			setState(293);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (((((_la - 25)) & ~0x3f) == 0 && ((1L << (_la - 25)) & ((1L << (Not - 25)) | (1L << (Reverse - 25)) | (1L << (PairLeft - 25)) | (1L << (Identifier - 25)) | (1L << (SelfPlus - 25)) | (1L << (SelfMinus - 25)) | (1L << (Integer - 25)) | (1L << (Float - 25)) | (1L << (StringLiteral - 25)))) != 0)) {
				{
				setState(292);
				expression(0);
				}
			}

			setState(295);
			match(PairRight);
			setState(296);
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
			setState(298);
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
			setState(300);
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
			setState(302);
			match(Return);
			setState(304);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (((((_la - 25)) & ~0x3f) == 0 && ((1L << (_la - 25)) & ((1L << (Not - 25)) | (1L << (Reverse - 25)) | (1L << (PairLeft - 25)) | (1L << (Identifier - 25)) | (1L << (SelfPlus - 25)) | (1L << (SelfMinus - 25)) | (1L << (Integer - 25)) | (1L << (Float - 25)) | (1L << (StringLiteral - 25)))) != 0)) {
				{
				setState(303);
				expression(0);
				}
			}

			setState(306);
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
			setState(320);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case T__0:
			case T__1:
			case At:
			case Var:
			case Const:
				{
				setState(308);
				declaration();
				}
				break;
			case Not:
			case Reverse:
			case PairLeft:
			case Identifier:
			case SelfPlus:
			case SelfMinus:
			case Integer:
			case Float:
			case StringLiteral:
				{
				setState(309);
				expression(0);
				setState(310);
				match(Semicolon);
				}
				break;
			case If:
				{
				setState(312);
				ifExpression();
				}
				break;
			case While:
				{
				setState(313);
				whileExpression();
				}
				break;
			case Match:
				{
				setState(314);
				matchExpression();
				}
				break;
			case For:
				{
				setState(315);
				forExpression();
				}
				break;
			case T__3:
				{
				setState(316);
				typeStatement();
				}
				break;
			case T__7:
				{
				setState(317);
				breakExpression();
				}
				break;
			case T__8:
				{
				setState(318);
				continueExpression();
				}
				break;
			case Return:
				{
				setState(319);
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
			setState(322);
			match(BlockLeft);
			setState(326);
			_errHandler.sync(this);
			_alt = getInterpreter().adaptivePredict(_input,33,_ctx);
			while ( _alt!=1 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
				if ( _alt==1+1 ) {
					{
					{
					setState(323);
					functionLine();
					}
					} 
				}
				setState(328);
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,33,_ctx);
			}
			setState(329);
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
		public TerminalNode Dot() { return getToken(RayParser.Dot, 0); }
		public FunctionCallContext functionCall() {
			return getRuleContext(FunctionCallContext.class,0);
		}
		public TerminalNode PairLeft() { return getToken(RayParser.PairLeft, 0); }
		public List<ExpressionContext> expression() {
			return getRuleContexts(ExpressionContext.class);
		}
		public ExpressionContext expression(int i) {
			return getRuleContext(ExpressionContext.class,i);
		}
		public TerminalNode PairRight() { return getToken(RayParser.PairRight, 0); }
		public TerminalNode SelfPlus() { return getToken(RayParser.SelfPlus, 0); }
		public TerminalNode SelfMinus() { return getToken(RayParser.SelfMinus, 0); }
		public TerminalNode Not() { return getToken(RayParser.Not, 0); }
		public TerminalNode Reverse() { return getToken(RayParser.Reverse, 0); }
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
			setState(354);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,34,_ctx) ) {
			case 1:
				{
				setState(332);
				match(StringLiteral);
				}
				break;
			case 2:
				{
				setState(333);
				match(Integer);
				}
				break;
			case 3:
				{
				setState(334);
				match(Float);
				}
				break;
			case 4:
				{
				setState(335);
				match(Identifier);
				}
				break;
			case 5:
				{
				setState(336);
				match(Identifier);
				setState(337);
				match(Dot);
				setState(338);
				functionCall();
				}
				break;
			case 6:
				{
				setState(339);
				match(Identifier);
				setState(340);
				match(Dot);
				setState(341);
				match(Identifier);
				}
				break;
			case 7:
				{
				setState(342);
				functionCall();
				}
				break;
			case 8:
				{
				setState(343);
				match(PairLeft);
				setState(344);
				expression(0);
				setState(345);
				match(PairRight);
				}
				break;
			case 9:
				{
				setState(347);
				_la = _input.LA(1);
				if ( !(_la==SelfPlus || _la==SelfMinus) ) {
				_errHandler.recoverInline(this);
				}
				else {
					if ( _input.LA(1)==Token.EOF ) matchedEOF = true;
					_errHandler.reportMatch(this);
					consume();
				}
				setState(348);
				expression(12);
				}
				break;
			case 10:
				{
				setState(349);
				_la = _input.LA(1);
				if ( !(_la==Not || _la==Reverse) ) {
				_errHandler.recoverInline(this);
				}
				else {
					if ( _input.LA(1)==Token.EOF ) matchedEOF = true;
					_errHandler.reportMatch(this);
					consume();
				}
				setState(350);
				expression(2);
				}
				break;
			case 11:
				{
				setState(351);
				match(Identifier);
				setState(352);
				_la = _input.LA(1);
				if ( !((((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << T__4) | (1L << T__12) | (1L << T__13) | (1L << T__14) | (1L << T__15) | (1L << T__16) | (1L << T__17) | (1L << T__18) | (1L << T__19) | (1L << T__20))) != 0)) ) {
				_errHandler.recoverInline(this);
				}
				else {
					if ( _input.LA(1)==Token.EOF ) matchedEOF = true;
					_errHandler.reportMatch(this);
					consume();
				}
				setState(353);
				expression(1);
				}
				break;
			}
			_ctx.stop = _input.LT(-1);
			setState(390);
			_errHandler.sync(this);
			_alt = getInterpreter().adaptivePredict(_input,36,_ctx);
			while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
				if ( _alt==1 ) {
					if ( _parseListeners!=null ) triggerExitRuleEvent();
					_prevctx = _localctx;
					{
					setState(388);
					_errHandler.sync(this);
					switch ( getInterpreter().adaptivePredict(_input,35,_ctx) ) {
					case 1:
						{
						_localctx = new ExpressionContext(_parentctx, _parentState);
						pushNewRecursionContext(_localctx, _startState, RULE_expression);
						setState(356);
						if (!(precpred(_ctx, 11))) throw new FailedPredicateException(this, "precpred(_ctx, 11)");
						setState(357);
						_la = _input.LA(1);
						if ( !(_la==MoveRight || _la==MoveLeft) ) {
						_errHandler.recoverInline(this);
						}
						else {
							if ( _input.LA(1)==Token.EOF ) matchedEOF = true;
							_errHandler.reportMatch(this);
							consume();
						}
						setState(358);
						expression(12);
						}
						break;
					case 2:
						{
						_localctx = new ExpressionContext(_parentctx, _parentState);
						pushNewRecursionContext(_localctx, _startState, RULE_expression);
						setState(359);
						if (!(precpred(_ctx, 10))) throw new FailedPredicateException(this, "precpred(_ctx, 10)");
						setState(360);
						_la = _input.LA(1);
						if ( !((((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << Less) | (1L << More) | (1L << Equal) | (1L << NotEqual) | (1L << LessEqual) | (1L << MoreEqual))) != 0)) ) {
						_errHandler.recoverInline(this);
						}
						else {
							if ( _input.LA(1)==Token.EOF ) matchedEOF = true;
							_errHandler.reportMatch(this);
							consume();
						}
						setState(361);
						expression(11);
						}
						break;
					case 3:
						{
						_localctx = new ExpressionContext(_parentctx, _parentState);
						pushNewRecursionContext(_localctx, _startState, RULE_expression);
						setState(362);
						if (!(precpred(_ctx, 9))) throw new FailedPredicateException(this, "precpred(_ctx, 9)");
						setState(363);
						_la = _input.LA(1);
						if ( !(_la==And || _la==Or) ) {
						_errHandler.recoverInline(this);
						}
						else {
							if ( _input.LA(1)==Token.EOF ) matchedEOF = true;
							_errHandler.reportMatch(this);
							consume();
						}
						setState(364);
						expression(10);
						}
						break;
					case 4:
						{
						_localctx = new ExpressionContext(_parentctx, _parentState);
						pushNewRecursionContext(_localctx, _startState, RULE_expression);
						setState(365);
						if (!(precpred(_ctx, 8))) throw new FailedPredicateException(this, "precpred(_ctx, 8)");
						setState(366);
						match(Xor);
						setState(367);
						expression(8);
						}
						break;
					case 5:
						{
						_localctx = new ExpressionContext(_parentctx, _parentState);
						pushNewRecursionContext(_localctx, _startState, RULE_expression);
						setState(368);
						if (!(precpred(_ctx, 7))) throw new FailedPredicateException(this, "precpred(_ctx, 7)");
						setState(369);
						_la = _input.LA(1);
						if ( !(_la==T__9 || _la==T__10) ) {
						_errHandler.recoverInline(this);
						}
						else {
							if ( _input.LA(1)==Token.EOF ) matchedEOF = true;
							_errHandler.reportMatch(this);
							consume();
						}
						setState(370);
						expression(8);
						}
						break;
					case 6:
						{
						_localctx = new ExpressionContext(_parentctx, _parentState);
						pushNewRecursionContext(_localctx, _startState, RULE_expression);
						setState(371);
						if (!(precpred(_ctx, 6))) throw new FailedPredicateException(this, "precpred(_ctx, 6)");
						setState(372);
						match(T__11);
						setState(373);
						expression(0);
						setState(374);
						match(Colon);
						setState(375);
						expression(7);
						}
						break;
					case 7:
						{
						_localctx = new ExpressionContext(_parentctx, _parentState);
						pushNewRecursionContext(_localctx, _startState, RULE_expression);
						setState(377);
						if (!(precpred(_ctx, 5))) throw new FailedPredicateException(this, "precpred(_ctx, 5)");
						setState(378);
						match(Pow);
						setState(379);
						expression(5);
						}
						break;
					case 8:
						{
						_localctx = new ExpressionContext(_parentctx, _parentState);
						pushNewRecursionContext(_localctx, _startState, RULE_expression);
						setState(380);
						if (!(precpred(_ctx, 4))) throw new FailedPredicateException(this, "precpred(_ctx, 4)");
						setState(381);
						_la = _input.LA(1);
						if ( !(_la==Multiply || _la==Divide) ) {
						_errHandler.recoverInline(this);
						}
						else {
							if ( _input.LA(1)==Token.EOF ) matchedEOF = true;
							_errHandler.reportMatch(this);
							consume();
						}
						setState(382);
						expression(5);
						}
						break;
					case 9:
						{
						_localctx = new ExpressionContext(_parentctx, _parentState);
						pushNewRecursionContext(_localctx, _startState, RULE_expression);
						setState(383);
						if (!(precpred(_ctx, 3))) throw new FailedPredicateException(this, "precpred(_ctx, 3)");
						setState(384);
						_la = _input.LA(1);
						if ( !(_la==Plus || _la==Minus) ) {
						_errHandler.recoverInline(this);
						}
						else {
							if ( _input.LA(1)==Token.EOF ) matchedEOF = true;
							_errHandler.reportMatch(this);
							consume();
						}
						setState(385);
						expression(4);
						}
						break;
					case 10:
						{
						_localctx = new ExpressionContext(_parentctx, _parentState);
						pushNewRecursionContext(_localctx, _startState, RULE_expression);
						setState(386);
						if (!(precpred(_ctx, 13))) throw new FailedPredicateException(this, "precpred(_ctx, 13)");
						setState(387);
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
				setState(392);
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,36,_ctx);
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
			setState(393);
			match(Identifier);
			setState(394);
			match(PairLeft);
			setState(403);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (((((_la - 25)) & ~0x3f) == 0 && ((1L << (_la - 25)) & ((1L << (Not - 25)) | (1L << (Reverse - 25)) | (1L << (PairLeft - 25)) | (1L << (Identifier - 25)) | (1L << (SelfPlus - 25)) | (1L << (SelfMinus - 25)) | (1L << (Integer - 25)) | (1L << (Float - 25)) | (1L << (StringLiteral - 25)))) != 0)) {
				{
				setState(395);
				expression(0);
				setState(400);
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,37,_ctx);
				while ( _alt!=1 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
					if ( _alt==1+1 ) {
						{
						{
						setState(396);
						match(Comma);
						setState(397);
						expression(0);
						}
						} 
					}
					setState(402);
					_errHandler.sync(this);
					_alt = getInterpreter().adaptivePredict(_input,37,_ctx);
				}
				}
			}

			setState(405);
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
			return precpred(_ctx, 11);
		case 1:
			return precpred(_ctx, 10);
		case 2:
			return precpred(_ctx, 9);
		case 3:
			return precpred(_ctx, 8);
		case 4:
			return precpred(_ctx, 7);
		case 5:
			return precpred(_ctx, 6);
		case 6:
			return precpred(_ctx, 5);
		case 7:
			return precpred(_ctx, 4);
		case 8:
			return precpred(_ctx, 3);
		case 9:
			return precpred(_ctx, 13);
		}
		return true;
	}

	public static final String _serializedATN =
		"\3\u608b\ua72a\u8133\ub9ed\u417c\u3be7\u7786\u5964\3O\u019a\4\2\t\2\4"+
		"\3\t\3\4\4\t\4\4\5\t\5\4\6\t\6\4\7\t\7\4\b\t\b\4\t\t\t\4\n\t\n\4\13\t"+
		"\13\4\f\t\f\4\r\t\r\4\16\t\16\4\17\t\17\4\20\t\20\4\21\t\21\4\22\t\22"+
		"\4\23\t\23\4\24\t\24\4\25\t\25\4\26\t\26\4\27\t\27\4\30\t\30\4\31\t\31"+
		"\4\32\t\32\4\33\t\33\4\34\t\34\4\35\t\35\3\2\3\2\3\2\7\2>\n\2\f\2\16\2"+
		"A\13\2\3\2\3\2\3\3\3\3\3\3\3\3\3\3\5\3J\n\3\3\4\5\4M\n\4\3\4\3\4\3\4\3"+
		"\4\3\4\3\4\5\4U\n\4\3\4\3\4\3\5\3\5\3\5\3\5\3\5\3\5\3\5\3\6\3\6\5\6b\n"+
		"\6\3\6\3\6\3\6\3\6\3\6\3\6\7\6j\n\6\f\6\16\6m\13\6\5\6o\n\6\3\6\3\6\3"+
		"\6\5\6t\n\6\3\6\3\6\3\7\3\7\3\7\3\7\3\7\3\7\3\7\3\7\3\b\3\b\3\b\3\b\3"+
		"\b\3\b\5\b\u0086\n\b\3\b\3\b\3\t\3\t\3\t\5\t\u008d\n\t\3\n\3\n\5\n\u0091"+
		"\n\n\3\n\3\n\7\n\u0095\n\n\f\n\16\n\u0098\13\n\3\n\3\n\3\13\3\13\3\13"+
		"\3\13\5\13\u00a0\n\13\3\f\3\f\3\f\3\f\7\f\u00a6\n\f\f\f\16\f\u00a9\13"+
		"\f\3\f\3\f\3\r\3\r\5\r\u00af\n\r\3\16\5\16\u00b2\n\16\3\16\3\16\3\16\3"+
		"\16\3\16\3\16\7\16\u00ba\n\16\f\16\16\16\u00bd\13\16\5\16\u00bf\n\16\3"+
		"\16\3\16\3\16\5\16\u00c4\n\16\3\16\3\16\3\17\3\17\3\17\3\17\3\20\3\20"+
		"\3\20\3\20\3\20\3\20\3\21\3\21\3\21\6\21\u00d5\n\21\r\21\16\21\u00d6\5"+
		"\21\u00d9\n\21\3\22\3\22\3\22\3\22\3\22\3\22\3\23\3\23\3\23\3\23\3\23"+
		"\3\23\3\23\3\23\3\23\3\23\3\23\3\23\3\23\3\23\3\23\3\23\3\23\7\23\u00f2"+
		"\n\23\f\23\16\23\u00f5\13\23\3\23\3\23\3\23\3\23\3\23\5\23\u00fc\n\23"+
		"\3\24\3\24\3\24\3\24\3\24\3\25\3\25\3\25\3\25\3\25\3\25\3\25\3\25\3\25"+
		"\7\25\u010c\n\25\f\25\16\25\u010f\13\25\3\25\7\25\u0112\n\25\f\25\16\25"+
		"\u0115\13\25\3\25\3\25\5\25\u0119\n\25\3\25\3\25\3\26\3\26\3\26\5\26\u0120"+
		"\n\26\3\26\3\26\5\26\u0124\n\26\3\26\3\26\5\26\u0128\n\26\3\26\3\26\3"+
		"\26\3\27\3\27\3\30\3\30\3\31\3\31\5\31\u0133\n\31\3\31\3\31\3\32\3\32"+
		"\3\32\3\32\3\32\3\32\3\32\3\32\3\32\3\32\3\32\3\32\5\32\u0143\n\32\3\33"+
		"\3\33\7\33\u0147\n\33\f\33\16\33\u014a\13\33\3\33\3\33\3\34\3\34\3\34"+
		"\3\34\3\34\3\34\3\34\3\34\3\34\3\34\3\34\3\34\3\34\3\34\3\34\3\34\3\34"+
		"\3\34\3\34\3\34\3\34\3\34\3\34\5\34\u0165\n\34\3\34\3\34\3\34\3\34\3\34"+
		"\3\34\3\34\3\34\3\34\3\34\3\34\3\34\3\34\3\34\3\34\3\34\3\34\3\34\3\34"+
		"\3\34\3\34\3\34\3\34\3\34\3\34\3\34\3\34\3\34\3\34\3\34\3\34\3\34\7\34"+
		"\u0187\n\34\f\34\16\34\u018a\13\34\3\35\3\35\3\35\3\35\3\35\7\35\u0191"+
		"\n\35\f\35\16\35\u0194\13\35\5\35\u0196\n\35\3\35\3\35\3\35\5?\u0148\u0192"+
		"\3\66\36\2\4\6\b\n\f\16\20\22\24\26\30\32\34\36 \"$&(*,.\60\62\64\668"+
		"\2\17\3\2<=\4\2DDLL\3\2\3\4\3\2MO\3\2IJ\4\2\33\33\35\35\4\2\7\7\17\27"+
		"\3\2./\4\2,-\62\65\4\2\31\31\34\34\3\2\f\r\3\2GH\3\2EF\2\u01c3\2?\3\2"+
		"\2\2\4I\3\2\2\2\6L\3\2\2\2\bX\3\2\2\2\na\3\2\2\2\fw\3\2\2\2\16\177\3\2"+
		"\2\2\20\u0089\3\2\2\2\22\u008e\3\2\2\2\24\u009b\3\2\2\2\26\u00a1\3\2\2"+
		"\2\30\u00ae\3\2\2\2\32\u00b1\3\2\2\2\34\u00c7\3\2\2\2\36\u00cb\3\2\2\2"+
		" \u00d8\3\2\2\2\"\u00da\3\2\2\2$\u00e0\3\2\2\2&\u00fd\3\2\2\2(\u0102\3"+
		"\2\2\2*\u011c\3\2\2\2,\u012c\3\2\2\2.\u012e\3\2\2\2\60\u0130\3\2\2\2\62"+
		"\u0142\3\2\2\2\64\u0144\3\2\2\2\66\u0164\3\2\2\28\u018b\3\2\2\2:>\5\4"+
		"\3\2;>\5\30\r\2<>\5\66\34\2=:\3\2\2\2=;\3\2\2\2=<\3\2\2\2>A\3\2\2\2?@"+
		"\3\2\2\2?=\3\2\2\2@B\3\2\2\2A?\3\2\2\2BC\7\2\2\3C\3\3\2\2\2DJ\5\6\4\2"+
		"EJ\5\b\5\2FJ\5\n\6\2GJ\5\16\b\2HJ\5\24\13\2ID\3\2\2\2IE\3\2\2\2IF\3\2"+
		"\2\2IG\3\2\2\2IH\3\2\2\2J\5\3\2\2\2KM\5\"\22\2LK\3\2\2\2LM\3\2\2\2MN\3"+
		"\2\2\2NO\t\2\2\2OP\7D\2\2PQ\7 \2\2QT\t\3\2\2RS\7\36\2\2SU\5\66\34\2TR"+
		"\3\2\2\2TU\3\2\2\2UV\3\2\2\2VW\7*\2\2W\7\3\2\2\2XY\5\f\7\2YZ\t\2\2\2Z"+
		"[\7D\2\2[\\\7 \2\2\\]\t\3\2\2]^\7*\2\2^\t\3\2\2\2_b\5 \21\2`b\5\f\7\2"+
		"a_\3\2\2\2a`\3\2\2\2ab\3\2\2\2bc\3\2\2\2cd\t\4\2\2de\7D\2\2en\7%\2\2f"+
		"k\5\34\17\2gh\7+\2\2hj\5\34\17\2ig\3\2\2\2jm\3\2\2\2ki\3\2\2\2kl\3\2\2"+
		"\2lo\3\2\2\2mk\3\2\2\2nf\3\2\2\2no\3\2\2\2op\3\2\2\2ps\7&\2\2qr\7 \2\2"+
		"rt\t\3\2\2sq\3\2\2\2st\3\2\2\2tu\3\2\2\2uv\7*\2\2v\13\3\2\2\2wx\7)\2\2"+
		"xy\7\5\2\2yz\7%\2\2z{\7O\2\2{|\7+\2\2|}\7O\2\2}~\7&\2\2~\r\3\2\2\2\177"+
		"\u0080\7)\2\2\u0080\u0081\78\2\2\u0081\u0082\7D\2\2\u0082\u0085\7:\2\2"+
		"\u0083\u0086\5\22\n\2\u0084\u0086\7D\2\2\u0085\u0083\3\2\2\2\u0085\u0084"+
		"\3\2\2\2\u0086\u0087\3\2\2\2\u0087\u0088\7*\2\2\u0088\17\3\2\2\2\u0089"+
		"\u008c\7D\2\2\u008a\u008b\7:\2\2\u008b\u008d\7D\2\2\u008c\u008a\3\2\2"+
		"\2\u008c\u008d\3\2\2\2\u008d\21\3\2\2\2\u008e\u0090\7#\2\2\u008f\u0091"+
		"\5\20\t\2\u0090\u008f\3\2\2\2\u0090\u0091\3\2\2\2\u0091\u0096\3\2\2\2"+
		"\u0092\u0093\7+\2\2\u0093\u0095\5\20\t\2\u0094\u0092\3\2\2\2\u0095\u0098"+
		"\3\2\2\2\u0096\u0094\3\2\2\2\u0096\u0097\3\2\2\2\u0097\u0099\3\2\2\2\u0098"+
		"\u0096\3\2\2\2\u0099\u009a\7$\2\2\u009a\23\3\2\2\2\u009b\u009c\7)\2\2"+
		"\u009c\u009d\79\2\2\u009d\u009f\5\26\f\2\u009e\u00a0\7*\2\2\u009f\u009e"+
		"\3\2\2\2\u009f\u00a0\3\2\2\2\u00a0\25\3\2\2\2\u00a1\u00a7\7#\2\2\u00a2"+
		"\u00a6\5\6\4\2\u00a3\u00a6\5\n\6\2\u00a4\u00a6\5\30\r\2\u00a5\u00a2\3"+
		"\2\2\2\u00a5\u00a3\3\2\2\2\u00a5\u00a4\3\2\2\2\u00a6\u00a9\3\2\2\2\u00a7"+
		"\u00a5\3\2\2\2\u00a7\u00a8\3\2\2\2\u00a8\u00aa\3\2\2\2\u00a9\u00a7\3\2"+
		"\2\2\u00aa\u00ab\7$\2\2\u00ab\27\3\2\2\2\u00ac\u00af\5\32\16\2\u00ad\u00af"+
		"\5\36\20\2\u00ae\u00ac\3\2\2\2\u00ae\u00ad\3\2\2\2\u00af\31\3\2\2\2\u00b0"+
		"\u00b2\5 \21\2\u00b1\u00b0\3\2\2\2\u00b1\u00b2\3\2\2\2\u00b2\u00b3\3\2"+
		"\2\2\u00b3\u00b4\t\4\2\2\u00b4\u00b5\7D\2\2\u00b5\u00be\7%\2\2\u00b6\u00bb"+
		"\5\34\17\2\u00b7\u00b8\7+\2\2\u00b8\u00ba\5\34\17\2\u00b9\u00b7\3\2\2"+
		"\2\u00ba\u00bd\3\2\2\2\u00bb\u00b9\3\2\2\2\u00bb\u00bc\3\2\2\2\u00bc\u00bf"+
		"\3\2\2\2\u00bd\u00bb\3\2\2\2\u00be\u00b6\3\2\2\2\u00be\u00bf\3\2\2\2\u00bf"+
		"\u00c0\3\2\2\2\u00c0\u00c3\7&\2\2\u00c1\u00c2\7 \2\2\u00c2\u00c4\t\3\2"+
		"\2\u00c3\u00c1\3\2\2\2\u00c3\u00c4\3\2\2\2\u00c4\u00c5\3\2\2\2\u00c5\u00c6"+
		"\5\64\33\2\u00c6\33\3\2\2\2\u00c7\u00c8\7D\2\2\u00c8\u00c9\7 \2\2\u00c9"+
		"\u00ca\t\3\2\2\u00ca\35\3\2\2\2\u00cb\u00cc\7\6\2\2\u00cc\u00cd\7D\2\2"+
		"\u00cd\u00ce\7\7\2\2\u00ce\u00cf\t\3\2\2\u00cf\u00d0\7*\2\2\u00d0\37\3"+
		"\2\2\2\u00d1\u00d9\5\"\22\2\u00d2\u00d3\7)\2\2\u00d3\u00d5\7D\2\2\u00d4"+
		"\u00d2\3\2\2\2\u00d5\u00d6\3\2\2\2\u00d6\u00d4\3\2\2\2\u00d6\u00d7\3\2"+
		"\2\2\u00d7\u00d9\3\2\2\2\u00d8\u00d1\3\2\2\2\u00d8\u00d4\3\2\2\2\u00d9"+
		"!\3\2\2\2\u00da\u00db\7)\2\2\u00db\u00dc\7\b\2\2\u00dc\u00dd\7%\2\2\u00dd"+
		"\u00de\7O\2\2\u00de\u00df\7&\2\2\u00df#\3\2\2\2\u00e0\u00e1\7>\2\2\u00e1"+
		"\u00e2\7%\2\2\u00e2\u00e3\5\66\34\2\u00e3\u00e4\7&\2\2\u00e4\u00e5\7#"+
		"\2\2\u00e5\u00e6\5\62\32\2\u00e6\u00e7\7$\2\2\u00e7\u00f3\3\2\2\2\u00e8"+
		"\u00e9\7?\2\2\u00e9\u00ea\7>\2\2\u00ea\u00eb\7%\2\2\u00eb\u00ec\5\66\34"+
		"\2\u00ec\u00ed\7&\2\2\u00ed\u00ee\7#\2\2\u00ee\u00ef\5\62\32\2\u00ef\u00f0"+
		"\7$\2\2\u00f0\u00f2\3\2\2\2\u00f1\u00e8\3\2\2\2\u00f2\u00f5\3\2\2\2\u00f3"+
		"\u00f1\3\2\2\2\u00f3\u00f4\3\2\2\2\u00f4\u00fb\3\2\2\2\u00f5\u00f3\3\2"+
		"\2\2\u00f6\u00f7\7?\2\2\u00f7\u00f8\7#\2\2\u00f8\u00f9\5\62\32\2\u00f9"+
		"\u00fa\7$\2\2\u00fa\u00fc\3\2\2\2\u00fb\u00f6\3\2\2\2\u00fb\u00fc\3\2"+
		"\2\2\u00fc%\3\2\2\2\u00fd\u00fe\7B\2\2\u00fe\u00ff\7%\2\2\u00ff\u0100"+
		"\7&\2\2\u0100\u0101\5\64\33\2\u0101\'\3\2\2\2\u0102\u0103\7@\2\2\u0103"+
		"\u0104\7%\2\2\u0104\u0105\5\66\34\2\u0105\u0106\7&\2\2\u0106\u0113\7#"+
		"\2\2\u0107\u0108\7\t\2\2\u0108\u010d\t\5\2\2\u0109\u010a\7+\2\2\u010a"+
		"\u010c\t\5\2\2\u010b\u0109\3\2\2\2\u010c\u010f\3\2\2\2\u010d\u010b\3\2"+
		"\2\2\u010d\u010e\3\2\2\2\u010e\u0110\3\2\2\2\u010f\u010d\3\2\2\2\u0110"+
		"\u0112\5\64\33\2\u0111\u0107\3\2\2\2\u0112\u0115\3\2\2\2\u0113\u0111\3"+
		"\2\2\2\u0113\u0114\3\2\2\2\u0114\u0118\3\2\2\2\u0115\u0113\3\2\2\2\u0116"+
		"\u0117\7?\2\2\u0117\u0119\5\64\33\2\u0118\u0116\3\2\2\2\u0118\u0119\3"+
		"\2\2\2\u0119\u011a\3\2\2\2\u011a\u011b\7$\2\2\u011b)\3\2\2\2\u011c\u011d"+
		"\7A\2\2\u011d\u011f\7%\2\2\u011e\u0120\5\6\4\2\u011f\u011e\3\2\2\2\u011f"+
		"\u0120\3\2\2\2\u0120\u0121\3\2\2\2\u0121\u0123\7*\2\2\u0122\u0124\5\66"+
		"\34\2\u0123\u0122\3\2\2\2\u0123\u0124\3\2\2\2\u0124\u0125\3\2\2\2\u0125"+
		"\u0127\7*\2\2\u0126\u0128\5\66\34\2\u0127\u0126\3\2\2\2\u0127\u0128\3"+
		"\2\2\2\u0128\u0129\3\2\2\2\u0129\u012a\7&\2\2\u012a\u012b\5\64\33\2\u012b"+
		"+\3\2\2\2\u012c\u012d\7\n\2\2\u012d-\3\2\2\2\u012e\u012f\7\13\2\2\u012f"+
		"/\3\2\2\2\u0130\u0132\7C\2\2\u0131\u0133\5\66\34\2\u0132\u0131\3\2\2\2"+
		"\u0132\u0133\3\2\2\2\u0133\u0134\3\2\2\2\u0134\u0135\7*\2\2\u0135\61\3"+
		"\2\2\2\u0136\u0143\5\4\3\2\u0137\u0138\5\66\34\2\u0138\u0139\7*\2\2\u0139"+
		"\u0143\3\2\2\2\u013a\u0143\5$\23\2\u013b\u0143\5&\24\2\u013c\u0143\5("+
		"\25\2\u013d\u0143\5*\26\2\u013e\u0143\5\36\20\2\u013f\u0143\5,\27\2\u0140"+
		"\u0143\5.\30\2\u0141\u0143\5\60\31\2\u0142\u0136\3\2\2\2\u0142\u0137\3"+
		"\2\2\2\u0142\u013a\3\2\2\2\u0142\u013b\3\2\2\2\u0142\u013c\3\2\2\2\u0142"+
		"\u013d\3\2\2\2\u0142\u013e\3\2\2\2\u0142\u013f\3\2\2\2\u0142\u0140\3\2"+
		"\2\2\u0142\u0141\3\2\2\2\u0143\63\3\2\2\2\u0144\u0148\7#\2\2\u0145\u0147"+
		"\5\62\32\2\u0146\u0145\3\2\2\2\u0147\u014a\3\2\2\2\u0148\u0149\3\2\2\2"+
		"\u0148\u0146\3\2\2\2\u0149\u014b\3\2\2\2\u014a\u0148\3\2\2\2\u014b\u014c"+
		"\7$\2\2\u014c\65\3\2\2\2\u014d\u014e\b\34\1\2\u014e\u0165\7O\2\2\u014f"+
		"\u0165\7M\2\2\u0150\u0165\7N\2\2\u0151\u0165\7D\2\2\u0152\u0153\7D\2\2"+
		"\u0153\u0154\7\37\2\2\u0154\u0165\58\35\2\u0155\u0156\7D\2\2\u0156\u0157"+
		"\7\37\2\2\u0157\u0165\7D\2\2\u0158\u0165\58\35\2\u0159\u015a\7%\2\2\u015a"+
		"\u015b\5\66\34\2\u015b\u015c\7&\2\2\u015c\u0165\3\2\2\2\u015d\u015e\t"+
		"\6\2\2\u015e\u0165\5\66\34\16\u015f\u0160\t\7\2\2\u0160\u0165\5\66\34"+
		"\4\u0161\u0162\7D\2\2\u0162\u0163\t\b\2\2\u0163\u0165\5\66\34\3\u0164"+
		"\u014d\3\2\2\2\u0164\u014f\3\2\2\2\u0164\u0150\3\2\2\2\u0164\u0151\3\2"+
		"\2\2\u0164\u0152\3\2\2\2\u0164\u0155\3\2\2\2\u0164\u0158\3\2\2\2\u0164"+
		"\u0159\3\2\2\2\u0164\u015d\3\2\2\2\u0164\u015f\3\2\2\2\u0164\u0161\3\2"+
		"\2\2\u0165\u0188\3\2\2\2\u0166\u0167\f\r\2\2\u0167\u0168\t\t\2\2\u0168"+
		"\u0187\5\66\34\16\u0169\u016a\f\f\2\2\u016a\u016b\t\n\2\2\u016b\u0187"+
		"\5\66\34\r\u016c\u016d\f\13\2\2\u016d\u016e\t\13\2\2\u016e\u0187\5\66"+
		"\34\f\u016f\u0170\f\n\2\2\u0170\u0171\7\32\2\2\u0171\u0187\5\66\34\n\u0172"+
		"\u0173\f\t\2\2\u0173\u0174\t\f\2\2\u0174\u0187\5\66\34\n\u0175\u0176\f"+
		"\b\2\2\u0176\u0177\7\16\2\2\u0177\u0178\5\66\34\2\u0178\u0179\7 \2\2\u0179"+
		"\u017a\5\66\34\t\u017a\u0187\3\2\2\2\u017b\u017c\f\7\2\2\u017c\u017d\7"+
		"K\2\2\u017d\u0187\5\66\34\7\u017e\u017f\f\6\2\2\u017f\u0180\t\r\2\2\u0180"+
		"\u0187\5\66\34\7\u0181\u0182\f\5\2\2\u0182\u0183\t\16\2\2\u0183\u0187"+
		"\5\66\34\6\u0184\u0185\f\17\2\2\u0185\u0187\t\6\2\2\u0186\u0166\3\2\2"+
		"\2\u0186\u0169\3\2\2\2\u0186\u016c\3\2\2\2\u0186\u016f\3\2\2\2\u0186\u0172"+
		"\3\2\2\2\u0186\u0175\3\2\2\2\u0186\u017b\3\2\2\2\u0186\u017e\3\2\2\2\u0186"+
		"\u0181\3\2\2\2\u0186\u0184\3\2\2\2\u0187\u018a\3\2\2\2\u0188\u0186\3\2"+
		"\2\2\u0188\u0189\3\2\2\2\u0189\67\3\2\2\2\u018a\u0188\3\2\2\2\u018b\u018c"+
		"\7D\2\2\u018c\u0195\7%\2\2\u018d\u0192\5\66\34\2\u018e\u018f\7+\2\2\u018f"+
		"\u0191\5\66\34\2\u0190\u018e\3\2\2\2\u0191\u0194\3\2\2\2\u0192\u0193\3"+
		"\2\2\2\u0192\u0190\3\2\2\2\u0193\u0196\3\2\2\2\u0194\u0192\3\2\2\2\u0195"+
		"\u018d\3\2\2\2\u0195\u0196\3\2\2\2\u0196\u0197\3\2\2\2\u0197\u0198\7&"+
		"\2\2\u01989\3\2\2\2)=?ILTakns\u0085\u008c\u0090\u0096\u009f\u00a5\u00a7"+
		"\u00ae\u00b1\u00bb\u00be\u00c3\u00d6\u00d8\u00f3\u00fb\u010d\u0113\u0118"+
		"\u011f\u0123\u0127\u0132\u0142\u0148\u0164\u0186\u0188\u0192\u0195";
	public static final ATN _ATN =
		new ATNDeserializer().deserialize(_serializedATN.toCharArray());
	static {
		_decisionToDFA = new DFA[_ATN.getNumberOfDecisions()];
		for (int i = 0; i < _ATN.getNumberOfDecisions(); i++) {
			_decisionToDFA[i] = new DFA(_ATN.getDecisionState(i), i);
		}
	}
}