%{

%}

%token PROG POINT_VIRGULE DEBUT FIN
%token TYPE IDF DEUX_POINTS STRUCT FSTRUCT
%token TABLEAU DE CROCHET_OUVRANT CROCHET_FERMANT 
%token VIRGULE POINT VARIABLE PROCEDURE FONCTION
%token ENTIER REEL BOOLEEN CHAINE CARACTERE CSTE_ENTIERE
%token PARENTHESE_FERMANTE PARENTHESE_OUVRANTE VIDE RETOURNE
%token SI ALORS SINON TANT_QUE FAIRE OPAFF
%token OPEG OPINF OPSUP OPINFE OPSUPE OPDIFF 
%token NEG POS NOT PLUS MOINS MULT DIV MOD
%token ET OU TRUE FALSE

%%

programme                   : PROG corps
                            ;

corps                       : liste_declarations liste_instructions
                            | liste_instructions
                            ;

liste_declarations          : declaration POINT_VIRGULE
                            | liste_declarations declaration POINT_VIRGULE
                            ;

liste_instructions          : DEBUT suite_liste_inst FIN
                            ;

suite_liste_inst            : instruction POINT_VIRGULE
                            | suite_liste_inst instruction POINT_VIRGULE
                            ;

declaration                 : declaration_type
                            | declaration_variable
                            | declaration_procedure
                            | declaration_fonction
                            ;

declaration_type            : TYPE IDF DEUX_POINTS suite_declaration_type
                            ;

suite_declaration_type      : STRUCT liste_champs FSTRUCT
                            | TABLEAU dimension DE nom_type
                            ;

dimension                   : CROCHET_OUVRANT liste_dimensions CROCHET_FERMANT
                            ;

liste_dimensions            : une_dimension
                            | liste_dimensions VIRGULE une_dimension
                            ;

une_dimension               : ea1 POINT POINT ea1
                            ;

liste_champs                : un_champ
                            | liste_champs POINT_VIRGULE un_champ
                            ;

un_champ                    : IDF DEUX_POINTS nom_type
                            ;

nom_type                    : type_simple
                            | IDF
                            ;

type_simple                 : ENTIER
                            | REEL
                            | BOOLEEN
                            | CARACTERE
                            | CHAINE CROCHET_OUVRANT CSTE_ENTIERE CROCHET_FERMANT
                            ;

declaration_variable        : VARIABLE IDF DEUX_POINTS nom_type
                            ;

declaration_procedure       : PROCEDURE IDF liste_parametres corps
                            ;

declaration_fonction        : FONCTION IDF liste_parametres RETOURNE type_simple corps
                            ;

liste_parametres            :
                            | PARENTHESE_OUVRANTE liste_param PARENTHESE_FERMANTE
                            ;

liste_param                 : un_param
                            | liste_param POINT_VIRGULE un_param
                            ;

un_param                    : IDF DEUX_POINTS type_simple
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

appel                       : IDF liste_arguments
                            ;

liste_arguments             :
                            | PARENTHESE_OUVRANTE liste_args PARENTHESE_FERMANTE
                            ;

liste_args                  : un_arg
                            | liste_args VIRGULE un_arg
                            ;

un_arg                      : expression
                            ;

condition                   : SI eb1 ALORS liste_instructions SINON liste_instructions
                            ;

tant_que                    : TANT_QUE eb1 FAIRE liste_instructions
                            ;

affectation                 : variable OPAFF expression
                            ;

variable                    : v1
                            | v2 
                            ;

v1                          : IDF
                            ;

v2                          : vstruct
                            | vtab
                            ;

vstruct                     : POINT variable
                            ;

vtab                        : CROCHET_OUVRANT ea1 CROCHET_FERMANT v2
                            ;

expression                  : ea1
                            | eb1
                            ;

ea1                         : ea1 PLUS ea2
                            | ea1 MOINS ea2
                            | ea2
                            ;

ea2                         : ea2 MULT ea3
                            | ea2 DIV ea3
                            | ea3
                            ;
          
ea3                         : MOINS ea4
                            | PLUS ea4
                            | ea4
                            ;

ea4                         : PARENTHESE_OUVRANTE ea1 PARENTHESE_FERMANTE
                            | variable
                            | CSTE_ENTIERE
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
                            | TRUE
                            | FALSE
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