%{
#include <stdlib.h>
#include <stdio.h>
#include "y.tab.h"
#include "util/tables.h"

int incr_reg=0;
int reg=0;
int numligne=1;
int yylex();
int toto=0;
int tata=0;
%}

%%

^main[ ][a-zA-Z][a-zA-Z0-9]*     { initTabRegion();initTabLexico();initTabDecla();initTabHash();initTabRepresentation();insererRegion(incr_reg);p=empiler(p,incr_reg++);return(PROG);}

begin           {printf("begin\n"); return (DEBUT);}
end             {return (FIN);}

type            {return (TYPE);}
struct          {return (STRUCT);}
end[ ]struct    {return (FSTRUCT);}

array           {return (TABLEAU);}
of              {return (DE);}

var             {printf("var");return (VARIABLE);}
procedure       {insererRegion(incr_reg);printf("\t\t\t\t\t\t\t%d, %d\n", toto, tata); toto++;p=empiler(p,incr_reg++); return (PROCEDURE);}
function        {insererRegion(incr_reg);printf("\t\t\t\t\t\t\t%d, %d\n", toto, tata); toto++;p=empiler(p,incr_reg++);return (FONCTION);}
return          {return (RETOURNE);}

int             {yylval=N_INT;return (ENTIER);}
double          {yylval=N_DOUBLE;return (REEL);}
bool            {yylval=N_BOOL;return (BOOLEEN);}
string          {return (CHAINE);}
char            {yylval=N_CHAR;return (CARACTERE);}
void            {return (VIDE);}

while           {return (TANT_QUE);}
do              {return (FAIRE);}
if              {return (SI);}
then            {return (ALORS);}
else            {return (SINON);}

\&\&            {return (ET);}
\|\|            {return (OU);}


\!=             {return (OPDIFF);}
\>=             {return (OPSUPE);}
\<=             {return (OPINFE);}
==              {return (OPEG);}
\>              {return (OPSUP);}
\<              {return (OPINF);}

\%              {return (MOD);}
\/              {return (DIV);}
\*              {return (MULT);}
\!              {return (NOT);}
\-              {return(MOINS);}
\+              {return(PLUS);}
=               {printf("EGALE\n");return (OPAFF);}

\.              {printf("Point\n");return (POINT);}
\.\.            {printf("PointPoint\n");return (PP);}
\,              {return (VIRGULE);}
\;              {printf("point virgule\n");return (POINT_VIRGULE);}
\:              {return (DEUX_POINTS);}

\)              {return (PARENTHESE_FERMANTE);}
\(              {return (PARENTHESE_OUVRANTE);}
\]              {printf("C F\n");return (CROCHET_FERMANT);}
\[              {printf("C O\n");return (CROCHET_OUVRANT);}

true            {return (TRUE);}
false           {return (FALSE);} 

[a-zA-Z][a-zA-Z0-9_]*    {printf("je suis passé[IDF] \n"); printf("\n\n----\n%s\n----\n\n", yytext); yylval=insererLexeme(yytext); return (IDF);}
0|[1-9][0-9]*            {printf("constante entiere\n"); yylval=atoi(yytext);
                          printf("%s : %d \n",yytext,yylval);return (CSTE_ENTIERE);}
0|[1-9][0-9]*\.[0-9]+           {yylval=atof(yytext);return (CSTE_REELLE);}

\'[^']\'        {printf("caractere");return(CARAC);}
\"[^\"]*\"        {printf("chaine caractere");return(CHAINECARAC);}

\n              {numligne++;}
[ ]*            {;}
\t*             {;}

.               {return (ERROR_LEXICO);}
%%

int yywrap(){
afficheTabLexico();
afficheTabDeclaration();
afficheTabRepresentation();
afficheTabRegion();
fprintf(stdout, "\nArbre :\n");
affiche_arbre(a);
fprintf(stdout, "\n\n");
}