#ifndef REGION_H
#define REGION_H

#include "tables.h"

typedef struct region{
    int taille;
    int NIS;
    arbre a;  
}region;

region tab_region[NMAX];

void initTabRegion();

void insererRegion(int incr);

void taille_region();

void afficheTabRegion();

#endif

