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
    printf("debut \n");
    arbre a = (arbre)allocation_mem(1, sizeof(struct_noeud));
    a->appel=appel;
    a->num_lex=num_lex;
    a->num_dec=num_decla;
    printf("avant branches\n");
    a->fils_gauche=creer_arbre_vide();
    a->frere_droit=creer_arbre_vide();
    printf("out\n");
    return a;
}

arbre creer_arbre(int appel, int num_lex, int num_decla, arbre filsgauche,arbre freredroit){
    arbre a = creer_arbre_vide();
    printf("avant crea\n");
    a=creer_noeud(appel, num_lex, num_decla);
    printf(" \n");
    a->num_lex=num_lex;
    a->num_dec=num_decla;
    a->fils_gauche=filsgauche;
    filsgauche->frere_droit=freredroit;
    printf("Père : %d ",a->appel);
    if(a->fils_gauche!=NULL){
        printf(" Fils gauche : %d",a->fils_gauche->appel);
        if(a->fils_gauche->appel==A_IDF){
            printf("NUM LEX : %d NUM DECLA : %d",a->fils_gauche->num_lex,a->fils_gauche->num_dec);

        }
    }
    if(filsgauche->frere_droit!=NULL){
        printf(" Frère droit : %d\n)",filsgauche->frere_droit->appel);

    }
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

arbre concat_frere(arbre a,arbre frere){
    a->frere_droit=frere;
    return a;
}


arbre concat_fils(arbre a,arbre fils){
    a->fils_gauche=fils;
    return a;
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