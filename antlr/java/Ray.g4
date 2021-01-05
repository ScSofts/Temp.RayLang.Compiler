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
SingleQuotation: '\'';
MultiQuotation: '"';
Import: 'get';
Export: 'put';
Alias: 'as';

Function: ('function' | 'fn');
fragment Int: ('int8' | 'int16' | ('int32' | 'int') | 'int64');
fragment Floats: ('float' | 'double');
fragment String: 'string';
fragment Void: 'void';
fragment ConstInt: (
		'const int'
		| 'const int8'
		| 'const int16'
		| 'const int32'
		| 'const int64'
	);
fragment ConstFloats: ('const float' | 'const double');
fragment ConstString: 'const string';
fragment Identifier_f: [$A-Za-z_][A-Za-z0-9_]*;
Var: 'var';
If: 'if';
For: 'for';
Switch: 'switch';
Else: 'else';
fragment Type: (
		Int
		| Floats
		| String
		| Void
		| ConstInt
		| ConstFloats
		| ConstString
	);
Types:
	Type '[' IntConstant? ']'
	|Type
;
KeyWords: (
		Types
		| Var
		| Return
		| Export
		| Import
		| Alias
		| If
		| For
		| Switch
		| Else
	);
Identifier: Identifier_f;
Blanks: [\r\n\t] -> skip;
Space: ' ' -> skip;
fragment Digit: '0' | [1-9][0-9_]*;
fragment IntConstant: ('-')? Digit;
fragment FloatConstant: ('-')? Digit '.' Digit;
fragment SingleLineString: '\'' (ESC | ~["\\\n\r])* '\'';
fragment MultiString: '"' ([\n] | [\r] | ESC | ~["\\])* '"';
fragment ESC: '\\' (["\\/bfnrt] | ANSI);
fragment ANSI: [1-9] ( ( [0-9])? [0-9])?;
Constants: (
		IntConstant
		| FloatConstant
		| SingleLineString
		| MultiString
		| List
	);
List: '[' (Constants (',' Constants)*? )? ']';

//MemberIdentifier: Identifier ('.' Identifier)*?;
memberIdentifier: Identifier ('.' Identifier)*? ('[' (memberIdentifier|Constants) ']')*?;

start: (
		declaration
		| implement
		| importStatement
		| exportStatement
	)*?;

declaration: functionDeclaration | variableDeclaration;

implement: functionImplement;

statement:
	setValueStatement ';'
	| ifStatement
	| switchStatement; //TODO: finish this statement!
expression:
	functionCallExpression
	| expression ('*' | '/') expression
	| expression ('+' | '-') expression
	| expression ('^' | '|') expression
	| expression ('>' | '<' | '==' | '!=' | '>=' | '<=') expression
	| '!' expression
	| Constants
	| memberIdentifier
	| '(' expression ')';

arg: Identifier ':' Types;

args: arg (Comma arg)*;

declarationsBlock: '{' (declaration)*? '}';

functionBlock:
	'{' (
		returnExpression
		| variableInitializationAndDeclaration
		| statement
		| expressions
	)*? '}';

expressions: expression ';' (expression ';')*?;

function:
	Function Identifier '(' args? ')' '->' Types
	| Function Identifier '(' args? ')';

functionDeclaration: function ';';

functionImplement: function functionBlock;

variableDeclaration: Var Identifier ':' Types ';';

//var i = 122;//i is auto int32
variableInitializationAndDeclaration:
	Var Identifier ':' Types '=' expression ';'
	| Var Identifier '=' expression ';';

returnExpression: Return ';' | Return expression ';';

setValueStatement: memberIdentifier '=' expression;

bathImport: Identifier (',' Identifier)*? | Identifier;
importStatement:
	(
		Import Identifier '{' bathImport? '}' ';'
		| Import Identifier Alias Identifier ';'
		| Import Identifier ';'
	);

exportStatement: Export Identifier declarationsBlock ';';

functionCallExpression: memberIdentifier '(' call_args? ')';

call_args:
	memberIdentifier
	| expression (',' (memberIdentifier | expression))*;

ifStatement:
	If '(' expression ')' functionBlock (
		Else If '(' expression ')' functionBlock
	)*? (Else functionBlock)?;

switchBlock: (Constants (',' Constants)*?)? '->' functionBlock;

switchStatement:
	Switch '(' memberIdentifier ')' '{' (switchBlock)*? '}';