#ifndef ARBRE_H
#define ARBRE_H

#include "tables.h"

#define A_EMPTY_LEX -1
#define A_EMPTY_DEC -1

#define A_IDF 1

#define A_CSTE_E 2
#define A_CSTE_R 3
#define A_CSTE_C 4

#define A_PLUS 5
#define A_MOINS 6
#define A_MULT 7
#define A_DIV 8

#define A_SUP 9
#define A_SUP_EG 10
#define A_INF 11
#define A_INF_EG 12
#define A_EG 13
#define A_DIFF 14

#define A_LISTE 15
#define A_AFFECT 16

#define A_APPEL_FCT 17
#define A_APPEL_PROC 18

#define A_WHILE 19
#define A_FOR 20
#define A_IF 21
#define A_LISTE_IF 22 
#define A_LISTE_ELSE 23


typedef struct noeud{
    int appel;
    int num_lex;
    int num_dec;
    struct noeud *fils_gauche;
    struct noeud *frere_droit;
}noeud;

typedef noeud *arbre;

int est_vide(arbre a);

arbre creer_arbre_vide();

arbre creer_noeud(int appel);

arbre creer_arbre(int appel, int num_lex, int num_decla, arbre filsgauche,arbre freredroit);
    
arbre inserer_fils_gauche(arbre a,arbre filsgauche);
    
arbre inserer_frere_droit(arbre a,arbre freredroit);
    
#endif
