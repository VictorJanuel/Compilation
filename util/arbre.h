#ifndef ARBRE_H
#define ARBRE_H

#include "tables.h"

#define A_EMPTY_LEX -1
#define A_EMPTY_DEC -1

#define A_IDF 1

#define A_CSTE_E 2
#define A_CSTE_R 3
#define A_CSTE_C 4
#define A_CSTE_S 5

#define A_PLUS 6
#define A_MOINS 7
#define A_MULT 8
#define A_DIV 9

#define A_SUP 10
#define A_SUP_EG 11
#define A_INF 12
#define A_INF_EG 13
#define A_EG 14
#define A_DIFF 15

#define A_LISTE 16
#define A_AFFECT 17

#define A_APPEL 18
#define A_WHILE 20

#define A_IF 21
#define A_LISTE_IF 22 
#define A_LISTE_ELSE 23

#define A_TRUE 24
#define A_FALSE 25

#define A_ET 26
#define A_OU 27


typedef struct noeud{
    int appel;
    int num_lex;
    int num_dec;
    struct noeud *fils_gauche;
    struct noeud *frere_droit;
}struct_noeud;

typedef struct_noeud *arbre;


int est_vide(arbre a);

arbre creer_arbre_vide();

arbre creer_noeud(int appel, int num_lex, int num_decla);

arbre creer_arbre(int appel, int num_lex, int num_decla, arbre filsgauche,arbre freredroit);
    
arbre inserer_fils_gauche(arbre a,arbre filsgauche);
    
arbre inserer_frere_droit(arbre a,arbre freredroit);

arbre concat_frere(arbre a, arbre frere);

arbre concat_fils(arbre a,arbre fils);

/* affiche un arbre */
arbre affiche_arbre(arbre a);

#endif
