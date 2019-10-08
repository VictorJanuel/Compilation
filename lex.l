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

var             {printf("var");return (VARIABLE);}
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

<<<<<<< HEAD
\&\&              {BEGIN ope_unaire; return (ET);}
\|\|              {BEGIN ope_unaire; return (OU);}

\!=             {BEGIN ope_unaire; return (OPDIFF);}
\>=             {BEGIN ope_unaire; return (OPSUPE);}
\<=             {BEGIN ope_unaire; return (OPINFE);}
==              {BEGIN ope_unaire; return (OPEG);}
\>              {BEGIN ope_unaire; return (OPSUP);}
\<              {BEGIN ope_unaire; return (OPINF);}

\%              {BEGIN ope_unaire; return (MOD);}
\/              {BEGIN ope_unaire; return (DIV);}
\*              {BEGIN ope_unaire; return (MULT);}
\!              {BEGIN ope_unaire; return (NOT);}
\-              {BEGIN ope_unaire; return(MOINS);}
\+              {BEGIN ope_unaire; return(PLUS);}
=               {BEGIN ope_unaire; return (OPAFF);}

\.              {return (POINT);}
=======
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
>>>>>>> dev
\,              {return (VIRGULE);}
\;              {printf("point virgule\n");return (POINT_VIRGULE);}
\:              {return (DEUX_POINTS);}

\)              {return (PARENTHESE_FERMANTE);}
\(              {return (PARENTHESE_OUVRANTE);}
\]              {printf("C F\n");return (CROCHET_FERMANT);}
\[              {printf("C O\n");return (CROCHET_OUVRANT);}

true            {return (TRUE);}
false           {return (FALSE);} 

[a-zA-Z][a-zA-Z0-9_]*    {printf("je suis passé[IDF] \n"); yylval=insererLexeme(yytext); return (IDF);}
0|[1-9][0-9]*            {printf("constante entiere\n"); return (CSTE_ENTIERE);}
0|[1-9][0-9]*\.[0-9]+           {return (CSTE_REELLE);}

\'[^']\'        {printf("caractere");return(CARAC);}
\"[^\"]*\"        {printf("caractere");return(CHAINECARAC);}

\n              {numligne++;}
[ ]*            {;}
\t*             {;}

.               {return (ERROR_LEXICO);}
%%

