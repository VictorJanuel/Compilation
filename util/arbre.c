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
    printf("avant a->num_lex\n");
    a->num_lex=num_lex;
    printf("avant a->num_dec\n");
    a->num_dec=num_decla;
    printf("avant a->fils_gauche\n");
    a->fils_gauche=filsgauche;
    printf("avant a->frere_droit\n");
    if(filsgauche==NULL){
        printf("filsgauche null\n");
    }
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
/*
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
    }*/

void switch_sa_mere(int num){
    switch(num){
    case A_IDF:
        printf("A_IDF\n");
        break;
    case A_CSTE_E:
        printf("A_CSTE_E\n");
        break;
    case A_CSTE_R:
        printf("A_CSTE_R\n");
        break;
    case A_CSTE_C:
        printf("A_CSTE_S\n");
        break;
    case A_PLUS:
        printf("A_PLUS\n");
        break;
    case A_MOINS:
        printf("A_MOINS\n");
        break;
    case A_DIV:
        printf("A_DIV\n");
        break;
    case A_SUP:
        printf("A_SUP\n");
        break;
    case A_SUP_EG:
        printf("A_SUP_EG\n");
        break;
    case A_INF:
        printf("A_INF\n");
        break;
    case A_INF_EG:
        printf("A_INF_EG\n");
        break;
    case A_EG:
        printf("A_EG\n");
        break;
    case A_DIFF:
        printf("A_DIFF\n");
        break;
    case A_LISTE:
        printf("A_LISTE\n");
        break;
    case A_AFFECT:
        printf("A_AFFECT\n");
        break;
    case A_APPEL:
        printf("A_APPEL\n");
        break;
    case A_WHILE:
        printf("A_WHILE\n");
        break;
    case A_IF:
        printf("A_IF\n");
        break;
    case A_LISTE_IF:
        printf("A_LISTE_IF\n");
        break;
    case A_LISTE_ELSE:
        printf("A_LISTE_ELSE\n");
        break;
    case A_TRUE:
        printf("A_TRUE\n");
        break;
    case A_FALSE:
        printf("A_FALSE\n");
        break;
    case A_ET:
        printf("A_ET\n");
        break;
    case A_OU:
        printf("A_OU\n");
        break;
    default:
        printf("OK\n");
        break;
    }
}

void afficher_arbre_bis(arbre a, int profondeur){

    int i=0;
    if(!est_vide(a)){
        afficher_arbre_bis(a->fils_gauche, profondeur+1);
        for(i=0; i<profondeur; i++) printf("\t");
        printf("%d", a->num_lex);
        switch_sa_mere(a->appel);
   
        afficher_arbre_bis(a->frere_droit, profondeur+1);
    }
}

void affiche_arbre(arbre a){
    afficher_arbre_bis(a, 0);
}


