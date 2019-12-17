#include "allocation.h"


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

