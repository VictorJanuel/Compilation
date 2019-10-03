%{
#include <stdlib.h>
#include <stdio.h>
#include "y.tab.h"
#include "table.h"

int numligne=1;
int yylex();
%}

%start ope_unaire

%%

^main[ ][a-zA-Z][a-zA-Z0-9]*     {yylval=insererLexeme(yytext); return(PROG);}

begin           {printf("begin\n"); return (DEBUT);}
end             {return (FIN);}

type            {return (TYPE);}
struct          {return (STRUCT);}
end[ ]struct    {return (FSTRUCT);}

array           {return (TABLEAU);}
of              {return (DE);}

var             {printf("je suis passé");return (VARIABLE);}
procedure       {return (PROCEDURE);}
function        {return (FONCTION);}
return          {return (RETOURNE);}

int             {return (ENTIER);}
double          {return (REEL);}
bool            {return (BOOLEEN);}
string          {return (CHAINE);}
char            {return (CARACTERE);}
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

\.              {printf("KIM DOTCOM");return (POINT);}
\-\>            {printf("Robin des Bois\n"); return(FLECHE);}
\,              {return (VIRGULE);}
\;              {printf("J4AI FINI MAMAN!\n");return (POINT_VIRGULE);}
\:              {return (DEUX_POINTS);}

\)              {return (PARENTHESE_FERMANTE);}
\(              {return (PARENTHESE_OUVRANTE);}
\]              {printf("C F\n");return (CROCHET_FERMANT);}
\[              {printf("C O\n");return (CROCHET_OUVRANT);}

true            {return (TRUE);}
false           {return (FALSE);} 

[a-zA-Z][a-zA-Z0-9_]*    {printf("je suis passé[IDF] \n"); yylval=insererLexeme(yytext); return (IDF);}
0|[1-9][0-9]*            {printf("AINTE");return (CSTE_ENTIERE);}
0|[1-9][0-9]*\.[0-9]*           {return (CSTE_REELLE);}
\n              {numligne++;}
[ ]*            {printf("lul\n");}
\t*             {;}

.               {return (ERROR_LEXICO);}
%%

