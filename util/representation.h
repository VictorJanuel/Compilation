#ifndef REPRESENTATION_H
#define REPRESENTATION_H
#include <limits.h>

#include "tables.h"

int tab_representation[NMAX];

void initTabRepresentation();
int insererRepresentation(int nature, int numchamps);
void afficheTabRepresentation();

#endif
