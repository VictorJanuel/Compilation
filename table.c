#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "table.h"


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
            tab_decla[i].nature=N_BASE;
        else
            tab_decla[i].nature=N_EMPTY;
        
        tab_decla[i].suivant = NO_NEXT;
        tab_decla[i].region = -1;
        tab_decla[i].description = -1;
        tab_decla[i].exec = -1;
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
          
        }
    }else{
        return 0;
    }   
    return i;
}

void chercherLexeme(char *s,int nat){
    int i=0;
    while((strcmp(tab_lexico[i].lexeme,"")!=0 && strcmp(tab_lexico[i].lexeme,s)!=0)){
        i++;
    }
    if(strcmp(tab_lexico[i].lexeme,s)==0){
        if(tab_lexico[i].suivant==-1){
            insererDeclaration(s,i,nat);
        }else{
            insererDeclarationExistante(s,i,nat);
        }
    }
  

}

int insererDeclaration(char *s,int caseNb,int nat){
    int i = 4;
    
    while(tab_decla[i].nature!=N_EMPTY)
        i++;
    tab_lexico[caseNb].suivant = i;
    tab_decla[i].nature=nat;
    return 0;
}

int insererDeclarationExistante(char *s,int caseNb,int nat){
    int i = 500;
    int caseD = tab_lexico[caseNb].suivant;
    /**
     * Récupération case à insérer (NATURE DU LEXEME)
     */
    while(tab_decla[i].nature!=N_EMPTY){
        i++;
    }
    /**
     * Récupération case à insérer (SUIVANT DU LEXEME)
     */
    while(tab_decla[caseD].suivant != -1){
        caseD = tab_decla[caseD].suivant;
    }
    tab_decla[i].nature=nat;
    tab_decla[caseD].suivant = i;
    /**
     * Remplissage nature! A COMPLETER!
     */

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