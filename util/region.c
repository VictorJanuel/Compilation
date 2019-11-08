#include "region.h"

/**
 * Initialisation du tableau region
 */

void initTabRegion(){
    int i;
    for(i=0; i<NMAX; i++){
        tab_region[i].taille=EMPTY;
        tab_region[i].NIS=EMPTY;
        tab_region[i].arbre=EMPTY;
    }
}

void insererRegion(int incr){
    /**
     * Taille et exec 
     */
    tab_region[incr].NIS=taille_pile(p);
    
}

void afficheTabRegion(){
    int i;
    fprintf(stdout, "\n__________________________________\nTable des Regions\n__________________________________\n");
    printf("taille---------NIS----------arbre\n");
    for(i=0;i<50;i++){
        printf("%d\t\t%d\t\t%d\n",tab_region[i].taille,tab_region[i].NIS,tab_region[i].arbre);

    }
}