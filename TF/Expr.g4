grammar Expr;

// Regla para un comando, que puede ser un simple comando o una estructura if
command: simpleCommand | ifCommand;

// Regla para un script 
script: statement*;

// Regla para un comando simple
simpleCommand: WORD (ARG+)?;

// Regla para una declaracion
statement: command | loop | assignment | listDeclaration;

// Regla para una estructura de condicion
ifCommand: 'if' condition 'then' script 'else' script 'fi';

// Regla para un bucle
loop: 'for' WORD 'in' (WORD (',' WORD)*)? 'do' script 'done'
    | 'while' condition 'do' script 'done';

// Regla para una asignación de variable
assignment: WORD '=' expression;

// Regla para una declaración de lista
listDeclaration: 'declare' ' -a' WORD '=' '[' (expression (',' expression)*)? ']';

// Regla para una condición
condition: WORD;

// Regla para una expresión
expression: simpleExpression | expression '&&' simpleExpression | expression '||' simpleExpression;

// Regla para una expresión simple
simpleExpression: WORD | ARG | NUMBER;


WORD: [a-zA-Z_][a-zA-Z0-9_]*;
ARG: WORD | STRING;
STRING: '"' ~["]* '"';
NUMBER: ('+' | '-')? [0-9]+;

WS: [ \t\r\n]+ -> skip;
