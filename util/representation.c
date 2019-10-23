#include "representation.h"

void initTabRepresentation(){
    int i;
    
    for(i=0; i<NMAX; i++){
        tab_representation[i] = INT_MIN;
    }
}


int trouverK(){
    int i=0;
    while(tab_representation[i]!=INT_MIN && i<NMAX)
        i++;
    return i;
}

/**
 * ATTENTION : 
 *
 */
int insererRepresentation(int nature, int numchamps){
    int k=0, i=0;
    int compteur_champs=0;
    int n_lex, n_dec;

    /**
     * Trouver le bon emplacement k;
     */
    k = trouverK();
    
    switch(nature){
        /**
         * Note: Les files ne sont peut être pas la meilleure solution ici.
         * Ainsi, on envisage de les remplacer par des files.
         */
    case N_STRUCT:
        i=k;
        tab_representation[i]=numchamps;
        printf("compteur : %d\n", compteur_champs);
        printf("num : %d\n", numchamps);        
        while(!est_file_vide(f) && compteur_champs<numchamps){
            i++;
            printf("toto\n");
            tab_representation[i] = fin_file(f);
            f=defiler(f);
            compteur_champs++;
        }
        break;
    case N_TAB:
        i=k;
        /**
         * i++ car on saut le champs k+1 pour laisser la place au type à la fin
         */
        i++;
        printf("toto45\n");
        printf("compteur : %d\n", compteur_champs);
        printf("num : %d\n", numchamps);
        tab_representation[i] = numchamps;
        while((!est_file_vide(f)) && compteur_champs<numchamps*2){
            printf("dude\n");
            i++;
            printf("toto2\n");
            tab_representation[i] = fin_file(f);
            f=defiler(f);
            compteur_champs++;
        }
        printf("tyty\n");
        tab_representation[k]= fin_file(f);
        f=defiler(f);
        break;
    case N_PROC:
         i=k;
        tab_representation[k]=numchamps;
        while(!est_file_vide(f) && compteur_champs<numchamps*2){
            i++;
            printf("toto3\n");
            tab_representation[i] = fin_file(f);
            f=defiler(f);
            compteur_champs++;
        } 
        break;
    case N_FONC:
        i=k;
        tab_representation[k+1]=numchamps;
        /**
         * i++ car on saut le champs k+1 pour laisser la place au type à la fin
         */
        i++;
        while(!est_file_vide(f) && compteur_champs<numchamps*2){
            i++;
            printf("toto4\n");
            tab_representation[i] = fin_file(f);
            f=defiler(f);
            compteur_champs++;
        } 
        tab_representation[k]= fin_file(f);
        f=defiler(f);
        break;
    default:
        fprintf(stderr, "Invalid declaration (this is nor function, nor procedure, nor struct, nor array!)\n");
        return 0;
    }
 
    return k;
}

void afficheTabRepresentation(){
    int i;

    fprintf(stdout, "Table Representation\n ______________________________\n");
    for(i=0; i<50 && tab_representation[i]!=INT_MIN; i++){
        fprintf(stdout, "%d\t%d\n", i, tab_representation[i]);
    }
}