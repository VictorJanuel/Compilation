#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "table.h"

void initTabLexico(){
    int i;
    for(i=0; i<NMAX; i++){
        tab_lexico[i].lexeme=NULL;
    }
    // memset(&tab_lexico, 0, sizeof(tab_lexico)); 
}

int insererLexeme(char* lexeme){
    int i;
    int booli = 1;

    //cherche si le lexeme est dans la table sinon il rentre le lexeme dans la table
    i=0;
    while((i<NMAX && tab_lexico[i].lexeme!=NULL && strcmp(lexeme, tab_lexico[i].lexeme)!=0)){
        i++;
    }
    
    if(i<NMAX){
        if(tab_lexico[i].lexeme==NULL){
            tab_lexico[i].lexeme=lexeme;
            printf("\ni : %d, tab[i].lexeme : %s\n\n", i, tab_lexico[i].lexeme);
            // insererDeclaration();
        }
    }else{
        return 0;
    }

       
    return 1;
}

void afficheTabLexico(){
    int i=0;
    fprintf(stdout, "Table Lexicographique\n ______________________________\n");
    while(i<40 && tab_lexico[i].lexeme!=NULL){
        fprintf(stdout, "%d |%s\n", i, tab_lexico[i].lexeme);
        i++;
    }
}