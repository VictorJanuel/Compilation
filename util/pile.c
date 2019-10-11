/**
 * Module pile
 * © Victor Januel
 * Date : 05/03/2019
 * 
 * UPDATE : 11/10/2019
 */

#include "pile.h"

void * allocation_mem(size_t nobjets,size_t taille);
void libere_mem(void *pt);


/* Fonction d'initialisation */
pile pile_vide(){
    return NULL;
}

/* Test pile vide */
int est_pile_vide(pile p){
    if(p == est_pile_vide()){
        return 1;
    }
    return 0;   
}

/* empiler element */
pile empiler(pile p, element e){
    //Initialisation de la liste
    pile p2 = pile_vide();
    //Allocation mémoire + test
    cell = (pile)allocation_mem(1, sizeof(struct_cellule));
    cell->elem = e;
    cell->suivant = p;

    //Return
    return cell;
}

/* Renvoi du sommet de la pile */
element sommet(pile p){
    if(est_vide(p)){
        //Affichage erreur
        fprintf(stderr, "Erreur: La pile est vide");
        exit(EXIT_FAILURE);
    }

    return l->elem;
}

/* Dépiler element */
pile depiler(pile p){
    //Récup élement suivant
    pile next = l->suivant;
    //Libération mémoire
    libere_mem(&l);

    //return liste modifiée
    return next;
}

/* récupérer nb éléments dans la pile */
int taille_pile(pile p){
    int n = 0;
    //Recup arg
    p pCurrent = p;
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


/*--------------------------------------------------------------------
 *
 * ©Amaury Habrard
 * 
 *fonction d'allocation de memoire du type defini par taille 
 *pour un nombre nobjets
 *alloue un espace de memoire de taille  nobjets*taille octets
 */
void * allocation_mem(size_t nobjets,size_t taille)
{
    void * pt;
    
    pt = malloc (nobjets * taille);/*allocation*/

    /* on verifie si l'allocation a marche*/
    if (pt==NULL) 
      mon_erreur("Impossible d'allouer la memoire %d %d\n",nobjets,taille); 

    return(pt);
}

/*--------------------------------------------------------------------
 *
 * © Amaury Habrard
 * 
 *fonction qui libere de la memoire allouee en *pt
 *et place le pointeur à NULL
 *ICI on suppose que pt est l'adresse de la variable pointeur allouée
 *nécessaire pour pouvoir libérer.
 *attention pt doit en fait être un void **
 */
void libere_mem(void *pt)
{
  void ** adr_pt=(void **) pt; // on suppose que pt est l'adresse de pointeur à libérer
  if((*adr_pt)!=NULL)
    free(*adr_pt); /*liberation de *pt */

    *adr_pt=NULL; /* *pt pointe maintenant sur NULL*/
}
