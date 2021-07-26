grammar TBox;

r : 'Hello' ID
  | 'hello' ID;
ID : [a-z]+;
WS : [ \t\r\n]+ -> skip;