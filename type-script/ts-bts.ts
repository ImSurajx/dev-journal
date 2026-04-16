/*
TS Code: 
type script code go to lexer & from lexer it goes to parser after parser it move to binder & binder send it to checker send it to emmiter & emmiter genrate .js, .d.ts, .map.

- lexar: do tokenization for each part of code
- parser: create a tree syntax of code file, like abstract syntax tree or concereit syntax tree.
- binder: ast or cst sent to binder, now binder check sybol node & it create symbol tables, parent pointers & flow nodes.
- checker: short circuit, syntax strict check, check your code twice.
- emmiter: gives us js .d.ts, .map
*/