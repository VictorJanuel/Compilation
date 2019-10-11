#ifndef TABLE_H

#define NMAX 1000
#define STR_MAX 255

#define NO_NEXT -1
#define N_EMPTY -1
#define N_BASE 0
#define N_STRUCT 1
#define N_TAB 2
#define N_VAR 3
#define N_PARAM 4
#define N_PROC 5
#define N_FONC 6

typedef struct lexico_struct{
    int longueur;
    char lexeme[STR_MAX];
    int suivant;
}lexico;

lexico tab_lexico[NMAX];


typedef struct declarations{
    int nature;
    int suivant;
    int region;
    int description;
    int exec;
}declarations;
    
declarations tab_decla[NMAX*2];

typedef struct region{
    int taille;
    int NIS;
    int arbre;  //a changer en arbre 
}region;

region tab_region[NMAX];

void initTabLexico();
void initTabDecla();
int insererLexeme(char* lexeme);
<<<<<<< HEAD
<<<<<<< HEAD
=======
int insererDeclaration(char *s, int caseNb);
int insererDeclarationExistante(char *s, int caseNb);
void afficheTabLexico();
>>>>>>> dev
=======
int insererDeclaration(char *s,int caseNb,int nat);
int insererDeclarationExistante(char *s,int caseNb,int nat);
void afficheTabLexico();
void chercherLexeme(char *s,int nat);
>>>>>>> 567cbf084e74878eeb3da2276cc7e65efb2a591a

#endif