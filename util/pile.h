/**
 * Module pile -- fichier .h
 * © Victor Januel - Yoann Laroche - Joris Verdun
 * Date : 05/03/2019
 *  
 * UPDATE : 11/10/2019
 */

#ifndef _PILE_H_
#define _PILE_H_

#include "tables.h"

/**
 * Création du type pile
 */

typedef int element;

typedef struct cellule{
    element elem;
    struct cellule *suivant;
}struct_cellule;

typedef struct_cellule *pile;

/* Fonction d'initialisation */
pile pile_vide();

/* Test pile vide */
int est_pile_vide(pile p);

/* empiler element */
pile empiler(pile p, element e);

/* Renvoi du sommet de la pile */
element sommet(pile p);

/* Dépiler element */
pile depiler(pile p);

/* récupérer nb éléments dans la pile */
int taille_pile(pile p);

#endif
