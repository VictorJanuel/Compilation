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
    //int n_lex, n_dec;

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
        /*printf("compteur : %d\n", compteur_champs);
        printf("num : %d\n", numchamps);        
        */
        while(!est_file_vide(f) && compteur_champs<numchamps*3){
            i++;
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
        tab_representation[i] = numchamps;
        while((!est_file_vide(f)) && compteur_champs<numchamps*2){
            i++;
            tab_representation[i] = fin_file(f);
            f=defiler(f);
            compteur_champs++;
        }
        tab_representation[k]= fin_file(f);
        f=defiler(f);
        break;
    case N_PROC:
         i=k;
        tab_representation[k]=numchamps;
        while(!est_file_vide(f) && compteur_champs<numchamps*2){
            i++;
            tab_representation[i] = fin_file(f);
            f=defiler(f);
            compteur_champs++;
        } 
        break;
    case N_FONC:
        i=k;
        tab_representation[k+1]=numchamps;
        printf("Valeur de nul champs : %d \n",tab_representation[k]);
        /**
         * i++ car on saute le champs k+1 pour laisser la place au type à la fin
         */
        i++;
        while(!est_file_vide(f) && compteur_champs<numchamps*2){
            i++;
            printf("Valeur de i : %d \n",i);
            printf(" boucle fin_file :  %d \n",fin_file(f));
            tab_representation[i] = fin_file(f);
            f=defiler(f);
            compteur_champs++;
        } 
        /**
         * Cas de fonction dans fonction géré? 
         */
        printf("fin_file :  %d \n",fin_file(f));
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
    int i=0;

<<<<<<< HEAD
    fprintf(stdout, "\n___________________________\nTable Representation\n___________________________\n");
=======
    fprintf(stdout, "\n______________________________\nTable Representation\n______________________________\n");

>>>>>>> 632afc07ec3ed81009eb41740cdd988d8e9a9c20
    while(tab_representation[i]!=INT_MIN){
        fprintf(stdout, "%d\t%d\n", i, tab_representation[i]);
        i++;
    }
   
}