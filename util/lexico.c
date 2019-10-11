#include "lexico.h"

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
 * Insertion d'un lexeme
 */
int insererLexeme(char* lexeme){
    
    int k = -1;
    int hashcode = hashage(lexeme);

    if(tab_hash[hashcode] == EMPTY_HASH)
        return (tab_hash[hashcode] = insererNouveauLexeme(lexeme));
    else{
        k = tab_hash[hashcode];
        while(tab_lexico[k].suivant != -1)
            k = tab_lexico[k].suivant;
        strcpy(tab_lexico[k].lexeme, lexeme);
        tab_lexico[k].longueur = strlen(lexeme);
    }

    return k;
}


int insererNouveauLexeme(char *s){
    int i = 0;
    while(tab_lexico[i].suivant == -1){
        i++;
    }
    strcpy(tab_lexico[i].lexeme, s);
    tab_lexico[i].longueur = strlen(s);
    return i;
}

/**
 * Affichage de la table lexicographique
 */

void afficheTabLexico(){
    int i=0;
    fprintf(stdout, "Table Lexicographique\n ______________________________\n");
    while(i<40 && tab_lexico[i].lexeme!=NULL){
        fprintf(stdout, "%d %s\n", i, tab_lexico[i].lexeme);
        i++;
    }
}

    
/**
 * Création table de hashage
 */

int hashage(char *s){
    int calcul=0, i;
    for(i=0; i<strlen(s); i++){
        calcul+=s[i];
    }
    return calcul%32;
}
