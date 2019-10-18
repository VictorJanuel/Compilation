#ifndef LEXICO_H
#define LEXICO_H

#include "tables.h"

typedef struct lexico_struct{
    int longueur;
    char lexeme[STR_MAX];
    int suivant;
}lexico;

lexico tab_lexico[NMAX];

int tab_hash[32];

void initTabLexico();
void initTabHash();
int insererLexeme(char* lexeme);
void afficheTabLexico();
int hashage(char *s);
int insererNouveauLexeme(char *s);
int insererLexeme(char* lexeme);
#endif

