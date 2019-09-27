%{

%}

%start ope_unaire

%%

^main[ ][a-zA-Z][a-zA-Z0-9]*     {return(PROG);}

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
\,              {return (VIRGULE);}
\;              {return (POINT_VIRGULE);}
\:              {return (DEUX_POINTS);}

\)              {return (PARENTHESE_FERMANTE);}
\(              {BEGIN ope_unaire; return (PARENTHESE_OUVRANTE);}
\]              {return (CROCHET_FERMANT);}
\[              {return (CROCHET_OUVRANT);}

true            {return (TRUE);}
false           {return (FALSE);} 

[a-zA-Z][a-zA-Z0-9]*    {BEGIN 0; return (IDF);}
0|[1-9][0-9]*           {BEGIN 0; return (CSTE_ENTIERE);}

\n              {BEGIN 0; ;}

%%

