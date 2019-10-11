#ifndef REGION_H
#define REGION_H

#include "tables.h"

typedef struct region{
    int taille;
    int NIS;
    int arbre;  //a changer en arbre 
}region;

region tab_region[NMAX];

void initTabRegion();
#endif
