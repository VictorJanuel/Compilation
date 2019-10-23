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

/**
 * Création du type file
 */

typedef struct element
{
    int type;
    int num_lexico;
    int exec;
    }element;

typedef struct cellule{
    element elem;
    struct cellule *suivant;
}struct_cellule;

typedef struct_cellule *file;

/*Fonction création d'un éléments*/
element creer_elem(int type,int num_lexico);

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

file f;
#endif
