%{
#include <stdlib.h>
#include <stdio.h>
#include "util/tables.h"
#include "y.tab.h"

extern file f_deplac;
int incr_reg=0;
int reg=0;
int numligne=1;
int yylex();

extern arbre ab;
int numRegion=0;
%}

%%

^main[ ][a-zA-Z][a-zA-Z0-9]*     {yylval.arbre_type.type = numRegion; initTabRegion();initTabLexico();initTabDecla();initTabHash();initTabRepresentation();insererRegion(incr_reg); p=empiler(p,incr_reg++);  return(PROG);}

begin           {return (DEBUT);}
end             {return (FIN);}

type            {return (TYPE);}
struct          {return (STRUCT);}
end[ ]struct    {return (FSTRUCT);}

array           {return (TABLEAU);}
of              {return (DE);}

var             {return (VARIABLE);}
procedure       {numRegion++; yylval.arbre_type.type = numRegion; f_deplac=enfiler(f_deplac, deplac); insererRegion(incr_reg); p=empiler(p,incr_reg++); return (PROCEDURE);}
function        {numRegion++; yylval.arbre_type.type = numRegion; f_deplac=enfiler(f_deplac, deplac); insererRegion(incr_reg);  p=empiler(p,incr_reg++); return (FONCTION);}
return          {return (RETOURNE);}

int             {/*yylval.arbre_type.i=N_INT;*/return (ENTIER);}
double          {/*yylval.arbre_type.f=N_DOUBLE;*/return (REEL);}
bool            {/*yylval.arbre_type.i=N_BOOL;*/return (BOOLEEN);}
string          {return (CHAINE);}
char            {/*yylval.arbre_type.c=N_CHAR;*/return (CARACTERE);}
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
=               {return (OPAFF);}

\.              {return (POINT);}
\.\.            {return (PP);}
\,              {return (VIRGULE);}
\;              {return (POINT_VIRGULE);}
\:              {return (DEUX_POINTS);}

\)              {return (PARENTHESE_FERMANTE);}
\(              {return (PARENTHESE_OUVRANTE);}
\]              {return (CROCHET_FERMANT);}
\[              {return (CROCHET_OUVRANT);}

true            {return (TRUE);}
false           {return (FALSE);} 

[a-zA-Z][a-zA-Z0-9_]*    {yylval.arbre_type.type=insererLexeme(yytext); return (IDF);}
0|[1-9][0-9]*            {yylval.arbre_type.i=atoi(yytext);
                          return (CSTE_ENTIERE);}
0|[1-9][0-9]*\.[0-9]+           {yylval.arbre_type.f=atof(yytext);return (CSTE_REELLE);}

\'[^']\'        {yylval.arbre_type.c=yytext[0];return(CARAC);}
\"[^\"]*\"        {return(CHAINECARAC);}

\n              {numligne++;}
[ ]*            {;}
\t*             {;}

.               {return (ERROR_LEXICO);}
%%
