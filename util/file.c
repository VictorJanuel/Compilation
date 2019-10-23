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

    //Allocation mémoires
    cell = (file)allocation_mem(1, sizeof(struct_cellule));
    cell->elem = e;
    cell->suivant=f;
    /*    
    while(fc->suivant!=file_vide()){
        fc=fc->suivant;
    }

    fc->suivant=cell;
    */
    
    //Return
    return cell;
}

/* Renvoi du sommet de la file */
element fin_file(file f){

    
    if(est_file_vide(f)){
        //Affichage erreur
        fprintf(stderr, "Erreur: La file est vide");
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
