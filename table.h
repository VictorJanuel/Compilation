#ifndef TABLE_H

#define NMAX 1000
#define STR_MAX 255

typedef struct lexico_struct{
    int longueur;
    char lexeme[STR_MAX];
    int suivant;
}lexico;

lexico tab_lexico[NMAX];


typedef struct declarations{
    char nature[STR_MAX];
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
int insererDeclaration(char *s, int caseNb);
int insererDeclarationExistante(char *s, int caseNb);
void afficheTabLexico();

#endif