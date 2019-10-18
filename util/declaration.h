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
int insererDeclarationExistante(char *s,int caseNb,int nat);
void afficheTabDeclaration();
#endif
