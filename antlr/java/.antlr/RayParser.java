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
		T__0=1, T__1=2, T__2=3, T__3=4, T__4=5, T__5=6, Blanks=7, And=8, Xor=9, 
		Not=10, Or=11, Reverse=12, SetEqual=13, Dot=14, Colon=15, MultiLineComment=16, 
		SingleLineComment=17, BlockLeft=18, BlockRight=19, PairLeft=20, PairRight=21, 
		ListLeft=22, ListRight=23, At=24, Semicolon=25, Comma=26, Less=27, More=28, 
		SingleArrow=29, Arrow=30, Equal=31, NotEqual=32, LessEqual=33, MoreEqual=34, 
		SingleQuotation=35, MultiQuotation=36, Import=37, Export=38, Alias=39, 
		Function=40, Var=41, Const=42, If=43, Else=44, Match=45, For=46, While=47, 
		Return=48, Identifier=49, Plus=50, Minus=51, Multiply=52, Divide=53, SlefPlus=54, 
		SelfMinus=55, Pow=56, Types=57, Integer=58, Float=59, StringLiteral=60;
	public static final int
		RULE_start = 0, RULE_declaration = 1, RULE_variableDeclaration = 2, RULE_functionDeclaration = 3, 
		RULE_getDeclaration = 4, RULE_getLine = 5, RULE_getBlock = 6, RULE_putDeclaration = 7, 
		RULE_putBlock = 8, RULE_statement = 9, RULE_functionStatement = 10, RULE_arg = 11, 
		RULE_typeStatement = 12, RULE_ifExpression = 13, RULE_whileExpression = 14, 
		RULE_matchExpression = 15, RULE_forExpression = 16, RULE_functionLine = 17, 
		RULE_functionBlock = 18, RULE_expression = 19, RULE_functionCall = 20;
	private static String[] makeRuleNames() {
		return new String[] {
			"start", "declaration", "variableDeclaration", "functionDeclaration", 
			"getDeclaration", "getLine", "getBlock", "putDeclaration", "putBlock", 
			"statement", "functionStatement", "arg", "typeStatement", "ifExpression", 
			"whileExpression", "matchExpression", "forExpression", "functionLine", 
			"functionBlock", "expression", "functionCall"
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
			setState(47);
			_errHandler.sync(this);
			_alt = getInterpreter().adaptivePredict(_input,1,_ctx);
			while ( _alt!=1 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
				if ( _alt==1+1 ) {
					{
					setState(45);
					_errHandler.sync(this);
					switch ( getInterpreter().adaptivePredict(_input,0,_ctx) ) {
					case 1:
						{
						setState(42);
						declaration();
						}
						break;
					case 2:
						{
						setState(43);
						statement();
						}
						break;
					case 3:
						{
						setState(44);
						expression(0);
						}
						break;
					}
					} 
				}
				setState(49);
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,1,_ctx);
			}
			setState(50);
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
			setState(56);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,2,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(52);
				variableDeclaration();
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(53);
				functionDeclaration();
				}
				break;
			case 3:
				enterOuterAlt(_localctx, 3);
				{
				setState(54);
				getDeclaration();
				}
				break;
			case 4:
				enterOuterAlt(_localctx, 4);
				{
				setState(55);
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
			setState(58);
			_la = _input.LA(1);
			if ( !(_la==Var || _la==Const) ) {
			_errHandler.recoverInline(this);
			}
			else {
				if ( _input.LA(1)==Token.EOF ) matchedEOF = true;
				_errHandler.reportMatch(this);
				consume();
			}
			setState(59);
			match(Identifier);
			setState(60);
			match(Colon);
			setState(61);
			_la = _input.LA(1);
			if ( !(_la==Identifier || _la==Types) ) {
			_errHandler.recoverInline(this);
			}
			else {
				if ( _input.LA(1)==Token.EOF ) matchedEOF = true;
				_errHandler.reportMatch(this);
				consume();
			}
			setState(64);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==SetEqual) {
				{
				setState(62);
				match(SetEqual);
				setState(63);
				expression(0);
				}
			}

			setState(66);
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
		enterRule(_localctx, 6, RULE_functionDeclaration);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(68);
			_la = _input.LA(1);
			if ( !(_la==T__0 || _la==T__1) ) {
			_errHandler.recoverInline(this);
			}
			else {
				if ( _input.LA(1)==Token.EOF ) matchedEOF = true;
				_errHandler.reportMatch(this);
				consume();
			}
			setState(69);
			match(Identifier);
			setState(70);
			match(PairLeft);
			setState(79);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==Identifier) {
				{
				setState(71);
				arg();
				setState(76);
				_errHandler.sync(this);
				_la = _input.LA(1);
				while (_la==Comma) {
					{
					{
					setState(72);
					match(Comma);
					setState(73);
					arg();
					}
					}
					setState(78);
					_errHandler.sync(this);
					_la = _input.LA(1);
				}
				}
			}

			setState(81);
			match(PairRight);
			setState(84);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==Colon) {
				{
				setState(82);
				match(Colon);
				setState(83);
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
		enterRule(_localctx, 8, RULE_getDeclaration);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(88);
			match(At);
			setState(89);
			match(Import);
			setState(90);
			match(Identifier);
			setState(91);
			match(Alias);
			setState(94);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case BlockLeft:
				{
				setState(92);
				getBlock();
				}
				break;
			case Identifier:
				{
				setState(93);
				match(Identifier);
				}
				break;
			default:
				throw new NoViableAltException(this);
			}
			setState(96);
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
		enterRule(_localctx, 10, RULE_getLine);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(98);
			match(Identifier);
			setState(101);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==Alias) {
				{
				setState(99);
				match(Alias);
				setState(100);
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
		enterRule(_localctx, 12, RULE_getBlock);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(103);
			match(BlockLeft);
			setState(105);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==Identifier) {
				{
				setState(104);
				getLine();
				}
			}

			setState(111);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (_la==Comma) {
				{
				{
				setState(107);
				match(Comma);
				setState(108);
				getLine();
				}
				}
				setState(113);
				_errHandler.sync(this);
				_la = _input.LA(1);
			}
			setState(114);
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
		enterRule(_localctx, 14, RULE_putDeclaration);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(116);
			match(At);
			setState(117);
			match(Export);
			setState(118);
			putBlock();
			setState(120);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==Semicolon) {
				{
				setState(119);
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
		enterRule(_localctx, 16, RULE_putBlock);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(122);
			match(BlockLeft);
			setState(128);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while ((((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << T__0) | (1L << T__1) | (1L << T__2) | (1L << Var) | (1L << Const))) != 0)) {
				{
				setState(126);
				_errHandler.sync(this);
				switch ( getInterpreter().adaptivePredict(_input,12,_ctx) ) {
				case 1:
					{
					setState(123);
					variableDeclaration();
					}
					break;
				case 2:
					{
					setState(124);
					functionDeclaration();
					}
					break;
				case 3:
					{
					setState(125);
					statement();
					}
					break;
				}
				}
				setState(130);
				_errHandler.sync(this);
				_la = _input.LA(1);
			}
			setState(131);
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
		enterRule(_localctx, 18, RULE_statement);
		try {
			setState(135);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case T__0:
			case T__1:
				enterOuterAlt(_localctx, 1);
				{
				setState(133);
				functionStatement();
				}
				break;
			case T__2:
				enterOuterAlt(_localctx, 2);
				{
				setState(134);
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
		enterRule(_localctx, 20, RULE_functionStatement);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(137);
			_la = _input.LA(1);
			if ( !(_la==T__0 || _la==T__1) ) {
			_errHandler.recoverInline(this);
			}
			else {
				if ( _input.LA(1)==Token.EOF ) matchedEOF = true;
				_errHandler.reportMatch(this);
				consume();
			}
			setState(138);
			match(Identifier);
			setState(139);
			match(PairLeft);
			setState(148);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==Identifier) {
				{
				setState(140);
				arg();
				setState(145);
				_errHandler.sync(this);
				_la = _input.LA(1);
				while (_la==Comma) {
					{
					{
					setState(141);
					match(Comma);
					setState(142);
					arg();
					}
					}
					setState(147);
					_errHandler.sync(this);
					_la = _input.LA(1);
				}
				}
			}

			setState(150);
			match(PairRight);
			setState(153);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==Colon) {
				{
				setState(151);
				match(Colon);
				setState(152);
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

			setState(155);
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
		enterRule(_localctx, 22, RULE_arg);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(157);
			match(Identifier);
			setState(158);
			match(Colon);
			setState(159);
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
		public TerminalNode SetEqual() { return getToken(RayParser.SetEqual, 0); }
		public TerminalNode Semicolon() { return getToken(RayParser.Semicolon, 0); }
		public TerminalNode Types() { return getToken(RayParser.Types, 0); }
		public TypeStatementContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_typeStatement; }
	}

	public final TypeStatementContext typeStatement() throws RecognitionException {
		TypeStatementContext _localctx = new TypeStatementContext(_ctx, getState());
		enterRule(_localctx, 24, RULE_typeStatement);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(161);
			match(T__2);
			setState(162);
			match(Identifier);
			setState(163);
			match(SetEqual);
			setState(164);
			_la = _input.LA(1);
			if ( !(_la==Identifier || _la==Types) ) {
			_errHandler.recoverInline(this);
			}
			else {
				if ( _input.LA(1)==Token.EOF ) matchedEOF = true;
				_errHandler.reportMatch(this);
				consume();
			}
			setState(165);
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
		enterRule(_localctx, 26, RULE_ifExpression);
		int _la;
		try {
			int _alt;
			enterOuterAlt(_localctx, 1);
			{
			{
			setState(167);
			match(If);
			setState(168);
			match(PairLeft);
			setState(169);
			expression(0);
			setState(170);
			match(PairRight);
			setState(171);
			match(BlockLeft);
			setState(172);
			functionLine();
			setState(173);
			match(BlockRight);
			}
			setState(186);
			_errHandler.sync(this);
			_alt = getInterpreter().adaptivePredict(_input,18,_ctx);
			while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
				if ( _alt==1 ) {
					{
					{
					setState(175);
					match(Else);
					setState(176);
					match(If);
					setState(177);
					match(PairLeft);
					setState(178);
					expression(0);
					setState(179);
					match(PairRight);
					setState(180);
					match(BlockLeft);
					setState(181);
					functionLine();
					setState(182);
					match(BlockRight);
					}
					} 
				}
				setState(188);
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,18,_ctx);
			}
			setState(194);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==Else) {
				{
				setState(189);
				match(Else);
				setState(190);
				match(BlockLeft);
				setState(191);
				functionLine();
				setState(192);
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
		enterRule(_localctx, 28, RULE_whileExpression);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(196);
			match(While);
			setState(197);
			match(PairLeft);
			setState(198);
			match(PairRight);
			setState(199);
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
		enterRule(_localctx, 30, RULE_matchExpression);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(201);
			match(Match);
			setState(202);
			match(PairLeft);
			setState(203);
			expression(0);
			setState(204);
			match(PairRight);
			setState(205);
			match(BlockLeft);
			setState(218);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (_la==T__3) {
				{
				{
				setState(206);
				match(T__3);
				{
				setState(207);
				_la = _input.LA(1);
				if ( !((((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << Integer) | (1L << Float) | (1L << StringLiteral))) != 0)) ) {
				_errHandler.recoverInline(this);
				}
				else {
					if ( _input.LA(1)==Token.EOF ) matchedEOF = true;
					_errHandler.reportMatch(this);
					consume();
				}
				setState(212);
				_errHandler.sync(this);
				_la = _input.LA(1);
				while (_la==Comma) {
					{
					{
					setState(208);
					match(Comma);
					setState(209);
					_la = _input.LA(1);
					if ( !((((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << Integer) | (1L << Float) | (1L << StringLiteral))) != 0)) ) {
					_errHandler.recoverInline(this);
					}
					else {
						if ( _input.LA(1)==Token.EOF ) matchedEOF = true;
						_errHandler.reportMatch(this);
						consume();
					}
					}
					}
					setState(214);
					_errHandler.sync(this);
					_la = _input.LA(1);
				}
				}
				setState(215);
				functionBlock();
				}
				}
				setState(220);
				_errHandler.sync(this);
				_la = _input.LA(1);
			}
			setState(223);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==Else) {
				{
				setState(221);
				match(Else);
				setState(222);
				functionBlock();
				}
			}

			setState(225);
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
		enterRule(_localctx, 32, RULE_forExpression);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(227);
			match(For);
			setState(228);
			match(PairLeft);
			setState(230);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==Var || _la==Const) {
				{
				setState(229);
				variableDeclaration();
				}
			}

			setState(232);
			match(Semicolon);
			setState(234);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if ((((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << Not) | (1L << Reverse) | (1L << PairLeft) | (1L << Identifier) | (1L << SlefPlus) | (1L << SelfMinus) | (1L << Integer) | (1L << Float) | (1L << StringLiteral))) != 0)) {
				{
				setState(233);
				expression(0);
				}
			}

			setState(236);
			match(Semicolon);
			setState(238);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if ((((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << Not) | (1L << Reverse) | (1L << PairLeft) | (1L << Identifier) | (1L << SlefPlus) | (1L << SelfMinus) | (1L << Integer) | (1L << Float) | (1L << StringLiteral))) != 0)) {
				{
				setState(237);
				expression(0);
				}
			}

			setState(240);
			match(PairRight);
			setState(241);
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
		public TerminalNode Return() { return getToken(RayParser.Return, 0); }
		public FunctionLineContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_functionLine; }
	}

	public final FunctionLineContext functionLine() throws RecognitionException {
		FunctionLineContext _localctx = new FunctionLineContext(_ctx, getState());
		enterRule(_localctx, 34, RULE_functionLine);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(254);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case T__0:
			case T__1:
			case At:
			case Var:
			case Const:
				{
				setState(243);
				declaration();
				}
				break;
			case Not:
			case Reverse:
			case PairLeft:
			case Return:
			case Identifier:
			case SlefPlus:
			case SelfMinus:
			case Integer:
			case Float:
			case StringLiteral:
				{
				setState(245);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==Return) {
					{
					setState(244);
					match(Return);
					}
				}

				setState(247);
				expression(0);
				setState(248);
				match(Semicolon);
				}
				break;
			case If:
				{
				setState(250);
				ifExpression();
				}
				break;
			case While:
				{
				setState(251);
				whileExpression();
				}
				break;
			case Match:
				{
				setState(252);
				matchExpression();
				}
				break;
			case For:
				{
				setState(253);
				forExpression();
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
		enterRule(_localctx, 36, RULE_functionBlock);
		try {
			int _alt;
			enterOuterAlt(_localctx, 1);
			{
			setState(256);
			match(BlockLeft);
			setState(260);
			_errHandler.sync(this);
			_alt = getInterpreter().adaptivePredict(_input,28,_ctx);
			while ( _alt!=1 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
				if ( _alt==1+1 ) {
					{
					{
					setState(257);
					functionLine();
					}
					} 
				}
				setState(262);
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,28,_ctx);
			}
			setState(263);
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
		public TerminalNode SetEqual() { return getToken(RayParser.SetEqual, 0); }
		public List<ExpressionContext> expression() {
			return getRuleContexts(ExpressionContext.class);
		}
		public ExpressionContext expression(int i) {
			return getRuleContext(ExpressionContext.class,i);
		}
		public TerminalNode Dot() { return getToken(RayParser.Dot, 0); }
		public FunctionCallContext functionCall() {
			return getRuleContext(FunctionCallContext.class,0);
		}
		public TerminalNode SlefPlus() { return getToken(RayParser.SlefPlus, 0); }
		public TerminalNode SelfMinus() { return getToken(RayParser.SelfMinus, 0); }
		public TerminalNode Not() { return getToken(RayParser.Not, 0); }
		public TerminalNode Reverse() { return getToken(RayParser.Reverse, 0); }
		public TerminalNode PairLeft() { return getToken(RayParser.PairLeft, 0); }
		public TerminalNode PairRight() { return getToken(RayParser.PairRight, 0); }
		public TerminalNode More() { return getToken(RayParser.More, 0); }
		public TerminalNode Less() { return getToken(RayParser.Less, 0); }
		public TerminalNode MoreEqual() { return getToken(RayParser.MoreEqual, 0); }
		public TerminalNode LessEqual() { return getToken(RayParser.LessEqual, 0); }
		public TerminalNode Equal() { return getToken(RayParser.Equal, 0); }
		public TerminalNode NotEqual() { return getToken(RayParser.NotEqual, 0); }
		public TerminalNode And() { return getToken(RayParser.And, 0); }
		public TerminalNode Or() { return getToken(RayParser.Or, 0); }
		public TerminalNode Xor() { return getToken(RayParser.Xor, 0); }
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
		int _startState = 38;
		enterRecursionRule(_localctx, 38, RULE_expression, _p);
		int _la;
		try {
			int _alt;
			enterOuterAlt(_localctx, 1);
			{
			setState(288);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,29,_ctx) ) {
			case 1:
				{
				setState(266);
				match(StringLiteral);
				}
				break;
			case 2:
				{
				setState(267);
				match(Integer);
				}
				break;
			case 3:
				{
				setState(268);
				match(Float);
				}
				break;
			case 4:
				{
				setState(269);
				match(Identifier);
				}
				break;
			case 5:
				{
				setState(270);
				match(Identifier);
				setState(271);
				match(SetEqual);
				setState(272);
				expression(15);
				}
				break;
			case 6:
				{
				setState(273);
				match(Identifier);
				setState(274);
				match(Dot);
				setState(275);
				functionCall();
				}
				break;
			case 7:
				{
				setState(276);
				match(Identifier);
				setState(277);
				match(Dot);
				setState(278);
				match(Identifier);
				}
				break;
			case 8:
				{
				setState(279);
				functionCall();
				}
				break;
			case 9:
				{
				setState(280);
				_la = _input.LA(1);
				if ( !(_la==SlefPlus || _la==SelfMinus) ) {
				_errHandler.recoverInline(this);
				}
				else {
					if ( _input.LA(1)==Token.EOF ) matchedEOF = true;
					_errHandler.reportMatch(this);
					consume();
				}
				setState(281);
				expression(9);
				}
				break;
			case 10:
				{
				setState(282);
				_la = _input.LA(1);
				if ( !(_la==Not || _la==Reverse) ) {
				_errHandler.recoverInline(this);
				}
				else {
					if ( _input.LA(1)==Token.EOF ) matchedEOF = true;
					_errHandler.reportMatch(this);
					consume();
				}
				setState(283);
				expression(7);
				}
				break;
			case 11:
				{
				setState(284);
				match(PairLeft);
				setState(285);
				expression(0);
				setState(286);
				match(PairRight);
				}
				break;
			}
			_ctx.stop = _input.LT(-1);
			setState(315);
			_errHandler.sync(this);
			_alt = getInterpreter().adaptivePredict(_input,31,_ctx);
			while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
				if ( _alt==1 ) {
					if ( _parseListeners!=null ) triggerExitRuleEvent();
					_prevctx = _localctx;
					{
					setState(313);
					_errHandler.sync(this);
					switch ( getInterpreter().adaptivePredict(_input,30,_ctx) ) {
					case 1:
						{
						_localctx = new ExpressionContext(_parentctx, _parentState);
						pushNewRecursionContext(_localctx, _startState, RULE_expression);
						setState(290);
						if (!(precpred(_ctx, 14))) throw new FailedPredicateException(this, "precpred(_ctx, 14)");
						setState(291);
						_la = _input.LA(1);
						if ( !((((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << Less) | (1L << More) | (1L << Equal) | (1L << NotEqual) | (1L << LessEqual) | (1L << MoreEqual))) != 0)) ) {
						_errHandler.recoverInline(this);
						}
						else {
							if ( _input.LA(1)==Token.EOF ) matchedEOF = true;
							_errHandler.reportMatch(this);
							consume();
						}
						setState(292);
						expression(15);
						}
						break;
					case 2:
						{
						_localctx = new ExpressionContext(_parentctx, _parentState);
						pushNewRecursionContext(_localctx, _startState, RULE_expression);
						setState(293);
						if (!(precpred(_ctx, 8))) throw new FailedPredicateException(this, "precpred(_ctx, 8)");
						setState(294);
						_la = _input.LA(1);
						if ( !(_la==T__4 || _la==T__5) ) {
						_errHandler.recoverInline(this);
						}
						else {
							if ( _input.LA(1)==Token.EOF ) matchedEOF = true;
							_errHandler.reportMatch(this);
							consume();
						}
						setState(295);
						expression(9);
						}
						break;
					case 3:
						{
						_localctx = new ExpressionContext(_parentctx, _parentState);
						pushNewRecursionContext(_localctx, _startState, RULE_expression);
						setState(296);
						if (!(precpred(_ctx, 6))) throw new FailedPredicateException(this, "precpred(_ctx, 6)");
						setState(297);
						_la = _input.LA(1);
						if ( !(_la==And || _la==Or) ) {
						_errHandler.recoverInline(this);
						}
						else {
							if ( _input.LA(1)==Token.EOF ) matchedEOF = true;
							_errHandler.reportMatch(this);
							consume();
						}
						setState(298);
						expression(7);
						}
						break;
					case 4:
						{
						_localctx = new ExpressionContext(_parentctx, _parentState);
						pushNewRecursionContext(_localctx, _startState, RULE_expression);
						setState(299);
						if (!(precpred(_ctx, 5))) throw new FailedPredicateException(this, "precpred(_ctx, 5)");
						setState(300);
						match(Xor);
						setState(301);
						expression(5);
						}
						break;
					case 5:
						{
						_localctx = new ExpressionContext(_parentctx, _parentState);
						pushNewRecursionContext(_localctx, _startState, RULE_expression);
						setState(302);
						if (!(precpred(_ctx, 4))) throw new FailedPredicateException(this, "precpred(_ctx, 4)");
						setState(303);
						match(Pow);
						setState(304);
						expression(4);
						}
						break;
					case 6:
						{
						_localctx = new ExpressionContext(_parentctx, _parentState);
						pushNewRecursionContext(_localctx, _startState, RULE_expression);
						setState(305);
						if (!(precpred(_ctx, 3))) throw new FailedPredicateException(this, "precpred(_ctx, 3)");
						setState(306);
						_la = _input.LA(1);
						if ( !(_la==Multiply || _la==Divide) ) {
						_errHandler.recoverInline(this);
						}
						else {
							if ( _input.LA(1)==Token.EOF ) matchedEOF = true;
							_errHandler.reportMatch(this);
							consume();
						}
						setState(307);
						expression(4);
						}
						break;
					case 7:
						{
						_localctx = new ExpressionContext(_parentctx, _parentState);
						pushNewRecursionContext(_localctx, _startState, RULE_expression);
						setState(308);
						if (!(precpred(_ctx, 2))) throw new FailedPredicateException(this, "precpred(_ctx, 2)");
						setState(309);
						_la = _input.LA(1);
						if ( !(_la==Plus || _la==Minus) ) {
						_errHandler.recoverInline(this);
						}
						else {
							if ( _input.LA(1)==Token.EOF ) matchedEOF = true;
							_errHandler.reportMatch(this);
							consume();
						}
						setState(310);
						expression(3);
						}
						break;
					case 8:
						{
						_localctx = new ExpressionContext(_parentctx, _parentState);
						pushNewRecursionContext(_localctx, _startState, RULE_expression);
						setState(311);
						if (!(precpred(_ctx, 10))) throw new FailedPredicateException(this, "precpred(_ctx, 10)");
						setState(312);
						_la = _input.LA(1);
						if ( !(_la==SlefPlus || _la==SelfMinus) ) {
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
				setState(317);
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,31,_ctx);
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
		enterRule(_localctx, 40, RULE_functionCall);
		int _la;
		try {
			int _alt;
			enterOuterAlt(_localctx, 1);
			{
			setState(318);
			match(Identifier);
			setState(319);
			match(PairLeft);
			setState(328);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if ((((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << Not) | (1L << Reverse) | (1L << PairLeft) | (1L << Identifier) | (1L << SlefPlus) | (1L << SelfMinus) | (1L << Integer) | (1L << Float) | (1L << StringLiteral))) != 0)) {
				{
				setState(320);
				expression(0);
				setState(325);
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,32,_ctx);
				while ( _alt!=1 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
					if ( _alt==1+1 ) {
						{
						{
						setState(321);
						match(Comma);
						setState(322);
						expression(0);
						}
						} 
					}
					setState(327);
					_errHandler.sync(this);
					_alt = getInterpreter().adaptivePredict(_input,32,_ctx);
				}
				}
			}

			setState(330);
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
		case 19:
			return expression_sempred((ExpressionContext)_localctx, predIndex);
		}
		return true;
	}
	private boolean expression_sempred(ExpressionContext _localctx, int predIndex) {
		switch (predIndex) {
		case 0:
			return precpred(_ctx, 14);
		case 1:
			return precpred(_ctx, 8);
		case 2:
			return precpred(_ctx, 6);
		case 3:
			return precpred(_ctx, 5);
		case 4:
			return precpred(_ctx, 4);
		case 5:
			return precpred(_ctx, 3);
		case 6:
			return precpred(_ctx, 2);
		case 7:
			return precpred(_ctx, 10);
		}
		return true;
	}

	public static final String _serializedATN =
		"\3\u608b\ua72a\u8133\ub9ed\u417c\u3be7\u7786\u5964\3>\u014f\4\2\t\2\4"+
		"\3\t\3\4\4\t\4\4\5\t\5\4\6\t\6\4\7\t\7\4\b\t\b\4\t\t\t\4\n\t\n\4\13\t"+
		"\13\4\f\t\f\4\r\t\r\4\16\t\16\4\17\t\17\4\20\t\20\4\21\t\21\4\22\t\22"+
		"\4\23\t\23\4\24\t\24\4\25\t\25\4\26\t\26\3\2\3\2\3\2\7\2\60\n\2\f\2\16"+
		"\2\63\13\2\3\2\3\2\3\3\3\3\3\3\3\3\5\3;\n\3\3\4\3\4\3\4\3\4\3\4\3\4\5"+
		"\4C\n\4\3\4\3\4\3\5\3\5\3\5\3\5\3\5\3\5\7\5M\n\5\f\5\16\5P\13\5\5\5R\n"+
		"\5\3\5\3\5\3\5\5\5W\n\5\3\5\3\5\3\6\3\6\3\6\3\6\3\6\3\6\5\6a\n\6\3\6\3"+
		"\6\3\7\3\7\3\7\5\7h\n\7\3\b\3\b\5\bl\n\b\3\b\3\b\7\bp\n\b\f\b\16\bs\13"+
		"\b\3\b\3\b\3\t\3\t\3\t\3\t\5\t{\n\t\3\n\3\n\3\n\3\n\7\n\u0081\n\n\f\n"+
		"\16\n\u0084\13\n\3\n\3\n\3\13\3\13\5\13\u008a\n\13\3\f\3\f\3\f\3\f\3\f"+
		"\3\f\7\f\u0092\n\f\f\f\16\f\u0095\13\f\5\f\u0097\n\f\3\f\3\f\3\f\5\f\u009c"+
		"\n\f\3\f\3\f\3\r\3\r\3\r\3\r\3\16\3\16\3\16\3\16\3\16\3\16\3\17\3\17\3"+
		"\17\3\17\3\17\3\17\3\17\3\17\3\17\3\17\3\17\3\17\3\17\3\17\3\17\3\17\3"+
		"\17\7\17\u00bb\n\17\f\17\16\17\u00be\13\17\3\17\3\17\3\17\3\17\3\17\5"+
		"\17\u00c5\n\17\3\20\3\20\3\20\3\20\3\20\3\21\3\21\3\21\3\21\3\21\3\21"+
		"\3\21\3\21\3\21\7\21\u00d5\n\21\f\21\16\21\u00d8\13\21\3\21\7\21\u00db"+
		"\n\21\f\21\16\21\u00de\13\21\3\21\3\21\5\21\u00e2\n\21\3\21\3\21\3\22"+
		"\3\22\3\22\5\22\u00e9\n\22\3\22\3\22\5\22\u00ed\n\22\3\22\3\22\5\22\u00f1"+
		"\n\22\3\22\3\22\3\22\3\23\3\23\5\23\u00f8\n\23\3\23\3\23\3\23\3\23\3\23"+
		"\3\23\3\23\5\23\u0101\n\23\3\24\3\24\7\24\u0105\n\24\f\24\16\24\u0108"+
		"\13\24\3\24\3\24\3\25\3\25\3\25\3\25\3\25\3\25\3\25\3\25\3\25\3\25\3\25"+
		"\3\25\3\25\3\25\3\25\3\25\3\25\3\25\3\25\3\25\3\25\3\25\3\25\5\25\u0123"+
		"\n\25\3\25\3\25\3\25\3\25\3\25\3\25\3\25\3\25\3\25\3\25\3\25\3\25\3\25"+
		"\3\25\3\25\3\25\3\25\3\25\3\25\3\25\3\25\3\25\3\25\7\25\u013c\n\25\f\25"+
		"\16\25\u013f\13\25\3\26\3\26\3\26\3\26\3\26\7\26\u0146\n\26\f\26\16\26"+
		"\u0149\13\26\5\26\u014b\n\26\3\26\3\26\3\26\5\61\u0106\u0147\3(\27\2\4"+
		"\6\b\n\f\16\20\22\24\26\30\32\34\36 \"$&(*\2\r\3\2+,\4\2\63\63;;\3\2\3"+
		"\4\3\2<>\3\289\4\2\f\f\16\16\4\2\35\36!$\3\2\7\b\4\2\n\n\r\r\3\2\66\67"+
		"\3\2\64\65\2\u0172\2\61\3\2\2\2\4:\3\2\2\2\6<\3\2\2\2\bF\3\2\2\2\nZ\3"+
		"\2\2\2\fd\3\2\2\2\16i\3\2\2\2\20v\3\2\2\2\22|\3\2\2\2\24\u0089\3\2\2\2"+
		"\26\u008b\3\2\2\2\30\u009f\3\2\2\2\32\u00a3\3\2\2\2\34\u00a9\3\2\2\2\36"+
		"\u00c6\3\2\2\2 \u00cb\3\2\2\2\"\u00e5\3\2\2\2$\u0100\3\2\2\2&\u0102\3"+
		"\2\2\2(\u0122\3\2\2\2*\u0140\3\2\2\2,\60\5\4\3\2-\60\5\24\13\2.\60\5("+
		"\25\2/,\3\2\2\2/-\3\2\2\2/.\3\2\2\2\60\63\3\2\2\2\61\62\3\2\2\2\61/\3"+
		"\2\2\2\62\64\3\2\2\2\63\61\3\2\2\2\64\65\7\2\2\3\65\3\3\2\2\2\66;\5\6"+
		"\4\2\67;\5\b\5\28;\5\n\6\29;\5\20\t\2:\66\3\2\2\2:\67\3\2\2\2:8\3\2\2"+
		"\2:9\3\2\2\2;\5\3\2\2\2<=\t\2\2\2=>\7\63\2\2>?\7\21\2\2?B\t\3\2\2@A\7"+
		"\17\2\2AC\5(\25\2B@\3\2\2\2BC\3\2\2\2CD\3\2\2\2DE\7\33\2\2E\7\3\2\2\2"+
		"FG\t\4\2\2GH\7\63\2\2HQ\7\26\2\2IN\5\30\r\2JK\7\34\2\2KM\5\30\r\2LJ\3"+
		"\2\2\2MP\3\2\2\2NL\3\2\2\2NO\3\2\2\2OR\3\2\2\2PN\3\2\2\2QI\3\2\2\2QR\3"+
		"\2\2\2RS\3\2\2\2SV\7\27\2\2TU\7\21\2\2UW\t\3\2\2VT\3\2\2\2VW\3\2\2\2W"+
		"X\3\2\2\2XY\7\33\2\2Y\t\3\2\2\2Z[\7\32\2\2[\\\7\'\2\2\\]\7\63\2\2]`\7"+
		")\2\2^a\5\16\b\2_a\7\63\2\2`^\3\2\2\2`_\3\2\2\2ab\3\2\2\2bc\7\33\2\2c"+
		"\13\3\2\2\2dg\7\63\2\2ef\7)\2\2fh\7\63\2\2ge\3\2\2\2gh\3\2\2\2h\r\3\2"+
		"\2\2ik\7\24\2\2jl\5\f\7\2kj\3\2\2\2kl\3\2\2\2lq\3\2\2\2mn\7\34\2\2np\5"+
		"\f\7\2om\3\2\2\2ps\3\2\2\2qo\3\2\2\2qr\3\2\2\2rt\3\2\2\2sq\3\2\2\2tu\7"+
		"\25\2\2u\17\3\2\2\2vw\7\32\2\2wx\7(\2\2xz\5\22\n\2y{\7\33\2\2zy\3\2\2"+
		"\2z{\3\2\2\2{\21\3\2\2\2|\u0082\7\24\2\2}\u0081\5\6\4\2~\u0081\5\b\5\2"+
		"\177\u0081\5\24\13\2\u0080}\3\2\2\2\u0080~\3\2\2\2\u0080\177\3\2\2\2\u0081"+
		"\u0084\3\2\2\2\u0082\u0080\3\2\2\2\u0082\u0083\3\2\2\2\u0083\u0085\3\2"+
		"\2\2\u0084\u0082\3\2\2\2\u0085\u0086\7\25\2\2\u0086\23\3\2\2\2\u0087\u008a"+
		"\5\26\f\2\u0088\u008a\5\32\16\2\u0089\u0087\3\2\2\2\u0089\u0088\3\2\2"+
		"\2\u008a\25\3\2\2\2\u008b\u008c\t\4\2\2\u008c\u008d\7\63\2\2\u008d\u0096"+
		"\7\26\2\2\u008e\u0093\5\30\r\2\u008f\u0090\7\34\2\2\u0090\u0092\5\30\r"+
		"\2\u0091\u008f\3\2\2\2\u0092\u0095\3\2\2\2\u0093\u0091\3\2\2\2\u0093\u0094"+
		"\3\2\2\2\u0094\u0097\3\2\2\2\u0095\u0093\3\2\2\2\u0096\u008e\3\2\2\2\u0096"+
		"\u0097\3\2\2\2\u0097\u0098\3\2\2\2\u0098\u009b\7\27\2\2\u0099\u009a\7"+
		"\21\2\2\u009a\u009c\t\3\2\2\u009b\u0099\3\2\2\2\u009b\u009c\3\2\2\2\u009c"+
		"\u009d\3\2\2\2\u009d\u009e\5&\24\2\u009e\27\3\2\2\2\u009f\u00a0\7\63\2"+
		"\2\u00a0\u00a1\7\21\2\2\u00a1\u00a2\t\3\2\2\u00a2\31\3\2\2\2\u00a3\u00a4"+
		"\7\5\2\2\u00a4\u00a5\7\63\2\2\u00a5\u00a6\7\17\2\2\u00a6\u00a7\t\3\2\2"+
		"\u00a7\u00a8\7\33\2\2\u00a8\33\3\2\2\2\u00a9\u00aa\7-\2\2\u00aa\u00ab"+
		"\7\26\2\2\u00ab\u00ac\5(\25\2\u00ac\u00ad\7\27\2\2\u00ad\u00ae\7\24\2"+
		"\2\u00ae\u00af\5$\23\2\u00af\u00b0\7\25\2\2\u00b0\u00bc\3\2\2\2\u00b1"+
		"\u00b2\7.\2\2\u00b2\u00b3\7-\2\2\u00b3\u00b4\7\26\2\2\u00b4\u00b5\5(\25"+
		"\2\u00b5\u00b6\7\27\2\2\u00b6\u00b7\7\24\2\2\u00b7\u00b8\5$\23\2\u00b8"+
		"\u00b9\7\25\2\2\u00b9\u00bb\3\2\2\2\u00ba\u00b1\3\2\2\2\u00bb\u00be\3"+
		"\2\2\2\u00bc\u00ba\3\2\2\2\u00bc\u00bd\3\2\2\2\u00bd\u00c4\3\2\2\2\u00be"+
		"\u00bc\3\2\2\2\u00bf\u00c0\7.\2\2\u00c0\u00c1\7\24\2\2\u00c1\u00c2\5$"+
		"\23\2\u00c2\u00c3\7\25\2\2\u00c3\u00c5\3\2\2\2\u00c4\u00bf\3\2\2\2\u00c4"+
		"\u00c5\3\2\2\2\u00c5\35\3\2\2\2\u00c6\u00c7\7\61\2\2\u00c7\u00c8\7\26"+
		"\2\2\u00c8\u00c9\7\27\2\2\u00c9\u00ca\5&\24\2\u00ca\37\3\2\2\2\u00cb\u00cc"+
		"\7/\2\2\u00cc\u00cd\7\26\2\2\u00cd\u00ce\5(\25\2\u00ce\u00cf\7\27\2\2"+
		"\u00cf\u00dc\7\24\2\2\u00d0\u00d1\7\6\2\2\u00d1\u00d6\t\5\2\2\u00d2\u00d3"+
		"\7\34\2\2\u00d3\u00d5\t\5\2\2\u00d4\u00d2\3\2\2\2\u00d5\u00d8\3\2\2\2"+
		"\u00d6\u00d4\3\2\2\2\u00d6\u00d7\3\2\2\2\u00d7\u00d9\3\2\2\2\u00d8\u00d6"+
		"\3\2\2\2\u00d9\u00db\5&\24\2\u00da\u00d0\3\2\2\2\u00db\u00de\3\2\2\2\u00dc"+
		"\u00da\3\2\2\2\u00dc\u00dd\3\2\2\2\u00dd\u00e1\3\2\2\2\u00de\u00dc\3\2"+
		"\2\2\u00df\u00e0\7.\2\2\u00e0\u00e2\5&\24\2\u00e1\u00df\3\2\2\2\u00e1"+
		"\u00e2\3\2\2\2\u00e2\u00e3\3\2\2\2\u00e3\u00e4\7\25\2\2\u00e4!\3\2\2\2"+
		"\u00e5\u00e6\7\60\2\2\u00e6\u00e8\7\26\2\2\u00e7\u00e9\5\6\4\2\u00e8\u00e7"+
		"\3\2\2\2\u00e8\u00e9\3\2\2\2\u00e9\u00ea\3\2\2\2\u00ea\u00ec\7\33\2\2"+
		"\u00eb\u00ed\5(\25\2\u00ec\u00eb\3\2\2\2\u00ec\u00ed\3\2\2\2\u00ed\u00ee"+
		"\3\2\2\2\u00ee\u00f0\7\33\2\2\u00ef\u00f1\5(\25\2\u00f0\u00ef\3\2\2\2"+
		"\u00f0\u00f1\3\2\2\2\u00f1\u00f2\3\2\2\2\u00f2\u00f3\7\27\2\2\u00f3\u00f4"+
		"\5&\24\2\u00f4#\3\2\2\2\u00f5\u0101\5\4\3\2\u00f6\u00f8\7\62\2\2\u00f7"+
		"\u00f6\3\2\2\2\u00f7\u00f8\3\2\2\2\u00f8\u00f9\3\2\2\2\u00f9\u00fa\5("+
		"\25\2\u00fa\u00fb\7\33\2\2\u00fb\u0101\3\2\2\2\u00fc\u0101\5\34\17\2\u00fd"+
		"\u0101\5\36\20\2\u00fe\u0101\5 \21\2\u00ff\u0101\5\"\22\2\u0100\u00f5"+
		"\3\2\2\2\u0100\u00f7\3\2\2\2\u0100\u00fc\3\2\2\2\u0100\u00fd\3\2\2\2\u0100"+
		"\u00fe\3\2\2\2\u0100\u00ff\3\2\2\2\u0101%\3\2\2\2\u0102\u0106\7\24\2\2"+
		"\u0103\u0105\5$\23\2\u0104\u0103\3\2\2\2\u0105\u0108\3\2\2\2\u0106\u0107"+
		"\3\2\2\2\u0106\u0104\3\2\2\2\u0107\u0109\3\2\2\2\u0108\u0106\3\2\2\2\u0109"+
		"\u010a\7\25\2\2\u010a\'\3\2\2\2\u010b\u010c\b\25\1\2\u010c\u0123\7>\2"+
		"\2\u010d\u0123\7<\2\2\u010e\u0123\7=\2\2\u010f\u0123\7\63\2\2\u0110\u0111"+
		"\7\63\2\2\u0111\u0112\7\17\2\2\u0112\u0123\5(\25\21\u0113\u0114\7\63\2"+
		"\2\u0114\u0115\7\20\2\2\u0115\u0123\5*\26\2\u0116\u0117\7\63\2\2\u0117"+
		"\u0118\7\20\2\2\u0118\u0123\7\63\2\2\u0119\u0123\5*\26\2\u011a\u011b\t"+
		"\6\2\2\u011b\u0123\5(\25\13\u011c\u011d\t\7\2\2\u011d\u0123\5(\25\t\u011e"+
		"\u011f\7\26\2\2\u011f\u0120\5(\25\2\u0120\u0121\7\27\2\2\u0121\u0123\3"+
		"\2\2\2\u0122\u010b\3\2\2\2\u0122\u010d\3\2\2\2\u0122\u010e\3\2\2\2\u0122"+
		"\u010f\3\2\2\2\u0122\u0110\3\2\2\2\u0122\u0113\3\2\2\2\u0122\u0116\3\2"+
		"\2\2\u0122\u0119\3\2\2\2\u0122\u011a\3\2\2\2\u0122\u011c\3\2\2\2\u0122"+
		"\u011e\3\2\2\2\u0123\u013d\3\2\2\2\u0124\u0125\f\20\2\2\u0125\u0126\t"+
		"\b\2\2\u0126\u013c\5(\25\21\u0127\u0128\f\n\2\2\u0128\u0129\t\t\2\2\u0129"+
		"\u013c\5(\25\13\u012a\u012b\f\b\2\2\u012b\u012c\t\n\2\2\u012c\u013c\5"+
		"(\25\t\u012d\u012e\f\7\2\2\u012e\u012f\7\13\2\2\u012f\u013c\5(\25\7\u0130"+
		"\u0131\f\6\2\2\u0131\u0132\7:\2\2\u0132\u013c\5(\25\6\u0133\u0134\f\5"+
		"\2\2\u0134\u0135\t\13\2\2\u0135\u013c\5(\25\6\u0136\u0137\f\4\2\2\u0137"+
		"\u0138\t\f\2\2\u0138\u013c\5(\25\5\u0139\u013a\f\f\2\2\u013a\u013c\t\6"+
		"\2\2\u013b\u0124\3\2\2\2\u013b\u0127\3\2\2\2\u013b\u012a\3\2\2\2\u013b"+
		"\u012d\3\2\2\2\u013b\u0130\3\2\2\2\u013b\u0133\3\2\2\2\u013b\u0136\3\2"+
		"\2\2\u013b\u0139\3\2\2\2\u013c\u013f\3\2\2\2\u013d\u013b\3\2\2\2\u013d"+
		"\u013e\3\2\2\2\u013e)\3\2\2\2\u013f\u013d\3\2\2\2\u0140\u0141\7\63\2\2"+
		"\u0141\u014a\7\26\2\2\u0142\u0147\5(\25\2\u0143\u0144\7\34\2\2\u0144\u0146"+
		"\5(\25\2\u0145\u0143\3\2\2\2\u0146\u0149\3\2\2\2\u0147\u0148\3\2\2\2\u0147"+
		"\u0145\3\2\2\2\u0148\u014b\3\2\2\2\u0149\u0147\3\2\2\2\u014a\u0142\3\2"+
		"\2\2\u014a\u014b\3\2\2\2\u014b\u014c\3\2\2\2\u014c\u014d\7\27\2\2\u014d"+
		"+\3\2\2\2$/\61:BNQV`gkqz\u0080\u0082\u0089\u0093\u0096\u009b\u00bc\u00c4"+
		"\u00d6\u00dc\u00e1\u00e8\u00ec\u00f0\u00f7\u0100\u0106\u0122\u013b\u013d"+
		"\u0147\u014a";
	public static final ATN _ATN =
		new ATNDeserializer().deserialize(_serializedATN.toCharArray());
	static {
		_decisionToDFA = new DFA[_ATN.getNumberOfDecisions()];
		for (int i = 0; i < _ATN.getNumberOfDecisions(); i++) {
			_decisionToDFA[i] = new DFA(_ATN.getDecisionState(i), i);
		}
	}
}