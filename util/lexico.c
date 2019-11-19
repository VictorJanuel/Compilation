#include "lexico.h"

int n_lexico=4;

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

    for(i=0; i<NMAX; i++){
        tab_lexico[i].suivant=EMPTY;
    }   
}

void initTabHash(){
    int i;
    for(i=0; i<32; i++){
        tab_hash[i]=EMPTY_HASH;
    }
}

/**
 * Insertion d'un lexeme
 */
int insererLexeme(char* lexeme){
    int k = -1;
    int hashcode = hashage(lexeme);

    printf("hashcode %s : %d\n", lexeme, hashcode);

    /**
     * Pas de hashcode existant
     */
    if(tab_hash[hashcode] == EMPTY_HASH){
        tab_hash[hashcode] = insererNouveauLexeme(lexeme);
        return tab_hash[hashcode];
    }else{
        k = tab_hash[hashcode];
        
        printf("tab_hash[%d] = %d\n", hashcode, tab_hash[hashcode]);
        while(tab_lexico[k].suivant != -1 && strcmp(tab_lexico[k].lexeme,lexeme)!=0){
            k=tab_lexico[k].suivant;
        }
        /* si c'est un lexème different */
        if(strcmp(tab_lexico[k].lexeme,lexeme)!=0){
            tab_lexico[k].suivant=insererNouveauLexeme(lexeme);
            return tab_lexico[k].suivant;
        }
    }
    //on renvoie le meme lexeme
    return k;
}


int insererNouveauLexeme(char *s){
    int i=n_lexico;
    strcpy(tab_lexico[n_lexico].lexeme, s);
    tab_lexico[n_lexico].longueur = strlen(s);
    n_lexico++;
    return i;
}

/**
 * Affichage de la table lexicographique
 */

void afficheTabLexico(){
    int i=0;
    fprintf(stdout, "\n ______________________________\nTable Lexicographique\n ______________________________\n");
    while(i<50 && tab_lexico[i].lexeme!=NULL){
        fprintf(stdout, "%d\t%s\t%d\n", i, tab_lexico[i].lexeme, tab_lexico[i].suivant);
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
