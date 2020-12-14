grammar Ray;

Equal:                  '=';
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
SingleArrow:            '->';
Arrow:                  '=>';
Return:                 'return';
Function:               ('function' | 'fn');
fragment Int:           ('int8'|'int16'|'int32'|'int64');
fragment Floats:        ('float'|'double');
fragment String:        'string';
fragment Void:          'void';
Var:                    'var';
Types:                  (Int|Floats|String|Void);
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
:   ;//TODO: finish this statement!

expression
:   Return expression
|   Digit
|   statement;

arg
: Identifier ':' Types;   

args
: arg (Comma arg)*;


block
:'{' expressions? '}';

expressions
: expression ';' (expression ';')*;

function
:Function Identifier '(' args? ')' '->' Types
|Function Identifier '(' args? ')';

functionDeclaration
: function ';';

functionImplement
: function block;

variableDeclaration
:Var Identifier ':' Types ';';