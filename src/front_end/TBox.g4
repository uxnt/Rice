grammar TBox;

options {
    language = Cpp;
}

//Ignores
WS: [\t\n\r ]+->skip;
LineComment: ('//'|'#').*?[\n\r]->skip;
BlockComment: '/*'.*?'*/'->skip;

//Keys
Import: 'import';
Export: 'export';
Of: 'of';
Static: 'static';
Extern: 'extern';

True: 'true';
False: 'false';
Null: 'null';

Func: 'func';
Class: 'class';
Struct: 'struct';
Enum: 'enum';
Interface: 'interface';
Template: 'template';

Abstract: 'abstract';
Override: 'override';

Public: 'public';
Protected: 'protected';
Private: 'private';
Internal: 'internal';
Friendly: 'friendly';
Friend: 'friend';

If: 'if';
Else: 'else';
Elif: 'elif';
Switch: 'switch';
For: 'for';
Foreach: 'foreach';
While: 'while';
Do: 'do';
Break: 'break';
Continue: 'continue';
Return: 'return';
Yield: 'yield';

//Native Types
Num: 'num';
Byte: 'byte';
Short: 'short';
Int: 'int';
Long: 'long';
Float: 'float';
Double: 'double';
Bool: 'bool';
String: 'string';
Char: 'char';
Var: 'var';
Point: 'point';
Function: 'function';
Reference: 'reference';
Object: 'object';

//Symbols
Comma: ',';
Question : '?';
SemiColon : ';';
Colon: ':';
LeftParen: '(';
RightParen: ')';
LeftBracket: '[';
RightBracket: ']';
LeftBrace: '{';
RightBrace: '}';

LeftShift : '<<';
ARightShift : '>>';
LRightShift : '>>>';
Plus : '+';
Increase : '++';
Minus : '-';
Decrease : '--';
Star : '*';
Div : '/';
Mod : '%';
And : '&';
LogicAnd : '&&';
Or : '|';
LogicOr : '||';
Xor : '^';
Not : '!';
Tilde : '~';

Assign : '=';
MulAssign : '*=';
DivAssign : '/=';
ModAssign : '%=';
PlusAssign : '+=';
MinusAssign : '-=';
LeftShiftAssign : '<<=';
ARightShiftAssign : '>>=';
LRightShiftAssign : '>>>=';
AndAssign : '&=';
XorAssign : '^=';
OrAssign : '|=';

Less : '<';
LessEqual : '<=';
Greater : '>';
GreaterEqual : '>=';
Equal : '==';
NotEqual : '!=';

Arrow : '->';
Dot : '.';
Ellipsis : '...';

Dollar: '$';

//Constants
BinNum: '-'?'1'([0-1])*'b';
OctNum: '-'?'0'([1-7])([0-7])*;
DecNum: '-'?([1-9])([0-9])* | '0';
HexNum: '-'?'0x'([1-9]|[A-F]|[a-f])([0-9]|[A-F]|[a-f])*;
FloatNum: '-'?([1-9])([0-9])*'.'([0-9])*;
Identifier: ([a-z]|[A-Z]|'_')([0-9]|[a-z]|[A-Z]|'_')*;
StringConstant: '"'.*?'"';

//Grammars

num: BinNum | OctNum | DecNum | HexNum | FloatNum;
constant: StringConstant | num;

primExpr
    : constant
    | Identifier
    | '('expr')'
    ;

postExpr
    : primExpr
        (postOp)*
        (incOrDecOp)*
    ;

postOp
    : '['expr']'
    | '('args')'
    | ('.') Identifier
    ;

unaryExpr
    :
    (incOrDecOp)*
    ( postExpr
    | unaryOp castExpr
    )
    ;

unaryOp
    : '-'|'~'|'!'
    ;

incOrDecOp
    : '++' | '--'
    ;

castExpr
    : unaryExpr
    | num
    ;

mulExpr
    : castExpr (mulOp castExpr)*
    ;

mulOp
    : '*' | '/' | '%'
    ;

addExpr
    : mulExpr (addOp mulExpr)*
    ;

addOp
    : '+' | '-'
    ;

shiftExpr
    : addExpr (shiftOp addExpr)*
    ;

shiftOp
    : '<<' | '>>' | '>>>'
    ;

cmpExpr
    : shiftExpr (cmpOp shiftExpr)*
    ;

cmpOp
    : '<'|'>'|'<='|'>='|'=='|'!='
    ;

andExpr
    : cmpExpr ( '&' cmpExpr)*
    ;

xorExpr
    : andExpr ('^' andExpr)*
    ;

orExpr
    : xorExpr ('|' xorExpr)*
    ;

logicAndExpr
    : orExpr ('&&' orExpr)*
    ;

logicOrExpr
    : logicAndExpr ( '||' logicAndExpr)*
    ;

quesExpr
    : logicOrExpr ('?' expr ':' quesExpr)?
    ;

sigmaExpr
    :
    ;

assignExpr
    : constant
    | postExpr assignOp assignExpr
    | quesExpr
    ;

assignOp
    : '='|'*='|'/='|'%='|'+='|'-='|'<<='|'>>='|'&='|'^='|'|='|'>>>='
    ;

args
    : (expr(','expr)*)?
    ;

expr
    : assignExpr
    ;

library
    : Identifier('.'Identifier)*
    ;

importStmt
    : 'import' library ';'
    ;

type
    : 'num'
    | 'byte'
    | 'short'
    | 'int'
    | 'long'
    | 'bool'
    | 'string'
    | 'float'
    | 'double'
    | 'char'
    | 'var'
    | 'point'
    | 'function''('type*')'':'type
    | library
    | type'[]'
    ;

argsNeed
    : (type Identifier(','type Identifier)*)?
    ;

program
    : stmt*
    ;

stmt
    : expr';'
    | ';'
    | defVarStmt
    | returnStmt
    | ifStmt
    | forStmt
    | whileStmt
    | doWhileStmt
    | breakStmt
    | continueStmt
    ;

returnStmt
    : 'return' expr? ';'
    ;

defVarStmt
    : type Identifier('='expr)?';'
    ;

stmtBody
    :'{' program '}'
    | stmt
    ;

ifStmt
    : 'if' '(' logicOrExpr ')' stmtBody
    ('elif' '(' logicOrExpr ')' stmtBody)*
    ('else' stmtBody)?
    ;

forStmt
    : 'for' '(' stmt logicOrExpr ';' expr ')' stmtBody
    ;

whileStmt
    : 'while' '('logicOrExpr')' stmtBody
    ;

doWhileStmt
    : 'do' '{' program '}' 'while' '('logicOrExpr')'';'
    ;

breakStmt
    : 'break'';'
    ;

continueStmt
    : 'continue'';'
    ;

defFuncStmt
    : 'export'? 'func' Identifier '('argsNeed')' (':'type)? '{'program'}'
    ;

defGlobalVarStmt
    : 'export'? defVarStmt
    ;

externFuncStmt
    : 'extern' 'func' Identifier '('argsNeed')' (':'type)';'
    ;

stat
    : importStmt*statStmts*
    ;

statStmts
    : defGlobalVarStmt
    | defFuncStmt
    | externFuncStmt
    ;