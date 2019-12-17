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
    void erreur_type(int type1, int type2);
    int erreur_tab(int nb_dim, int num_lex);
    
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
suite_declaration_type un_champ nom_type type_simple condition tant_que affectation vtab
ea1 ea2 ea3 ea4 eb1 eb2 eb3 eb4 expression variable liste_arguments liste_args un_arg
IDF ENTIER REEL BOOLEEN CARACTERE CSTE_ENTIERE CSTE_REELLE CARAC comparaison VIDE resultat_retourne liste_parametres appel RETOURNE PROCEDURE FONCTION


%%

programme                   : PROG corps {$$.a=$2.a; ab = $$.a; tab_region[0].a=$2.a;}
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

suite_liste_inst            : instruction POINT_VIRGULE  {$$.a=creer_noeud(A_LISTE, A_EMPTY_LEX, A_EMPTY_DEC); $$.a->fils_gauche=$1.a;}
                            | suite_liste_inst instruction POINT_VIRGULE {arbre tmp = $1.a; while(!est_vide(tmp->fils_gauche->frere_droit))
                                                                                                              tmp = tmp->fils_gauche->frere_droit;
                                                                                                              tmp->fils_gauche->frere_droit = concat_fils(creer_noeud(A_LISTE, A_EMPTY_LEX, A_EMPTY_DEC),$2.a);
                                                                                                       
                                                                                                         $$.a = $1.a; }

                     ;

declaration_pf              : declaration_procedure
                            | declaration_fonction
                            ;

declaration_type            : TYPE IDF DEUX_POINTS suite_declaration_type  {
         if($4.type==0){insererDeclaration($2.type,N_STRUCT, numchamps, -1, -1);numchamps=0;}
         else{insererDeclaration($2.type,N_TAB, nb_dimensions, -1, -1);nb_dimensions=0; }
                            }
                            ;

suite_declaration_type      : STRUCT liste_champs FSTRUCT {$$.type=0;}
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
                            | IDF                         {$$.type=$1.type;}
                            ;

type_simple                 : ENTIER                      {$$.type=N_INT;}
                            | REEL                        {$$.type=N_DOUBLE;}
                            | BOOLEEN                     {$$.type=N_BOOL;}
                            | CARACTERE                   {$$.type=N_CHAR;}
                            | CHAINE CROCHET_OUVRANT CSTE_ENTIERE CROCHET_FERMANT {;}
                            ;

declaration_variable        : VARIABLE IDF DEUX_POINTS nom_type {insererDeclaration($2.type,N_VAR, numchamps, $4.type, -1);}
                            ;

declaration_procedure       : PROCEDURE IDF liste_parametres corps {insererDeclaration($2.type,N_PROC, $3.type, -1, $1.type); tab_region[$1.type].a=$4.a;}
                            ;

declaration_fonction        : FONCTION IDF liste_parametres RETOURNE type_simple corps {f=enfiler(f,$5.type); insererDeclaration($2.type,N_FONC,$3.type, -1, $1.type); tab_region[$1.type].a=$6.a;}
                            ;

liste_parametres            : {;}
                            | PARENTHESE_OUVRANTE liste_param PARENTHESE_FERMANTE {$$.type=nb_params; nb_params=0;}
                            ;

liste_param                 : un_param
                            | liste_param POINT_VIRGULE un_param
                            ;

un_param                    : IDF DEUX_POINTS type_simple {insererDeclaration($1.type, N_PARAM, numchamps, $3.type, -1); nb_params++; p_dec=empiler(p_dec, $3.type); p_dec=empiler(p_dec,$1.type);}
                            ;

instruction                 : affectation {$$ = $1;}
                            | condition {$$ = $1;}
                            | tant_que {$$ = $1;}
                            | appel {$$ = $1;}
                            | VIDE {$$ = $1;}
                            | RETOURNE resultat_retourne {$$ = $2;}
                            ;

resultat_retourne           : {;}
                            | expression
                            ;

appel                       : IDF liste_arguments {$$.a = creer_noeud($1.type, A_EMPTY_LEX, A_EMPTY_DEC); $$.type=$1.type;}
                            ;

