%{
#include "table.h"
%}

%start ope_unaire

%%

^main[ ][a-zA-Z][a-zA-Z0-9]*     {yylval=insererLexeme(yytext); return(PROG);}

begin           {return (DEBUT);}
end             {return (FIN);}

type            {return (TYPE);}
struct          {return (STRUCT);}
end[ ]struct    {return (FSTRUCT);}

array           {return (TABLEAU);}
of              {return (DE);}

var             {return (VARIABLE);}
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
=               {return (OPAFF);}

\.              {return (POINT);}
\,              {return (VIRGULE);}
\;              {return (POINT_VIRGULE);}
\:              {return (DEUX_POINTS);}

\)              {return (PARENTHESE_FERMANTE);}
\(              {return (PARENTHESE_OUVRANTE);}
\]              {return (CROCHET_FERMANT);}
\[              {return (CROCHET_OUVRANT);}

true            {return (TRUE);}
false           {return (FALSE);} 

[a-zA-Z][a-zA-Z0-9]*    {yylval=insererLexeme(yytext); return (IDF);}
0|[1-9][0-9]*           {return (CSTE_ENTIERE);}

\n              { ;}

%%

