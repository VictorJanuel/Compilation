#include "arbre.h"

void * allocation_mem(size_t nobjets,size_t taille);
void libere_mem(void *pt);

int est_vide(arbre a){
    return a==creer_arbre_vide();
}

arbre creer_arbre_vide(){
    return NULL;
}

arbre creer_noeud(int appel, int num_lex, int num_decla){
    arbre a = (arbre)allocation_mem(1, sizeof(struct_noeud));
    a->appel=appel;
    a->num_lex=num_lex;
    a->num_dec=num_decla;
    a->fils_gauche=creer_arbre_vide();
    a->frere_droit=creer_arbre_vide();
    return a;
}

arbre creer_arbre(int appel, int num_lex, int num_decla, arbre filsgauche,arbre freredroit){
    arbre a = creer_arbre_vide();
    a=creer_noeud(appel, num_lex, num_decla);
    a->num_lex=num_lex;
    a->num_dec=num_decla;
    a->fils_gauche=filsgauche;
    a->frere_droit=freredroit;
    return a;
}


arbre inserer_fils_gauche(arbre a,arbre filsgauche){
    a->fils_gauche=filsgauche;
    return a;
}

arbre inserer_frere_droit(arbre a,arbre freredroit){
    a->frere_droit=freredroit;
    return a;
}

arbre parcours(arbre a){
    arbre a_suiv=a;
    while(a_suiv->fils_gauche->frere_droit!=NULL){
        a_suiv=a_suiv->fils_gauche->frere_droit;        
    }
    return a_suiv->fils_gauche;
}

/* Fonction d'initialisation */
pile_arbre a_pile_vide(){
    return NULL;
}

/* Test pile vide */
int a_est_pile_vide(pile_arbre p){
    if(p == a_pile_vide()){
        return 1;
    }
    return 0;   
}

/* empiler element */
pile_arbre a_empiler(pile_arbre p, arbre e){
    pile_arbre cell = a_pile_vide();
    //Allocation mémoire + test
    cell = (pile_arbre)allocation_mem(1, sizeof(struct_cellule_arbre));
    cell->e = e;
    cell->suivant = p;

    //Return
    return cell;
}

/* Renvoi du sommet de la pile */
arbre a_sommet(pile_arbre p){
    if(a_pile_vide(p)){
        //Affichage erreur
        fprintf(stderr, "Erreur: La pile est vide");
        exit(EXIT_FAILURE);
    }

    return p->e;
}

/* Dépiler element */
pile_arbre a_depiler(pile_arbre p){
    //Récup élement suivant
    pile_arbre next = p->suivant;
    //Libération mémoire
    libere_mem(&p);

    //return liste modifiée
    return next;
}

/* récupérer nb éléments dans la pile */
int a_taille_pile(pile_arbre p){
    int n = 0;
    //Recup arg
    pile_arbre pCurrent = p;
    //Parcours pile
    while(pCurrent != NULL){
        //Recup taille
        n++;
        //Itération element suivant
        pCurrent = pCurrent->suivant;
    }

    //Return taille
    return n;
}

arbre affiche_arbre(arbre a){
    fprintf(stdout, "%d ", a->num_lex);
    
    if(!est_vide(a->fils_gauche)){
        fprintf(stdout, "\n");
        affiche_arbre(a->fils_gauche);
    }
    
    if(!est_vide(a->frere_droit)){
    fprintf(stdout, "\t");
        affiche_arbre(a->frere_droit);
    }
    return a;
}