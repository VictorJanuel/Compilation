all : cpyrr

cpyrr: y.tab.c table.o lex.yy.o
	gcc -o cpyrr y.tab.c lex.yy.o  table.o -ly -ll

y.tab.c: grammaire.y
	yacc -d -v grammaire.y

lex.yy.o: lex.yy.c
	gcc -c lex.yy.c

lex.yy.c: lex.l
	lex lex.l

table.o : table.c table.h
	gcc -Wall table.c -c 
