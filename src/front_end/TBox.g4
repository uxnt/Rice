grammar TBox;

options {
    language = Java;
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

True: 'true';
False: 'false';
Null: 'null';

Func: 'func';
Class: 'class';
Struct: 'struct';
Enum: 'enum';
Interface: 'interface';

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
Return: 'return';

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
RightShift : '>>';
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
RightShiftAssign : '>>=';
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
BinNum: '1'([0-1])*'b';
OctNum: '0'([1-7])([0-7])*;
DecNum: ([1-9])([0-9])* | '0';
HexNum: '0x'([1-9]|[A-F]|[a-f])([0-9]|[A-F]|[a-f])*;
Identifier: ([a-z]|[A-Z]|'_')([0-9]|[a-z]|[A-Z]|'_')*;
StringConstant: '"'.*?'"';

//Grammars

num: BinNum | OctNum | DecNum | HexNum;
constant: StringConstant | num;

primExpr
    : constant
    | library
    | '('expr')'
    ;

postExpr
    : primExpr
        ( '['expr']'
        | '('args')'
        | ('.') library
        | ('++'|'--')
        )*
    ;

unaryExpr
    :
    ('++' | '--')*
    ( postExpr
    | ('&'|'~'|'!') castExpr
    | '&&' library // GCC extension address of label
    )
    ;
    
castExpr
    : unaryExpr
    | num
    ;

mulExpr
    : castExpr (('*'|'/'|'%') castExpr)*
    ;

addExpr
    : mulExpr (('+'|'-') mulExpr)*
    ;

shiftExpr
    : addExpr (('<<'|'>>') addExpr)*
    ;

relatExpr
    : shiftExpr (('<'|'>'|'<='|'>=') shiftExpr)*
    ;

equExpr
    : relatExpr (('=='| '!=') relatExpr)*
    ;

andExpr
    : equExpr ( '&' equExpr)*
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

assignExpr
    : constant
    | unaryExpr ('='|'*='|'/='|'%='|'+='|'-='|'<<='|'>>='|'&='|'^='|'|=') assignExpr
    | quesExpr
    ;

args
    : (expr(','expr)*)?
    ;

expr
    : assignExpr(','assignExpr)*
    ;

library
    : library'.'Identifier
    | Identifier
    ;

importStmt
    : 'import' library ';'
    ;

type
    : Num
    | Byte
    | Short
    | Int
    | Long
    | Bool
    | String
    | Float
    | Double
    | Char
    | Var
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
    ;

returnStmt
    : 'return' expr ';'
    ;

defVarStmt
    : type Identifier('='expr)?';'
    ;

ifStmt
    : 'if' '(' logicOrExpr ')' (('{' program '}') | stmt)
    ('elif' '(' logicOrExpr ')' (('{' program '}') | stmt))*
    ('else' (('{' program '}') | stmt))?
    ;

forStmt
    : 'for' '(' stmt logicOrExpr ';' expr ')' (('{' program '}') | stmt)
    ;

whileStmt
    : 'while' '('logicOrExpr')' (('{' program '}') | stmt)
    ;

doWhileStmt
    : 'do' '{' program '}' 'while' '('logicOrExpr')'';'
    ;

defFuncStmt
    : 'export'? 'func' Identifier '('argsNeed')' (':'type)? '{'program'}'
    ;

defGlobalVarStmt
    : 'export'? defVarStmt
    ;

stat
    : importStmt*defGlobalVarStmt*defFuncStmt*
    ;