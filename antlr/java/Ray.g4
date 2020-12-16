grammar Ray;

options {
}

Pow: '^';
Not: '!';
Or: '|';
SetEqual: '=';
Dot: '.';
Colon: ':';
MultiLineComment: '/*' .*? '*/' -> skip;
SingleLineComment: '//' .*? [\n] -> skip;
BlockLeft: '{';
BlockRight: '}';
PairLeft: '(';
PairRight: ')';
ListLeft: '[';
ListRight: ']';
At: '@';
Semicolon: ';';
Comma: ',';
Less: '<';
More: '>';
SingleArrow: '->';
Arrow: '=>';
Equal: '==';
NotEqual: '!=';
LessEqual: '<=';
MoreEqual: '>=';
Return: 'return';

Import: 'get';
Export: 'put';
Alias: 'as';

Function: ('function' | 'fn');
fragment Int: ('int8' | 'int16' | 'int32' | 'int64');
fragment Floats: ('float' | 'double');
fragment String: 'string';
fragment Void: 'void';
fragment ConstInt: (
		'const int8'
		| 'const int16'
		| 'const int32'
		| 'const int64'
	);
fragment ConstFloats: ('const float' | 'const double');
fragment ConstString: 'const string';
Var: 'var';
Types: (
		Int
		| Floats
		| String
		| Void
		| ConstInt
		| ConstFloats
		| ConstString
	);
KeyWords: (Types | Var | Return | Export | Import | Alias);
Identifier: [$A-Za-z_][A-Za-z0-9_]*;
Blanks: [\r\n\t] -> skip;
Space: ' ' -> skip;
Digit: ([1-9][0-9]* | [0]);

start: (declaration | implement | importStatement)*?;

declaration: functionDeclaration | variableDeclaration;

implement: functionImplement;

statement: setValueStatement; //TODO: finish this statement!

expression:
	functionCallExpression
	| expression ('*' | '/') expression
	| expression ('+' | '-') expression
	| expression ('^' | '|') expression
	| expression ('>' | '<' | '==' | '!=' | '>=' | '<=') expression
	| '!' expression
	| Digit
	| statement
	| Var
	| Identifier
	| '(' expression ')';

arg: Identifier ':' Types;

args: arg (Comma arg)*;

block: '{' expressions*? '}';

functionBlock: '{' ( returnExpression | expressions)*? '}';

expressions: expression ';' (expression ';')*;

function:
	Function Identifier '(' args? ')' '->' Types
	| Function Identifier '(' args? ')';

functionDeclaration: function ';';

functionImplement: function functionBlock;

variableDeclaration: Var Identifier ':' Types ';';

returnExpression: Return ';' | Return expression ';';

setValueStatement: Identifier '=' expression;

importStatement:
	(
		Import Identifier Alias Identifier ';'
		| Import Identifier ';'
	);

exportStatement: Export Identifier '{' (declaration)*? '}' ';';

functionCallExpression: (Identifier '.')? Identifier '(' call_args? ')';

call_args:
	Identifier
	| expression (',' (Identifier | expression)?);