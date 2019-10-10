#ifndef TABLE_H

#define NMAX 1000

typedef struct lexico_struct{
    int longueur;
    char * lexeme;
    int suivant;
}lexico;

lexico tab_lexico[NMAX];


typedef struct declarations{
    char * nature;
    int suivant;
    int region;
    int descritpion;
    int exec;
}declarations;
    
declarations tab_decla[NMAX*2];

typedef struct region{
    int taille;
    int NIS;
    int arbre;  //a changer en arbre 
}region;

void afficheTabLexico();

void initTabLexico();

int insererLexeme(char* lexeme);
#endif