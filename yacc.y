%{
    #include <stdio.h>
    #include <stdlib.h>
    #include "y.tab.h"
    #include "util/tables.h"
    extern int numligne;
    extern char * yytext;
    extern int yylex();
    extern int yyerror();
    extern int assoc_nom(int n);
    extern int yylval;
    extern file f;
    int nb_dimensions=0;
    int numchamps=0;
    int nb_params =0;
    arbre ab;
%}

%token PROG POINT_VIRGULE DEBUT FIN
%token TYPE IDF DEUX_POINTS STRUCT FSTRUCT
%token TABLEAU DE CROCHET_OUVRANT CROCHET_FERMANT 
%token VIRGULE POINT VARIABLE PROCEDURE FONCTION PP
%token ENTIER REEL BOOLEEN CHAINE CARACTERE CSTE_ENTIERE CSTE_REELLE CARAC CHAINECARAC
%token PARENTHESE_FERMANTE PARENTHESE_OUVRANTE VIDE RETOURNE
%token SI ALORS SINON TANT_QUE FAIRE OPAFF
%token OPEG OPINF OPSUP OPINFE OPSUPE OPDIFF 
%token NEG POS NOT PLUS MOINS MULT DIV MOD
%token ET OU TRUE FALSE
%token ERROR_LEXICO

%%

programme                   : PROG corps{
                                arbre ag = creer_arbre_vide();
                                arbre ad = creer_arbre_vide();
                                if(!a_est_pile_vide(p_arbre)){
                                    ag=a_sommet(p_arbre); 
                                    p_arbre=a_depiler(p_arbre);
                                }else{
                                    ag=creer_noeud(A_LISTE, A_EMPTY_LEX, A_EMPTY_DEC);
                                }
                                if(!a_est_pile_vide(p_arbre)){
                                    ad=a_sommet(p_arbre); 
                                    p_arbre = a_depiler(p_arbre);
                                }else{
                                    ad=creer_noeud(A_LISTE, A_EMPTY_LEX, A_EMPTY_DEC);
                                }
                                a = creer_arbre(A_LISTE, A_EMPTY_LEX, A_EMPTY_DEC, ag, ad);}
                            ;

corps                       : liste_declarations liste_instructions {p=depiler(p);
                                arbre ag = creer_arbre_vide();
                                arbre ad = creer_arbre_vide();
                                if(!a_est_pile_vide(p_arbre)){
                                    ag=a_sommet(p_arbre); 
                                    p_arbre=a_depiler(p_arbre);
                                }else{
                                    ag=creer_noeud(A_LISTE, A_EMPTY_LEX, A_EMPTY_DEC);
                                }
                                if(!a_est_pile_vide(p_arbre)){
                                    ad=a_sommet(p_arbre); 
                                    p_arbre = a_depiler(p_arbre);
                                }else{
                                    ad=creer_noeud(A_LISTE, A_EMPTY_LEX, A_EMPTY_DEC);
                                }
                                arbre ab = creer_arbre(A_LISTE, A_EMPTY_LEX, A_EMPTY_DEC, ag, ad); 
                                p_arbre=a_empiler(p_arbre, ab);}
                            ;

liste_declarations          : liste_declarations_type liste_declarations_variable liste_declarations_pf
                            ;


liste_declarations_type     : liste_declarations_type declaration_type POINT_VIRGULE
                            |
                            ;

liste_declarations_variable : liste_declarations_variable declaration_variable POINT_VIRGULE
                            |
                            ;

liste_declarations_pf       : liste_declarations_pf declaration_pf POINT_VIRGULE
                            |
                            ;

liste_instructions          : DEBUT suite_liste_inst FIN{
                                arbre ag = creer_arbre_vide();
                                arbre ad = creer_arbre_vide();
                                if(!a_est_pile_vide(p_arbre)){
                                    ag=a_sommet(p_arbre); 
                                    p_arbre=a_depiler(p_arbre);
                                }else{
                                    ag=creer_noeud(A_LISTE, A_EMPTY_LEX, A_EMPTY_DEC);
                                }
                                if(!a_est_pile_vide(p_arbre)){
                                    ad=a_sommet(p_arbre); 
                                    p_arbre = a_depiler(p_arbre);
                                }else{
                                    ad=creer_noeud(A_LISTE, A_EMPTY_LEX, A_EMPTY_DEC);
                                }
                                arbre ab = creer_arbre(A_LISTE, A_EMPTY_LEX, A_EMPTY_DEC, ag, ad); 
                                p_arbre=a_empiler(p_arbre, ab);}
                            ;

