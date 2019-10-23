#include "representation.h"

void initTabRepresentation(){
    int i;
    
    for(i=0; i<NMAX; i++){
        tab_decla[i].nature=N_EMPTY;
    }
}


/**
 * ©
 *
 */
int insererRepresentation(int nature, int numchamps){
    int k=0, i=0;
    int compteur_champs=0;
    int n_lex, n_dec;

    /**
     * Trouver le bon emplacement k;
     */
    
    switch(nature){
        /**
         * Note: Les files ne sont peut être pas la meilleure solution ici.
         * Ainsi, on envisage de les remplacer par des files.
         */
    case N_STRUCT:
        i=k;
        tab_representation[i]=numchamps;
        while(!est_vide(f)){
            i++;
            tab_representation[i] = fin_file(f);
            f=defiler(f)
                }
        break;
    case N_TAB:
        i=k;
        tab_representation[k]=numchamps;
        /**
         * i++ car on saut le champs k+1 pour laisser la place au type à la fin
         */
        i++;
        while(!est_vide(p) && compteur_champs<numchamps*2){
            i++;
            tab_representation[i] = fin_file(f);
            f=defiler(f);
            compteur_champs++;
        } 
        tab_representation[k+1]= fin_file(f);
        f=defiler(f);
        break;
/**      case N_PROC:
         case N_FONC:
         i=numchamps*2;
         tab_representation[k]=numchamps;
         while(!est_vide(p) && i>1){
         tab_representation[k+i]=sommet(p);
         depiler(p);
         i--;
         tab_representation[k+i]=sommet(p);
         depiler(p);
         i--;
         }
         tab_representation[k+i]=sommet(p);
         depiler(p);
         break; **/
    }

    
    return 1;
}

void afficheTabRepresentation(){
    int i;

    fprintf(stdout, "Table Representation\n ______________________________\n");
    for(i=0; i<50; i++){
        fprintf(stdout, "%d\t%d\n", i, tab_representation[i]);
    }
}