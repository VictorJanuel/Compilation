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