suite_liste_inst            : instruction POINT_VIRGULE
                            | suite_liste_inst instruction POINT_VIRGULE
                            ;

declaration_pf              : declaration_procedure
                            | declaration_fonction
                            ;

declaration_type            : TYPE IDF DEUX_POINTS suite_declaration_type  {
                              if($4==0){insererDeclaration($2,N_STRUCT, numchamps);numchamps=0;}
                              else{insererDeclaration($2,N_TAB, nb_dimensions);nb_dimensions=0; }
                            }
                            ;

suite_declaration_type      : STRUCT liste_champs FSTRUCT {$$=0;}
                            | TABLEAU dimension DE nom_type {$$=1;f=enfiler(f, $4);}
                            ;

dimension                   : CROCHET_OUVRANT liste_dimensions CROCHET_FERMANT
                            ;

liste_dimensions            : une_dimension
                            | liste_dimensions VIRGULE une_dimension
                            ;

une_dimension               : ea1 PP ea1 {nb_dimensions++;;f=enfiler(f,$1); f=enfiler(f,$3);}
                            ;

liste_champs                : un_champ
                            | liste_champs POINT_VIRGULE un_champ
                            ;

un_champ                    : IDF DEUX_POINTS nom_type {numchamps++; f=enfiler(f,$3); f=enfiler(f, $1);}
                            ;

nom_type                    : type_simple                 {$$=$1;}
                            | IDF                         {$$=$1;}
                            ;

type_simple                 : ENTIER                      {$$=$1;}
                            | REEL                        {$$=$1;}
                            | BOOLEEN                     {$$=$1;}
                            | CARACTERE                   {$$=$1;}
                            | CHAINE CROCHET_OUVRANT CSTE_ENTIERE CROCHET_FERMANT
                            ;

declaration_variable        : VARIABLE IDF DEUX_POINTS nom_type {insererDeclaration($2,N_VAR, numchamps);}
                            ;

declaration_procedure       : PROCEDURE IDF liste_parametres corps {insererDeclaration($2,N_PROC, $3);}
                            ;

declaration_fonction        : FONCTION IDF liste_parametres RETOURNE type_simple corps {f=enfiler(f,$5); insererDeclaration($2,N_FONC,$3);}
                            ;

liste_parametres            :
                            | PARENTHESE_OUVRANTE liste_param PARENTHESE_FERMANTE {$$=nb_params; nb_params=0;}
                            ;

liste_param                 : un_param
                            | liste_param POINT_VIRGULE un_param
                            ;

un_param                    : IDF DEUX_POINTS type_simple {nb_params++; f=enfiler(f, $3); f=enfiler(f,$1);}
                            ;

instruction                 : affectation
                            | condition
                            | tant_que
                            | appel
                            | VIDE
                            | RETOURNE resultat_retourne
                            ;

resultat_retourne           : 
                            | expression
                            ;

appel                       : IDF liste_arguments{
                                arbre ag=creer_arbre_vide();
                                arbre ad=creer_arbre_vide();
                                if(!a_est_pile_vide(p_arbre)){
                                    ag=a_sommet(p_arbre); 
                                    p_arbre=a_depiler(p_arbre);
                                }else{
                                    arbre ag=creer_noeud(A_APPEL, A_EMPTY_LEX, A_EMPTY_DEC);
                                }
                                if(!a_est_pile_vide(p_arbre)){
                                    ad=a_sommet(p_arbre); 
                                    p_arbre = a_depiler(p_arbre);
                                }else{
                                    ad=creer_noeud(A_APPEL, A_EMPTY_LEX, A_EMPTY_DEC);
                                }
                                arbre ab = creer_arbre(A_APPEL, A_EMPTY_LEX, A_EMPTY_DEC, ag, ad); 
                                p_arbre=a_empiler(p_arbre, ab);}
                            ;

liste_arguments             :
                            | PARENTHESE_OUVRANTE liste_args PARENTHESE_FERMANTE
                            ;

liste_args                  : un_arg
                            | liste_args VIRGULE un_arg
                            ;

un_arg                      : expression
                            ;

