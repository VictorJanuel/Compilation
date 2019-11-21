all : cpyrr

cpyrr: y.tab.c lex.yy.o lexico.o declaration.o region.o arbre.o file.o representation.o
	gcc -o cpyrr y.tab.c lex.yy.o lexico.o declaration.o arbre.o file.o representation.o region.o -ly -ll

y.tab.c: yacc.y
	yacc -d -v yacc.y

lex.yy.o: lex.yy.c
	gcc -c lex.yy.c

lex.yy.c: lex.l
	lex lex.l

tables.o: util/tables.c util/tables.h
	gcc -Wall util/tables.c -c

lexico.o: util/lexico.c util/lexico.h util/tables.h
	gcc -Wall util/lexico.c -c

declaration.o: util/declaration.c util/declaration.h
	gcc -Wall util/declaration.c -c

region.o: util/region.c util/region.h
	gcc -Wall util/region.c -c

arbre.o: util/arbre.c util/arbre.h
	gcc -Wall util/arbre.c -c

file.o:  util/file.c util/file.h
	gcc -Wall util/file.c -c

representation.o:  util/representation.c util/representation.h
	gcc -Wall util/representation.c -c	

clean :
	rm -rf *.o y.tab.* lex.yy.o lex.yy.c cpyrr y.output 
