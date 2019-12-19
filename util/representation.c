#include "representation.h"

extern int numligne;


/**
 * Initialisation de la table des représentations
 */
void initTabRepresentation(){
    int i;
    
    for(i=0; i<NMAX; i++){
        tab_representation[i] = INT_MIN;
    }
}


/**
 * Chercher la base courante de la table de représentation
 */
int trouverK(){
    int i=0;
    while(tab_representation[i]!=INT_MIN && i<NMAX)
        i++;
    return i;
}

/**
 * Insertion dans la table des représentations.
 */
int insererRepresentation(int nature, int numchamps){
    int k=0, i=0;
    int compteur_champs=0;

    /**
     * Trouver le bon emplacement k;
     */
    k = trouverK();

    // Switch sur la nature
    switch(nature){
    case N_STRUCT:
        i=k;
        tab_representation[i]=numchamps;
        /**
         * Remplissage des champs (type, num_lex) 
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
        /**
         * Remplissage des dimensions
         */
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
        /**
         * Remplissage des params(type, num_lex)
         */
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
         * Remplissage des params(type, num_lex)
         */
        while(!est_pile_vide(p_dec) && compteur_champs<numchamps*2){
            i++;
            tab_representation[i] = sommet(p_dec);
            p_dec=depiler(p_dec);
            compteur_champs++;
        }
        //Type de retour
        tab_representation[k]= fin_file(f);
        f=defiler(f);
        break;
    default:
        fprintf(stderr, "Erreur ligne %d : Déclaration invalide (ce n'est ni une fonction, ni une procédure, ni une structure, ni un tableau) !\n", numligne);
        return 0;
    }
 
    return k;
}


/**
 * Affichage des représentations
 */
void afficheTabRepresentation(){
    int i=0;

    fprintf(stdout, "\n______________________________\nTable Representation\n______________________________\nindice\tvaleur\n");

    while(tab_representation[i]!=INT_MIN){
        fprintf(stdout, "%d\t%d\n", i, tab_representation[i]);
        i++;
    }
}