condition                   : SI eb1 ALORS liste_instructions SINON liste_instructions{
                                arbre ag=creer_arbre_vide();
                                arbre ad=creer_arbre_vide();
                                if(!a_est_pile_vide(p_arbre)){
                                    ag=a_sommet(p_arbre); 
                                    p_arbre=a_depiler(p_arbre);
                                }else{
                                    ag=creer_noeud(A_IF, A_EMPTY_LEX, A_EMPTY_DEC);
                                }
                                if(!a_est_pile_vide(p_arbre)){
                                    ad=a_sommet(p_arbre); 
                                    p_arbre = a_depiler(p_arbre);
                                }else{
                                    ad=creer_noeud(A_IF, A_EMPTY_LEX, A_EMPTY_DEC);
                                }
                                arbre ab = creer_arbre(A_IF, A_EMPTY_LEX, A_EMPTY_DEC, ag, ad); 
                                p_arbre=a_empiler(p_arbre, ab);}
                            ;

tant_que                    : TANT_QUE eb1 FAIRE liste_instructions{
                                arbre ag=creer_arbre_vide();
                                arbre ad=creer_arbre_vide();
                                if(!a_est_pile_vide(p_arbre)){
                                    ag=a_sommet(p_arbre); 
                                    p_arbre=a_depiler(p_arbre);
                                }else{
                                    ag=creer_noeud(A_WHILE, A_EMPTY_LEX, A_EMPTY_DEC);
                                }
                                if(!a_est_pile_vide(p_arbre)){
                                    ad=a_sommet(p_arbre); 
                                    p_arbre = a_depiler(p_arbre);
                                }else{
                                    ad=creer_noeud(A_WHILE, A_EMPTY_LEX, A_EMPTY_DEC);
                                }
                                arbre ab = creer_arbre(A_WHILE, A_EMPTY_LEX, A_EMPTY_DEC, ag, ad); 
                                p_arbre=a_empiler(p_arbre, ab);}
                            ;

affectation                 : variable OPAFF expression {
    printf("OLOL\n");
                                arbre ag=creer_arbre_vide();
                                  printf("OLOL2\n");
                                arbre ad=creer_arbre_vide();
                                  printf("OLOL3\n");
                                if(!a_est_pile_vide(p_arbre)){
                                      printf("OLOL IF\n");
                                    ag=a_sommet(p_arbre); 
                                    p_arbre=a_depiler(p_arbre);
                                }else{
                                      printf("OLOL else\n");
                                    ag=creer_noeud(A_AFFECT, A_EMPTY_LEX, A_EMPTY_DEC);
                                }
                                if(!a_est_pile_vide(p_arbre)){
                                    printf("OLOL IF2\n");
                                    ad=a_sommet(p_arbre); 
                                    p_arbre = a_depiler(p_arbre);
                                }else{
                                    printf("OLOL else 2\n");
                                    ad=creer_noeud(A_AFFECT, A_EMPTY_LEX, A_EMPTY_DEC);
                                }
                                printf("OLOL end\n");
                                ab = creer_arbre(A_AFFECT, A_EMPTY_LEX, A_EMPTY_DEC, ag, ad); 
                                printf("OLOL ARBRE OK\n");
                                p_arbre=a_empiler(p_arbre, ab);printf("OVER & OUT\n");
                                }
                            ;

variable                    : IDF {printf("???? $1 :: %d\n", $1);ab = creer_arbre_vide();printf("toto\n"); ab=creer_noeud(A_IDF, $1, assoc_nom($1));printf("J'empile\n"); p_arbre=a_empiler(p_arbre, ab);}
                            | IDF vtab
                            | IDF POINT variable
                            | IDF vtab POINT variable
                            ;

vtab                        : vtab CROCHET_OUVRANT ea1 CROCHET_FERMANT
                            | CROCHET_OUVRANT ea1 CROCHET_FERMANT
                            ;


expression                  : ea1
                            | eb1
                            ;

