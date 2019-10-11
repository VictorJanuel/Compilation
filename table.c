#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "table.h"
#include "pile.h"



/**
 * Initialisation de la table lexicographique
 */
void initTabLexico(){
    int i;
    strcpy(tab_lexico[0].lexeme, "integer");
    strcpy(tab_lexico[1].lexeme, "float");
    strcpy(tab_lexico[2].lexeme, "char");
    strcpy(tab_lexico[3].lexeme, "bool");
    for(i=4; i<NMAX; i++){
        strcpy(tab_lexico[i].lexeme, "");
    }  
}

/**
 * Initialisation de la table des déclarations
 */
void initTabDecla(){
    int i;
    
    for(i=0; i<NMAX*2; i++){
        if(i>4)
            strcpy(tab_decla[i].nature, "");
        else
            strcpy(tab_decla[i].nature, "T-B");
        tab_decla[i].suivant = -1;
        tab_decla[i].region = -1;
        tab_decla[i].description = -1;
        tab_decla[i].exec = -1;
    }
}

/**
 * Initialisation de la table des régions
 */
void initTabRegion(){
    int i;

    for(i=0;i<NMAX;i++){
        tab_region[i].taille = -1;
        tab_region[i].NIS = -1;
        tab_region[i].arbre = -1;
    }

}

/**
 * Insertion d'un lexeme
 */
int insererLexeme(char* lexeme){
    int i;

    printf("lexem :%s\n",lexeme );
    //cherche si le lexeme est dans la table sinon il rentre le lexeme dans la table
    i=0;
    while((i<NMAX && strcmp(tab_lexico[i].lexeme,"") && strcmp(lexeme, tab_lexico[i].lexeme)!=0)){
        i++;
    }
    
    if(i<NMAX){
        if(!strcmp(tab_lexico[i].lexeme, "")){
            strcpy(tab_lexico[i].lexeme,lexeme);
            insererDeclaration(lexeme, i);
        }else{
            insererDeclarationExistante(lexeme, i);
        }
    }else{
        return 0;
    }   
    return 1;
}

int insererDeclaration(char *s, int caseNb){
    int i = 4;
    /**
     *
     */
    while(!strcmp(tab_decla[caseNb].nature, ""))
        i++;
    tab_lexico[caseNb].suivant = i;
    /**
     * Remplissage nature! A COMPLETER!
     */
    strcpy(tab_decla[i].nature, "var");

    return 0;
}

int insererDeclarationExistante(char *s, int caseNb){
    int i = 500;
    int caseD = tab_lexico[caseNb].suivant;
    /**
     * Récupération case à insérer (NATURE DU LEXEME)
     */
    while(!strcmp(tab_decla[i].nature, ""))
        i++;

    /**
     * Récupération case à insérer (SUIVANT DU LEXEME)
     */
    while(tab_decla[caseD].suivant != -1)
        caseD = tab_decla[caseD].suivant;

    tab_decla[caseD].suivant = i;
    /**
     * Remplissage nature! A COMPLETER!
     */
    strcpy(tab_decla[i].nature, "var");

    return 0;
}

void afficheTabLexico(){
    int i=0;
    fprintf(stdout, "Table Lexicographique\n ______________________________\n");
    while(i<40 && tab_lexico[i].lexeme!=NULL){
        fprintf(stdout, "%d %s\n", i, tab_lexico[i].lexeme);
        i++;
    }
}