liste_arguments             : {$$.a = creer_arbre_vide();} 
                            | PARENTHESE_OUVRANTE liste_args PARENTHESE_FERMANTE {$$ = $2;}
                            ;

liste_args                  : un_arg{$$=$1;}
                            | liste_args VIRGULE un_arg {$$.a = concat_frere($1.a, $3.a);}
                            ;

un_arg                      : expression {$$ = $1;}
                            ;

condition                   : SI eb1 ALORS liste_instructions SINON liste_instructions {$$.a=creer_arbre(A_IF,A_EMPTY_LEX,A_EMPTY_DEC,concat_fils(creer_noeud(A_LISTE_IF,A_EMPTY_LEX,A_EMPTY_DEC),$4.a),concat_fils(creer_noeud(A_LISTE_ELSE,A_EMPTY_LEX,A_EMPTY_DEC),$6.a));
                                                                                                         

 }
                            ;

tant_que                    : TANT_QUE eb1 FAIRE liste_instructions {$$.a=creer_arbre(A_WHILE,A_EMPTY_LEX,A_EMPTY_DEC,$2.a,$4.a);}
                            ;

affectation                 : variable OPAFF expression {erreur_type($1.type, $3.type); $$.a=creer_arbre(A_AFFECT,A_EMPTY_LEX,A_EMPTY_DEC,$1.a,$3.a); 
                              
                                }
                            ;

variable                    : IDF {if(assoc_nom($1.type)==-1){printf("Erreur ligne %d : la variable %s n'est pas déclarée dans les regions englobantes\n", numligne,tab_lexico[$1.type].lexeme);}; $$.a=creer_noeud(A_IDF,$1.type, assoc_nom($1.type)); $$.type=$1.type;}
| IDF vtab {$$.type=erreur_tab($2.type, $1.type); $$.a=creer_noeud(A_IDF,$1.type, assoc_nom($1.type));}
                            | IDF POINT variable {$$.a=creer_noeud(A_IDF,$1.type, assoc_nom($1.type));}
                            | IDF vtab POINT variable {$$.a=creer_noeud(A_IDF,$1.type, assoc_nom($1.type));}
                            ;

vtab                        : vtab CROCHET_OUVRANT ea1 CROCHET_FERMANT {$$.type=$1.type+1;}
                            | CROCHET_OUVRANT ea1 CROCHET_FERMANT {$$.type=1;}
                            ;


expression                  : ea1 {$$=$1;}
                            | eb1 {$$=$1;}
                            ;

ea1                         : ea1 PLUS ea2 {erreur_type($1.type, $3.type); $$.a=creer_arbre(A_PLUS,A_EMPTY_LEX,A_EMPTY_DEC,$1.a,$3.a); }
                         
                            | ea1 MOINS ea2 {erreur_type($1.type, $3.type); $$.a=creer_arbre(A_MOINS,A_EMPTY_LEX,A_EMPTY_DEC,$1.a,$3.a);}
                              
                            | ea2 {$$.a=$1.a;}
                            ;

ea2                         : ea2 MULT ea3 {erreur_type($1.type, $3.type); $$.a=creer_arbre(A_MULT,A_EMPTY_LEX,A_EMPTY_DEC,$1.a,$3.a);}
                            | ea2 DIV ea3  {erreur_type($1.type, $3.type); $$.a=creer_arbre(A_DIV,A_EMPTY_LEX,A_EMPTY_DEC,$1.a,$3.a);}
                            | ea3 {$$.a=$1.a;}
                            ;
          
ea3                         : MOINS ea4 {$$.a=$2.a;}
                            | PLUS ea4  {$$.a=$2.a;}
                            | ea4  {$$.a=$1.a;}
                            ;

ea4                         : PARENTHESE_OUVRANTE ea1 PARENTHESE_FERMANTE {$$.a=$2.a;}
                            | variable  {$$.a=$1.a;}
                            | CSTE_ENTIERE {$$.a=creer_noeud(A_CSTE_E,A_EMPTY_LEX,A_EMPTY_DEC); $$.i=$1.i; $$.type=N_INT;}
                            | CSTE_REELLE {$$.a=creer_noeud(A_CSTE_R,A_EMPTY_LEX,A_EMPTY_DEC); $$.f=$1.f; $$.type=N_DOUBLE;}
                            | CARAC  {$$.a=creer_noeud(A_CSTE_C,A_EMPTY_LEX,A_EMPTY_DEC); $$.c = $1.c; $$.type=N_CHAR;}
                            | CHAINECARAC {$$.a=creer_noeud(A_CSTE_S,A_EMPTY_LEX,A_EMPTY_DEC);}
                            ;

