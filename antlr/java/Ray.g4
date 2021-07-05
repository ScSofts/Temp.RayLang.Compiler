grammar Ray;

options {
}


//Tokens

fragment Space: ' ';
Blanks: ([\n\r\b\t]|Space) -> skip;

And: 		'&';
Xor: 		'^';
Not: 		'!';
Or: 		'|';
Reverse: 	'~';
SetEqual: 	'=';
Dot: 		'.';
Colon: 		':';
MultiLineComment: '/*' .*? '*/' -> skip;
SingleLineComment: '//' .*? [\n] -> skip;
BlockLeft: 		 '{';
BlockRight: 	 '}';
PairLeft: 		 '(';
PairRight: 		 ')';
ListLeft: 		 '[';
ListRight: 		 ']';
At: 			 '@';
Semicolon: 		 ';';
Comma: 			 ',';
Less: 			 '<';
More: 			 '>';
SingleArrow: 	 '->';
Arrow: 			 '=>';
Equal: 			 '==';
NotEqual: 		 '!=';
LessEqual: 		 '<=';
MoreEqual: 		 '>=';
SingleQuotation: '\'';
MultiQuotation:  '"';
Import: 		 'get';
Export: 		 'put';
Alias: 			 'as';
Function: 		 ('function' | 'fn');
Var: 			 'var';
Const: 			 'const';
If: 			 'if';
Else: 			 'else';
Match: 			 'match';
For:			 'for';
While:           'While';
Return:    		 'return';
Identifier: 	 [A-Za-z_$][A-Za-z_0-9$]*;

Plus:       '+';
Minus:      '-';
Multiply:   '*';
Divide:     '/';
SlefPlus:   '++';
SelfMinus:  '--';
Pow:		'**';

fragment OctalDigit:   [0-7];
fragment BinaryConstant:	'0' [bB] [0-1]+;
fragment OctalConstant:   '0' OctalDigit*;
fragment HexadecimalDigit: [0-9a-fA-F];
fragment HexQuad:   HexadecimalDigit HexadecimalDigit HexadecimalDigit HexadecimalDigit;
fragment UniversalCharacterName
    :   '\\u' HexQuad
    |   '\\U' HexQuad HexQuad
    ;

fragment EscapeSequence
    :   SpecialEscapeSequence
    |   OctalEscapeSequence
    |   HexadecimalEscapeSequence
    |   UniversalCharacterName
    ;
fragment SpecialEscapeSequence
    :   '\\' ['"?abfnrtv\\]
    ;
fragment OctalEscapeSequence
    :   '\\' OctalDigit OctalDigit? OctalDigit?
    ;
fragment HexadecimalEscapeSequence
    :   '\\x' HexadecimalDigit+
    ;

fragment IntTypes: ( 'int8' | 'int16' | 'int32' | 'int64' );
fragment FloatTypes: ( 'float' | 'double');
fragment UIntTypes: 'u'IntTypes;
fragment UFloatTypes: 'u'FloatTypes;
fragment StringTypes: ('string');

fragment DecimalConstant :   NonzeroDigit ('_')? (Digit|'_')*;
fragment HexadecimalConstant
    :   HexadecimalPrefix HexadecimalDigit+
    ;

fragment HexadecimalPrefix:   '0' [xX];
fragment Digit:[0-9];
fragment NonzeroDigit:   [1-9];

fragment IntegerSuffix
    :   UnsignedSuffix LongSuffix?
    |   UnsignedSuffix LongLongSuffix
    |   LongSuffix UnsignedSuffix?
    |   LongLongSuffix UnsignedSuffix?
    ;
fragment UnsignedSuffix
    :   [uU]
    ;

fragment LongSuffix
    :   [lL]
    ;

fragment LongLongSuffix
    :   'll' | 'LL'
    ;

Types: (IntTypes|FloatTypes|UIntTypes|StringTypes) ( (' ')? '['']')?;
Integer: (BinaryConstant | OctalConstant | DecimalConstant) IntegerSuffix?;
Float: Digit '.' Digit+;
fragment DChar
    :   ~["\\]
    |   EscapeSequence
    |   '\\\n'   // Added line
    |   '\\\r\n' // Added line
    ;
fragment SChar
    :   ~['\\]
    |   EscapeSequence
    |   '\\\n'   // Added line
    |   '\\\r\n' // Added line
    ;

StringLiteral
    :   ('"' (DChar+)? '"' | '\''(SChar+)? '\'') ;



//grammar

start: (declaration | statement | expression)*? EOF;

declaration: variableDeclaration | functionDeclaration | getDeclaration | putDeclaration;

variableDeclaration: (Var|Const) Identifier ':' (Types|Identifier) (SetEqual expression)? ';';
functionDeclaration: ('fn'|'function') Identifier '(' ( arg (',' arg)*)? ')' (':' (Types|Identifier) )? ';';
getDeclaration: At'get' Identifier 'as' ( getBlock | Identifier ) ';' ;
getLine: Identifier ('as' Identifier)?;
getBlock:'{' (getLine)? (',' getLine)* '}';
putDeclaration: At'put' putBlock ';'?;

putBlock: '{' (variableDeclaration | functionDeclaration | statement)* '}';

statement: functionStatement | typeStatement;
functionStatement: ('fn'|'function') Identifier '(' ( arg (',' arg)*)? ')' (':' (Types|Identifier) )? functionBlock;
arg: Identifier ':' (Types|Identifier);

typeStatement: 'type' Identifier '='  (Types | Identifier) ';';

ifExpression:
            ('if' '(' expression ')' '{'
                functionLine
            '}')
            ('else' 'if' '(' expression ')' '{'
                functionLine
            '}')*
            ('else' '{'
                functionLine
            '}')?
            ;



whileExpression: While'(' ')' functionBlock;
matchExpression: Match'(' expression ')' '{'
                    ('case' ((StringLiteral|Integer|Float) (',' (StringLiteral|Integer|Float))*) functionBlock)*
                    ('else' functionBlock)?
                 '}';
forExpression: For'(' variableDeclaration? ';' expression? ';' expression? ')' functionBlock;


functionLine:  (
       declaration
     | 'return'? expression ';' 
     | ifExpression 
     | whileExpression 
     | matchExpression 
     | forExpression
)    ;

functionBlock:
	'{'
		 ( 
			   functionLine
		 )*?
	'}';

	

expression:
	StringLiteral
    |Integer
    |Float
	| Identifier
	| <assoc=right>Identifier '=' expression
	| expression ('>'|'<'|'>='|'<='|'=='|'!=') expression
	| Identifier '.' functionCall
	| Identifier '.' Identifier
	| functionCall
	| expression ('++'|'--')
	| ('++'|'--')expression
	| expression ( '&&' | '||' ) expression
	| ('!'|'~')  expression
	| expression ('&'|'|') expression
	| <assoc=right> expression '^' expression
	| <assoc=right> expression '**' expression
	| expression ('*'|'/') expression
	| expression ('+'|'-') expression

	| '(' expression ')'
	;

functionCall:
	Identifier '(' (expression ( ',' expression)*? )? ')';