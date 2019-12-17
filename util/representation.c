#include "representation.h"

extern int numligne;

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
        while(!est_pile_vide(p_dec) && compteur_champs<numchamps*2){
            i++;
            tab_representation[i] = sommet(p_dec);
            p_dec=depiler(p_dec);
            compteur_champs++;
        } 
        break;
    case N_FONC:
        i=k+1;
        tab_representation[i]=numchamps;
     
        /**
         * i++ car on saute le champs k+1 pour laisser la place au type à la fin
         */
        while(!est_pile_vide(p_dec) && compteur_champs<numchamps*2){
            i++;
            tab_representation[i] = sommet(p_dec);
            p_dec=depiler(p_dec);
            compteur_champs++;
        } 
        /**
         * Cas de fonction dans fonction géré? 
         */
        tab_representation[k]= fin_file(f);
        f=defiler(f);
        break;
    default:
        fprintf(stderr, "Erreur ligne %d : Déclaration invalide (ce n'est ni une fonction, ni une procédure, ni une structure, ni un tableau) !\n", numligne);
        return 0;
    }
 
    return k;
}

void afficheTabRepresentation(){
    int i=0;

    fprintf(stdout, "\n______________________________\nTable Representation\n______________________________\n");

    while(tab_representation[i]!=INT_MIN){
        fprintf(stdout, "%d\t%d\n", i, tab_representation[i]);
        i++;
    }
}