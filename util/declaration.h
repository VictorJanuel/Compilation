#ifndef DECLARATION_H
#define DECLARATION_H

#include "tables.h"

int deplac;

typedef struct declarations{
    int nature;
    int suivant;
    int region;
    int description;
    int exec;
}declarations;
    
declarations tab_decla[NMAX*2];

void initTabDecla();
int insererDeclaration(int num_lex, int nature, int numchamps, int type);
int insererDeclarationExistante(int num_lex,int nat,int numchamps, int type);
void afficheTabDeclaration();
void remplirColonneExec(int nature, int num_lex);
int assoc_nom(int num_lex);
#endif
