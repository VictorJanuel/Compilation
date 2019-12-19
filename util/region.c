#include "region.h"

/**
 * Initialisation du tableau region
 */

void initTabRegion(){
    int i;
    for(i=0; i<NMAX; i++){
        tab_region[i].taille=EMPTY;
        tab_region[i].NIS=EMPTY;
        tab_region[i].a=A_EMPTY;
    }
}

/**
 * Insertion d'une région
 */
void insererRegion(int incr){
    /**
     * Taille et exec 
     */
    tab_region[incr].NIS=taille_pile(p);
    deplac=tab_region[incr].NIS+1;    
}

/**
 * Insertion d'une taille de région
 */
void taille_region(file f_dep){
    int i=0;
    while(!est_file_vide(f_dep)){
        tab_region[i].taille=fin_file(f_dep);
        f_dep=defiler(f_dep);
        i++;
    }
    tab_region[i].taille=deplac;
}

/**
 * Affichage des régions
 */
void afficheTabRegion(){
    int i;
    fprintf(stdout, "\n______________________________________________\nTable des Regions\n______________________________________________\n");
    printf("taille\t\tNIS\t\tarbre\n");

    i=0;
    while(tab_region[i].taille!=-1){
        //for(i=0;i<50;i++){
        printf("%d\t\t%d\t\t",tab_region[i].taille,tab_region[i].NIS);
    
        if(tab_region[i].a!=NULL){
            printf("%p", (void *)&tab_region[i].a);
        }
        printf("\n");
        i++;
    }
}

