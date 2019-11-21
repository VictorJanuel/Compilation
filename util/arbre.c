#include "arbre.h"

void * allocation_mem(size_t nobjets,size_t taille);
void libere_mem(void *pt);

arbre ag;

int est_vide(arbre a){
    return a==creer_arbre_vide();
}

arbre creer_arbre_vide(){
    return NULL;
}

arbre creer_noeud(int appel){
    arbre a = (arbre)allocation_mem(1, sizeof(noeud));
    a->appel=appel;
    a->num_lex=A_EMPTY_LEX;
    a->num_dec=A_EMPTY_DEC;
    a->fils_gauche=creer_arbre_vide();
    a->frere_droit=creer_arbre_vide();
    return a;
}

arbre creer_arbre(int appel, int num_lex, int num_decla, arbre filsgauche,arbre freredroit){
    arbre a = creer_arbre_vide();
    a=creer_noeud(appel);
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
        fprintf(stderr,"Impossible d'allouer la memoire\n"); 

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
  if((*adr_pt)!=NULL){
    free(*adr_pt); /*liberation de *pt */
  }
    *adr_pt=NULL; /* *pt pointe maintenant sur NULL*/
}
