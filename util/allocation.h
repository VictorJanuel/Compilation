#ifndef ALLOCATION_H
#define ALLOCATION_H

#include <stdlib.h>
#include <stdio.h>
void * allocation_mem(size_t nobjets,size_t taille);

void libere_mem(void *pt);


#endif

