#ifndef DECLARATION_H
#define DECLARATION_H

#include "tables.h"

typedef struct declarations{
    int nature;
    int suivant;
    int region;
    int description;
    int exec;
}declarations;
    
declarations tab_decla[NMAX*2];

void initTabDecla();
int insererDeclaration(int num_lex, int nature, int numchamps);
int insererDeclarationExistante(int num_lex,int nat,int numchamps);
void afficheTabDeclaration();
#endif