eb1                         : eb1 OU eb2  {$$.a=creer_arbre(A_OU,A_EMPTY_LEX,A_EMPTY_DEC, $1.a, $3.a);}
                            | eb2 {$$.a=$1.a;}
                            ;

eb2                         : eb2 ET eb3 {$$.a=creer_arbre(A_ET,A_EMPTY_LEX,A_EMPTY_DEC,$1.a,$3.a);}
                            | eb3  {$$.a=$1.a;}
                            ;
               
eb3                         : NOT eb4 {$$.a=$2.a;}
                            | eb4 {$$.a=$1.a;}
                            ;

eb4                         : PARENTHESE_OUVRANTE eb1 PARENTHESE_FERMANTE  {$$.a=$2.a;}
                            | TRUE {$$.a=creer_noeud(A_TRUE,A_EMPTY_LEX,A_EMPTY_DEC); $$.type=N_BOOL;}
                            | FALSE {$$.a=creer_noeud(A_FALSE,A_EMPTY_LEX,A_EMPTY_DEC); $$.type=N_BOOL;}
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
    printf("Erreur ligne %d\n", numligne);
}

void erreur_type(int type1, int type2){
    if(!( type1==-1 || type2==-1 || assoc_nom(type1)==-1 || assoc_nom(type2)==-1)){
        if(tab_decla[assoc_nom(type1)].description != tab_decla[assoc_nom(type2)].description){
            fprintf(stderr,"Erreur ligne %d : les deux valeurs ne sont pas du même type\n", numligne);
        }
    }
}

int erreur_tab(int nb_dim, int num_lex){
    int n;

    /*Ne pas oublie de tester les limites des dimensions utiliser un tableau pour recup les valeurs */
    
    if(tab_decla[assoc_nom(num_lex)].description<4){
        fprintf(stderr,"Erreur ligne %d : %s n'est pas un tableau\n", numligne, tab_lexico[num_lex].lexeme);
        return -1;
    }else{
        n =tab_representation[tab_decla[tab_decla[assoc_nom(num_lex)].description].description+1];
        if(n!=nb_dim){
        
            fprintf(stderr,"Erreur ligne %d : le tableau %s nécessite %d dimension%c\n", numligne, tab_lexico[num_lex].lexeme, n, (n>1)?'s':' ');
            return -1;
        }

        return tab_representation[tab_decla[tab_decla[assoc_nom(num_lex)].description].description];
    }
}

int main(int argc, char *argv[]){

    int i, j;
    
    yyparse();
    
    if(argc > 1){
        if(strcmp(argv[1], "-v")==0){
            afficheTabLexico();
            afficheTabDeclaration();
            afficheTabRepresentation();
            afficheTabRegion();
            for(j=0; j<incr_reg; j++){
                fprintf(stdout, "\n---------------------Arbre :-----------------------------\n");
                fprintf(stdout, "arbre region %d :\n", j);
                affiche_arbre(tab_region[j].a);
                fprintf(stdout, "\n\n");
            }              
        }else{
            for(i=1; i<argc; i++){

                if(strcmp(argv[i], "-d")==0){
                    afficheTabDeclaration();                
                }else if(strcmp(argv[i], "-a")==0){
                    fprintf(stdout, "\n---------------------Arbre :-----------------------------\n");
                    for(j=0; j<incr_reg; j++){
                        fprintf(stdout, "arbre region %d :\n", j);
                        affiche_arbre(tab_region[j].a);
                        fprintf(stdout, "\n\n");
                    }                    
                }else if(strcmp(argv[i], "-l")==0){
                    afficheTabLexico();
                    
                }else if(strcmp(argv[i], "-r")==0){
                    afficheTabRegion();
                    
                }else if(strcmp(argv[i], "-e")==0){
                    afficheTabRepresentation();
                }

            }
        }
    }
    
    exit(0);
}