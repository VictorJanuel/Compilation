all : cpyrr

cpyrr: y.tab.c table.o lex.yy.o
	gcc -o cpyrr y.tab.c lex.yy.o  table.o -ly -ll

y.tab.c: yacc.y
	yacc -d -v yacc.y

lex.yy.o: lex.yy.c
	gcc -c lex.yy.c

lex.yy.c: lex.l
	lex lex.l

table.o : table.c table.h
	gcc -Wall table.c -c 

clean :
	rm -rf *.o y.tab.* lex.yy.o lex.yy.c cpyrr y.output 