ea1                         : ea1 PLUS ea2 {$$=$1 + $2;
                                arbre ag=creer_arbre_vide();
                                arbre ad=creer_arbre_vide();
                                if(!a_est_pile_vide(p_arbre)){
                                    ag=a_sommet(p_arbre); 
                                    p_arbre=a_depiler(p_arbre);
                                }else{
                                    ag=creer_noeud(A_AFFECT, A_EMPTY_LEX, A_EMPTY_DEC);
                                }
                                if(!a_est_pile_vide(p_arbre)){
                                    ad=a_sommet(p_arbre); 
                                    p_arbre = a_depiler(p_arbre);
                                }else{
                                    ad=creer_noeud(A_AFFECT, A_EMPTY_LEX, A_EMPTY_DEC);
                                }
                                ab = creer_arbre(A_PLUS, A_EMPTY_LEX, A_EMPTY_DEC, ag, ad); 
                                p_arbre=a_empiler(p_arbre, ab);}
                            | ea1 MOINS ea2 {$$=$1 + $2;
                                arbre ag=creer_arbre_vide();
                                arbre ad=creer_arbre_vide();
                                if(!a_est_pile_vide(p_arbre)){                           
                                    ag=a_sommet(p_arbre); 
                                    p_arbre=a_depiler(p_arbre);
                                }else{
                                    ag=a_sommet(p_arbre);
                                }
                                if(!a_est_pile_vide(p_arbre)){
                                    ad=a_sommet(p_arbre); 
                                    p_arbre = a_depiler(p_arbre);
                                }else{
                                    ad=a_sommet(p_arbre);                                   
                                }
                                ab = creer_arbre(A_MOINS, A_EMPTY_LEX, A_EMPTY_DEC, ag, ad); 
                                p_arbre=a_empiler(p_arbre, ab);}
                            | ea2 {$$=$1;}
                            ;

ea2                         : ea2 MULT ea3 {$$=$1 * $2;
                                arbre ag=a_sommet(p_arbre); 
                                p_arbre=a_depiler(p_arbre);
                                arbre ad=a_sommet(p_arbre); 
                                p_arbre = a_depiler(p_arbre);
                                ab = creer_arbre(A_MULT, A_EMPTY_LEX, A_EMPTY_DEC, ag, ad); 
                                p_arbre=a_empiler(p_arbre, ab);}
                            | ea2 DIV ea3  {$$=$1/$2;
                                arbre ag=a_sommet(p_arbre); 
                                p_arbre=a_depiler(p_arbre);
                                arbre ad=a_sommet(p_arbre); 
                                p_arbre = a_depiler(p_arbre);
                                ab = creer_arbre(A_DIV, A_EMPTY_LEX, A_EMPTY_DEC, ag, ad); 
                                p_arbre=a_empiler(p_arbre, ab);}
                            | ea3 {$$=$1;}
                            ;
          
ea3                         : MOINS ea4 {$$=-1*$2;/*** OBSOLETE ***/}
                            | PLUS ea4  {$$=1*$2;/*** OBSOLETE ***/ }
                            | ea4  {$$=$1;}
                            ;

ea4                         : PARENTHESE_OUVRANTE ea1 PARENTHESE_FERMANTE {$$=$2;}
                            | variable  {$$=$1;}
                            | CSTE_ENTIERE {$$=$1; printf("avconst\n");ab = creer_noeud(A_CSTE_E, A_EMPTY_LEX, A_EMPTY_DEC); printf("const\n");p_arbre=a_empiler(p_arbre, ab);}
                            | CSTE_REELLE {$$=$1; ab = creer_noeud(A_CSTE_R, A_EMPTY_LEX, A_EMPTY_DEC); p_arbre=a_empiler(p_arbre, ab);}
                            | CARAC  {$$=$1; ab = creer_noeud(A_CSTE_C, A_EMPTY_LEX, A_EMPTY_DEC); p_arbre=a_empiler(p_arbre, ab);}
                            | CHAINECARAC {ab = creer_noeud(A_CSTE_S, A_EMPTY_LEX, A_EMPTY_DEC); p_arbre=a_empiler(p_arbre, ab);}
                            ;

eb1                         : eb1 OU eb2
                            | eb2
                            ;

eb2                         : eb2 ET eb3
                            | eb3
                            ;
               
eb3                         : NOT eb4
                            | eb4
                            ;

eb4                         : PARENTHESE_OUVRANTE eb1 PARENTHESE_FERMANTE
                            | TRUE {ab = creer_noeud(A_TRUE, A_EMPTY_LEX, A_EMPTY_DEC); p_arbre=a_empiler(p_arbre, ab);}
                            | FALSE {ab = creer_noeud(A_FALSE, A_EMPTY_LEX, A_EMPTY_DEC); p_arbre=a_empiler(p_arbre, ab);}
                            | comparaison
                            ;

comparaison                 : ea1 OPEG ea1
                            | ea1 OPINF ea1
                            | ea1 OPSUP ea1
                            | ea1 OPINFE ea1
                            | ea1 OPSUPE ea1
                            | ea1 OPDIFF ea1
                            ;
%%

int yyerror(){
    printf("erreur ligne %d\n", numligne);
}

