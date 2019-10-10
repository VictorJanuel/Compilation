#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "table.h"

lexico tab_lexico[NMAX];

declarations tab_decla[NMAX*2];



void initTabLexico(){
    int i;
    for(i=0; i<NMAX; i++){
        tab_lexico[i]=NULL;
    }
}

int insererLexeme(char* lexeme){
    int i;

    //cherche si le lexeme est dans la table sinon il rentre le lexeme dans la table
    i=0;
    printf("test");
    while((strcmp(lexeme, tab_lexico[i].lexeme)!=0) && tab_lexico[i].lexeme!=NULL && i<NMAX){ 
        i++;
    }

    if(i<NMAX){
        if(tab_lexico[i].lexeme==NULL){
            strcpy(tab_lexico[i].lexeme, lexeme);
            // insererDeclaration();
        }
    }else{
        return 0;
    }

    printf("i : %d, tab[i].lexmee : %s\n", i, tab_lexico[i].lexeme);
       
    return 1;
}
