#include "declaration.h"


/**
 * Initialisation de la table des déclarations
 */
void initTabDecla(){
    int i;
    
    for(i=0; i<NMAX*2; i++){
        if(i>4)
            tab_decla[i].nature=N_BASE;
        else
            tab_decla[i].nature=N_EMPTY;
        
        tab_decla[i].suivant = NO_NEXT;
        tab_decla[i].region = -1;
        tab_decla[i].description = -1;
        tab_decla[i].exec = -1;
    }
}

int insererDeclaration(char *s,int caseNb, int nat){
    int i = 4;
    
    while(i<NMAX){
        if(tab.lexico[].lexeme)
    }
    
    while(tab_decla[i].nature!=N_EMPTY)
        i++;
    tab_lexico[caseNb].suivant = i;
    tab_decla[i].nature=nat;
    return 0;
}

/*
int insererDeclarationExistante(char *s,int caseNb,int nat){
    int i = 500;
    int caseD = tab_lexico[caseNb].suivant;
   
    while(tab_decla[i].nature!=N_EMPTY){
        i++;
    }

    while(tab_decla[caseD].suivant != -1){
        caseD = tab_decla[caseD].suivant;
    }
    tab_decla[i].nature=nat;
    tab_decla[caseD].suivant = i;

    return 0;
}
*/