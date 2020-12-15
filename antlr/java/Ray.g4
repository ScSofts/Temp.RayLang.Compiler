grammar Ray;

options {
}

Pow:                    '^';
Not:                    '!';
Or:                     '|';
SetEqual:               '=';
Dot:                    '.';
Colon:                  ':';
MultiLineComment:       '/*'.*?'*/'  -> skip;
SingleLineComment:      '//'.*? [\n] -> skip;
BlockLeft:              '{';
BlockRight:             '}';
PairLeft:               '(';
PairRight:              ')';
ListLeft:               '[';
ListRight:              ']';
At:                     '@';
Semicolon:              ';';
Comma:                  ',';
Less:                   '<';
More:                   '>';
SingleArrow:            '->';
Arrow:                  '=>';
Equal:                  '==';
NotEqual:               '!=';
LessEqual:              '<=';
MoreEqual:              '>=';
Return:                 'return';
Function:               ('function' | 'fn');
fragment Int:           ('int8'|'int16'|'int32'|'int64');
fragment Floats:        ('float'|'double');
fragment String:        'string';
fragment Void:          'void';
fragment ConstInt:      ('const int8'|'const int16'|'const int32'|'const int64');
fragment ConstFloats:   ('const float'|'const double');
fragment ConstString:   'const string';
Var:                    'var';
Types:                  (Int|Floats|String|Void|ConstInt|ConstFloats|ConstString);
Identifier:             [$A-Za-z_][A-Za-z0-9_]*;
Blanks:                 [\r\n\t] -> skip;
Space:                  ' ' -> skip;
Digit:                  ([1-9][0-9]*|[0]);

start
: (declaration | implement)*?;

declaration
:    functionDeclaration
|    variableDeclaration;

implement
:    functionImplement;

statement
:   setValueStatement;//TODO: finish this statement!

expression
:   expression ('*'|'/') expression
|   expression ('+'|'-') expression
|   expression ('^'|'|') expression
|   expression ('>'|'<'|'=='|'!='|'>='| '<=' ) expression
|   '!' expression
|   Digit
|   statement
|   Var
|   Identifier
|   '(' expression ')';

arg
: Identifier ':' Types;   

args
: arg (Comma arg)*;


block
:'{' expressions? '}';

functionBlock
:'{' (expressions|returnExpression)? '}';

expressions
: expression ';' (expression ';')*;

function
:Function Identifier '(' args? ')' '->' Types
|Function Identifier '(' args? ')';

functionDeclaration
: function ';';

functionImplement
: function functionBlock;

variableDeclaration
:Var Identifier ':' Types ';';

returnExpression
:   Return expression ';';

setValueStatement
:   Identifier '=' expression;