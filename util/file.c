/**
 * Module file
 * © Victor Januel - Yoann Laroche - Joris Verdun
 * Date : 05/03/2019
 * 
 * UPDATE : 11/10/2019
 */
#include "file.h"

void * allocation_mem(size_t nobjets,size_t taille);
void libere_mem(void *pt);


/* Fonction d'initialisation */
file file_vide(){
    return NULL;
}

/* Test file vide */
int est_file_vide(file f){
    if(f == file_vide()){
        return 1;
    }
    return 0;   
}

/* enfiler element */
file enfiler(file f, element e){
    file cell=file_vide();
    file fc=f;
    //Allocation mémoires
    cell = (file)allocation_mem(1, sizeof(struct_cellule));
    cell->elem = e;
    cell->suivant= file_vide();
    if(est_file_vide(f)){
         fprintf(stderr, "File crée \n");
        return cell;
    }
    while(fc->suivant!=file_vide()){
        fc=fc->suivant;
    }
    fc->suivant=cell;
    
    //Return
    return f;
}

/* Renvoi du sommet de la file */
element fin_file(file f){

    
    if(est_file_vide(f)){
        //Affichage erreur
        fprintf(stderr, "Erreur: La file est vide\n");
        exit(EXIT_FAILURE);
    }

    return f->elem;
}

/* Défiler element */
file defiler(file f){
    //Récup élement suivant
    file next = f->suivant;
  
    //Libération mémoire
    libere_mem(&f);

    //return liste modifiée
    return next;
}

/* récupérer nb éléments dans la file */
int taille_file(file f){
    int n = 0;
    //Recup arg
    file fCurrent = f;
    //Parcours pile
    while(fCurrent != NULL){
        //Recup taille
        n++;
        //Itération element suivant
        fCurrent = fCurrent->suivant;
    }

    //Return taille
    return n;
}

/**
 * Module pile
 * Date : 05/03/2019
 * 
 * UPDATE : 11/10/2019
 */

/* Fonction d'initialisation */
pile pile_vide(){
    return NULL;
}

/* Test pile vide */
int est_pile_vide(pile p){
    if(p == pile_vide()){
        return 1;
    }
    return 0;   
}

/* empiler element */
pile empiler(pile p, element e){
    pile cell = pile_vide();
    //Allocation mémoire + test
    cell = (pile)allocation_mem(1, sizeof(struct_cellule));
    cell->elem = e;
    cell->suivant = p;

    //Return
    return cell;
}

/* Renvoi du sommet de la pile */
element sommet(pile p){
    if(est_pile_vide(p)){
        //Affichage erreur
        fprintf(stderr, "Erreur: La pile est vide");
        exit(EXIT_FAILURE);
    }

    return p->elem;
}

/* Dépiler element */
pile depiler(pile p){
    //Récup élement suivant
    pile next = p->suivant;
    //Libération mémoire
    libere_mem(&p);

    //return liste modifiée
    return next;
}

/* récupérer nb éléments dans la pile */
int taille_pile(pile p){
    int n = 0;
    //Recup arg
    pile pCurrent = p;
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
