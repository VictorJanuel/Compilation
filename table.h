#ifndef TABLE_H

#define NMAX 1000

typedef struct lexico_struct{
    int longueur;
    char * lexeme;
    int suivant;
}lexico;



typedef struct declarations{
    char * nature;
    int suivant;
    int region;
    int descritpion;
    int exec;
}declarations;

    
typedef struct region{
    int taille;
    int NIS;
    int arbre;  //a changer en arbre 
}region;

void initTabLexico();

int insererLexeme(char* lexeme);

#endif