%{
    #include <stdio.h>
    #include <stdlib.h>
    #include "util/tables.h"
    #include "y.tab.h"
    extern int numligne;
    extern char * yytext;
    extern int yylex();
    extern int yyerror();
    extern int assoc_nom(int n);
    extern int incr_reg;
    //extern int yylval;
    extern file f;
    extern pile p_dec;

    int nb_dimensions=0;
    int numchamps=0;
    int nb_params =0;
    arbre ab;
    extern int toto;
    extern int tata;
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
%union{
    struct{
        union{
            int i;
            float f;
            char c;
        };
        int type;
        arbre a;
    }arbre_type;
}

%type<arbre_type> programme corps liste_instructions suite_liste_inst instruction declaration_pf declaration_type declaration_fonction declaration_variable declaration_procedure 
suite_declaration_type un_champ nom_type type_simple condition tant_que affectation 
ea1 ea2 ea3 ea4 eb1 eb2 eb3 eb4 expression variable liste_arguments liste_args un_arg
IDF ENTIER REEL BOOLEEN CARACTERE CSTE_ENTIERE CSTE_REELLE CARAC comparaison VIDE resultat_retourne liste_parametres appel RETOURNE PROCEDURE FONCTION


%%

programme                   : PROG corps {$$.a=$2.a; ab = $$.a;}
                            ;

corps                       : liste_declarations liste_instructions {$$.a=$2.a; p=depiler(p);}
                            ;

liste_declarations          : liste_declarations_type liste_declarations_variable liste_declarations_pf
                            ;


liste_declarations_type     : liste_declarations_type declaration_type POINT_VIRGULE
                            |
                            ;

liste_declarations_variable : liste_declarations_variable declaration_variable POINT_VIRGULE
                            |
                            ;

liste_declarations_pf       : liste_declarations_pf declaration_pf POINT_VIRGULE  {}
                            |
                            ;

liste_instructions          : DEBUT suite_liste_inst FIN {$$.a=$2.a;}
                            ;

suite_liste_inst            : instruction POINT_VIRGULE  {printf("eazea \n");$$.a=concat_fils(creer_noeud(A_LISTE, A_EMPTY_LEX, A_EMPTY_DEC),$1.a);}
                            | suite_liste_inst instruction POINT_VIRGULE {printf("SIGSEGV\n");$$.a=$1.a; $$.a->fils_gauche=concat_frere($$.a->fils_gauche,concat_fils(creer_noeud(A_LISTE, A_EMPTY_LEX, A_EMPTY_DEC),$2.a));}
                            ;

declaration_pf              : declaration_procedure
                            | declaration_fonction
                            ;

declaration_type            : TYPE IDF DEUX_POINTS suite_declaration_type  {printf("struct higher!!!\n");
         if($4.type==0){insererDeclaration($2.type,N_STRUCT, numchamps, -1, -1);numchamps=0;}
         else{insererDeclaration($2.type,N_TAB, nb_dimensions, -1, -1);nb_dimensions=0; }
                            }
                            ;

suite_declaration_type      : STRUCT liste_champs FSTRUCT {printf("struct!!!\n");$$.type=0;}
                            | TABLEAU dimension DE nom_type {$$.type=1;f=enfiler(f, $4.type);}
                            ;

dimension                   : CROCHET_OUVRANT liste_dimensions CROCHET_FERMANT 
                            ;

liste_dimensions            : une_dimension
                            | liste_dimensions VIRGULE une_dimension    
                            ;

une_dimension               : CSTE_ENTIERE PP CSTE_ENTIERE {nb_dimensions++;;f=enfiler(f,$1.i); f=enfiler(f,$3.i);}
                            ;

liste_champs                : un_champ
                            | liste_champs POINT_VIRGULE un_champ
                            ;

un_champ                    : IDF DEUX_POINTS nom_type {numchamps++; f=enfiler(f,$3.type); f=enfiler(f, $1.type);}
                            ;

nom_type                    : type_simple                 {$$.type=$1.type;}
                            | IDF                         {printf("???\n");$$.type=$1.type;}
                            ;

type_simple                 : ENTIER                      {$$.type=N_INT;}
                            | REEL                        {$$.type=N_DOUBLE;}
                            | BOOLEEN                     {$$.type=N_BOOL;}
                            | CARACTERE                   {$$.type=N_CHAR;}
                            | CHAINE CROCHET_OUVRANT CSTE_ENTIERE CROCHET_FERMANT {;}
                            ;

declaration_variable        : VARIABLE IDF DEUX_POINTS nom_type {printf("type1 : %d, : %d\n", $2.type, $4.type);insererDeclaration($2.type,N_VAR, numchamps, $4.type, -1);}
                            ;

declaration_procedure       : PROCEDURE IDF liste_parametres corps {insererDeclaration($2.type,N_PROC, $3.type, -1, $1.type);}
                            ;

declaration_fonction        : FONCTION IDF liste_parametres RETOURNE type_simple corps {f=enfiler(f,$5.type); insererDeclaration($2.type,N_FONC,$3.type, -1, $1.type);}
                            ;

liste_parametres            : {;}
                            | PARENTHESE_OUVRANTE liste_param PARENTHESE_FERMANTE {$$.type=nb_params; nb_params=0;}
                            ;

liste_param                 : un_param
                            | liste_param POINT_VIRGULE un_param
                            ;

un_param                    : IDF DEUX_POINTS type_simple {insererDeclaration($1.type, N_PARAM, numchamps, $3.type, -1); nb_params++; printf("empilage\n");p_dec=empiler(p_dec, $3.type); p_dec=empiler(p_dec,$1.type);}
                            ;

instruction                 : affectation {printf("toto1\n");$$ = $1;}
                            | condition {printf("toto2\n");$$ = $1;}
                            | tant_que {printf("toto3\n");$$ = $1;}
                            | appel {printf("toto4\n");$$ = $1;}
                            | VIDE {printf("toto5\n");$$ = $1;}
                            | RETOURNE resultat_retourne {printf("totok\n");$$ = $2;}
                            ;

resultat_retourne           : {;}
                            | expression
                            ;

appel                       : IDF liste_arguments {printf("dude\n");$$.a = creer_noeud($1.type, A_EMPTY_LEX, A_EMPTY_DEC); $$.type=$1.type;}
                            ;

liste_arguments             : {$$.a = creer_arbre_vide();} 
                            | PARENTHESE_OUVRANTE liste_args PARENTHESE_FERMANTE {$$ = $2;}
                            ;

liste_args                  : un_arg{$$=$1;}
                            | liste_args VIRGULE un_arg {$$.a = concat_frere($1.a, $3.a);}
                            ;

un_arg                      : expression {$$ = $1;}
                            ;

condition                   : SI eb1 ALORS liste_instructions SINON liste_instructions {fprintf(stdout, "olol1\n");$$.a=creer_arbre(A_IF,A_EMPTY_LEX,A_EMPTY_DEC,concat_fils(creer_noeud(A_LISTE_IF,A_EMPTY_LEX,A_EMPTY_DEC),$4.a),concat_fils(creer_noeud(A_LISTE_ELSE,A_EMPTY_LEX,A_EMPTY_DEC),$6.a));
                                                                                                         

 }
                            ;

tant_que                    : TANT_QUE eb1 FAIRE liste_instructions {$$.a=creer_arbre(A_WHILE,A_EMPTY_LEX,A_EMPTY_DEC,$2.a,$4.a);}
                            ;

affectation                 : variable OPAFF expression {printf("TEST AFFEC\n");$$.a=creer_arbre(A_AFFECT,A_EMPTY_LEX,A_EMPTY_DEC,$1.a,$3.a); 
                              
                                }
                            ;

variable                    : IDF {printf("avant bug\n"); $$.a=creer_noeud(A_IDF,$1.type,assoc_nom($1.type)); printf("avant $$=type\n"); $$.type=$1.type;printf("apres bug\n");}
                            | IDF vtab {printf("avant bugaezeza\n");creer_noeud(A_IDF,$1.type,assoc_nom($1.type)); $$.type=$1.type;}
                            | IDF POINT variable {printf("avant bezazeug\n");creer_noeud(A_IDF,$1.type,assoc_nom($1.type));}
                            | IDF vtab POINT variable {printf("avanzeezat bug\n");creer_noeud(A_IDF,$1.type,assoc_nom($1.type));}
                            ;

vtab                        : vtab CROCHET_OUVRANT ea1 CROCHET_FERMANT
                            | CROCHET_OUVRANT ea1 CROCHET_FERMANT
                            ;


expression                  : ea1   {$$=$1;}
                            | eb1 {$$=$1;}
                            ;

ea1                         : ea1 PLUS ea2 {if($1.type != $3.type){
                                        fprintf(stderr,"les deux valeurs ne sont pas du même type\nerror %d\n", numligne);
                                        }else $$.a=creer_arbre(A_PLUS,A_EMPTY_LEX,A_EMPTY_DEC,$1.a,$3.a); }
                         
                            | ea1 MOINS ea2 {$$.a=creer_arbre(A_MOINS,A_EMPTY_LEX,A_EMPTY_DEC,$1.a,$3.a);}
                              
                            | ea2 {$$.a=$1.a;}
                            ;

ea2                         : ea2 MULT ea3 {$$.a=creer_arbre(A_MULT,A_EMPTY_LEX,A_EMPTY_DEC,$1.a,$3.a);}
                            | ea2 DIV ea3  {$$.a=creer_arbre(A_DIV,A_EMPTY_LEX,A_EMPTY_DEC,$1.a,$3.a);}
                            | ea3 {$$.a=$1.a;}
                            ;
          
ea3                         : MOINS ea4 {$$.a=$2.a;}
                            | PLUS ea4  {$$.a=$2.a;}
                            | ea4  {$$.a=$1.a;}
                            ;

ea4                         : PARENTHESE_OUVRANTE ea1 PARENTHESE_FERMANTE {$$.a=$2.a;}
                            | variable  {$$.a=$1.a;}
                            | CSTE_ENTIERE {printf("buuuuusd fgfdggy\n");$$.a=creer_noeud(A_CSTE_E,A_EMPTY_LEX,A_EMPTY_DEC); $$.i=$1.i; $$.type=N_INT;}
                            | CSTE_REELLE {printf("buuuuuff df dfggy\n");$$.a=creer_noeud(A_CSTE_R,A_EMPTY_LEX,A_EMPTY_DEC); $$.f=$1.f; $$.type=N_DOUBLE;}
                            | CARAC  {printf("buuuuusdggdfggy\n");$$.a=creer_noeud(A_CSTE_C,A_EMPTY_LEX,A_EMPTY_DEC); $$.c = $1.c; $$.type=N_CHAR;}
                            | CHAINECARAC {printf("buuuuugfgfdggy\n");$$.a=creer_noeud(A_CSTE_S,A_EMPTY_LEX,A_EMPTY_DEC);}
                            ;

eb1                         : eb1 OU eb2  {printf("buuuuugaezaezegy\n");$$.a=creer_arbre(A_OU,A_EMPTY_LEX,A_EMPTY_DEC, $1.a, $3.a);}
                            | eb2 {printf("buuuuuezaeeaggy\n");$$.a=$1.a;}
                            ;

eb2                         : eb2 ET eb3 {$$.a=creer_arbre(A_ET,A_EMPTY_LEX,A_EMPTY_DEC,$1.a,$3.a);}
                            | eb3  {$$.a=$1.a;}
                            ;
               
eb3                         : NOT eb4 {$$.a=$2.a;}
                            | eb4 {$$.a=$1.a;}
                            ;

eb4                         : PARENTHESE_OUVRANTE eb1 PARENTHESE_FERMANTE  {$$.a=$2.a;}
                            | TRUE {printf("btrueee  uuuuuggy\n");$$.a=creer_noeud(A_TRUE,A_EMPTY_LEX,A_EMPTY_DEC); $$.type=N_BOOL;}
                            | FALSE {printf("buuuuugg   false y\n");$$.a=creer_noeud(A_FALSE,A_EMPTY_LEX,A_EMPTY_DEC); $$.type=N_BOOL;}
                            | comparaison {$$.a=$1.a;}
                            ;

 comparaison                 : ea1 OPEG ea1 {$$.a=creer_arbre(A_EG,A_EMPTY_LEX,A_EMPTY_DEC,$1.a,$3.a);}
                            | ea1 OPINF ea1 {$$.a=creer_arbre(A_INF,A_EMPTY_LEX,A_EMPTY_DEC,$1.a,$3.a);}
                            | ea1 OPSUP ea1 {$$.a=creer_arbre(A_SUP,A_EMPTY_LEX,A_EMPTY_DEC,$1.a,$3.a);}
                            | ea1 OPINFE ea1 {$$.a=creer_arbre(A_INF_EG,A_EMPTY_LEX,A_EMPTY_DEC,$1.a,$3.a);}
                            | ea1 OPSUPE ea1 {$$.a=creer_arbre(A_SUP_EG,A_EMPTY_LEX,A_EMPTY_DEC,$1.a,$3.a);}
                            | ea1 OPDIFF ea1 {$$.a=creer_arbre(A_DIFF,A_EMPTY_LEX,A_EMPTY_DEC,$1.a,$3.a);}
                            ;
%%

int yyerror(){
    printf("erreur ligne %d\n", numligne);
}

