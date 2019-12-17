/**
 * Module file -- fichier .h
 * © Victor Januel - Yoann Laroche - Joris Verdun
 * Date : 05/03/2019
 *  
 * UPDATE : 11/10/2019
 */

#ifndef _FILE_H_
#define _FILE_H_

#include "tables.h"
#include "allocation.h"

/**
 * Création du type file
 */

typedef int element;

typedef struct cellule{
    element elem;
    struct cellule *suivant;
}struct_cellule;


typedef struct_cellule *file;

file f;

/* Fonction d'initialisation */
file file_vide();

/* Test file vide */
int est_file_vide(file f);

/* enfiler element */
file enfiler(file f, element e);

/* Renvoi du sommet de la file */
element fin_file(file f);

/* Défiler element */
file defiler(file f);

/* récupérer nb éléments dans la pile */
int taille_file(file f);

/**
 * Création du type pile
 * i.e. une liste
 */
typedef struct_cellule *pile;

pile p;
pile p_dec;

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
