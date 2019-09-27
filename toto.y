%{
LOL LOL2
%}

%token PROG POINT_VIRGULE ACCOLADE_OUVRANTE
%token TYPE DEUX_POINTS CROCHET_OUVRANT CROCHET_FERMANT
%token VIRGULE OPAFF POINT VIDE RETOURNE FONCTION PROCEDURE
%token VARIABLE TANT_QUE SI SINON
%token ENTIER REEL BOOLEEN CHAINE CARACTERE CSTE_ENTIERE
%token OPEG OPINF OPSUP OPINFE OPSUPE OPDIFF 
%token NEG POS NOT PLUS MOINS MULT DIV MOD
%token TRUE FALSE
%token IDF

%%
programme              : PROG corps 
                       ;

corps                  : liste_declarations liste_instructions
                       | liste_instructions 
                       ;


liste_declarations     : declaration POINT_VIRGULE
                       | liste_declarations declaration POINT_VIRGULE
                       ;

liste_instructions     : ACCOLADE_OUVRANTE suite_liste_inst ACCOLADE_FERMANTE
                       ;

suite_liste_inst       : instruction POINT_VIRGULE
                       | suite_liste_inst instruction POINT_VIRGULE
                       ;

declaration            : declaration_type
                       | declaration_variable
                       | declaration_procedure
                       | declaration_fonction
                       ;



/////   \\\\\
       
     |||   
     |||  !!!! PAS DE YACC POUR LES DECLARATIONS !!!!
     |||     (tableaux structures et types)
     ***
      
\\\\\    /////

liste_champs           : un_champ
                       | liste_champs POINT_VIRGULE un_champ
                       ;

un_champ               : IDF DEUX_POINTS nom_type
                       ;

nom_type               : type_simple
                       | IDF
                       ;

type_simple            : ENTIER
                       | REEL
                       | BOOLEEN
                       | CARACTERE
                       | CHAINE CROCHET_OUVRANT CSTE_ENTIERE CROCHET_FERMANT
                       ;

declaration_variable   : VARIABLE IDF DEUX_POINTS nom_type
                       ;

declaration_procedure  : PROCEDURE IDF liste_parametres corps
                       ;

declaration_fonction   : FONCTION IDF liste_parametres RETOURNE type_simple corps
                       ;

liste_parametres       :
                       | PARENTHESE_OUVRANTE liste_param PARENTHESE_FERMANTE
                       ;

liste_param            : un_param
                       | liste_param POINT_VIRGULE un_param
                       ;

un_param               : IDF DEUX_POINTS type_simple
                       ;

instruction            : affectation
                       | condition
                       | tant_que
                       | appel
                       | VIDE
                       | RETOURNE resultat_retourne
                       ;

resultat_retourne      :
                       | expression
                       ;

appel                  : IDF liste_arguments
                       ;

liste_arguments        :
                       |  PARENTHESE_OUVRANTE liste_args PARENTHESE_FERMANTE
                       ;

liste_args             : un_arg
                       | liste_args VIRGULE un_arg
                       ;

un_arg                 : expression
                       ;

condition              : SI expression ACCOLADE_OUVRANTE liste_instructions ACCOLADE_FERMANTE SINON condition
                       | SI expression ACCOLADE_OUVRANTE liste_instructions ACCOLADE_FERMANTE
                       ;

tant_que               | TANT_QUE expression ACCOLADE_OUVRANTE liste_instructions ACCOLADE_FERMANTE
                       ;

affectation            : variable OPAFF expression
                       ;

variable               : IDF suite_var
                       | tableau suite_var
                       | IDF
                       ;

suite_var              :  
                       | POINT variable
                       ;

tableau                : IDF suite_tab
                       ;

suite_tab              : suite_tab CROCHET_OUVRANT expression CROCHET_FERMANT  
                       | CROCHET_OUVRANT expression CROCHET_FERMANT
                       ;

expression             :ea1
                       |eb1
                       ;

ea1                    : ea1 PLUS ea2
                       | ea1 MOINS ea2
                       | ea2
                       ;
ea2                    : ea2 MULT ea3
                       | ea2 DIV ea3
                       | ea3
                       ;
          
ea3                    : NEG ea4
                       | POS ea4
                       | ea4
                       ;

ea4                    : PARENTHESE_OUVRANTE expression PARENTHESE_FERMANTE
                       | variable
                       | CSTE_ENTIERE
                       ;

eb1                    : eb1 OU eb2
                       | eb2
                       ;

eb2                    : eb2 ET eb3
                       | eb3
                       ;
               
eb3                    : NOT eb4
                       | eb4
                       ;

eb4                    : PARENTHESE_OUVRANTE expression PARENTHESE_FERMANTE
                       | TRUE
                       | FALSE
                       | comparaison
                       | IDF
                       ;

comparaison            : expression OPEG expression
                       | expression OPINF expression
                       | expression OPSUP expression
                       | expression OPINFE expression
                       | expression OPSUPE expression
                       | expression OPDIFF expression
                       ;
%%
