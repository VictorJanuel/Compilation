
#include "arbre.h"



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
    filsgauche->frere_droit=freredroit;
    
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

void switch_arbre(int num){
    switch(num){
    case A_IDF:
        printf("A_IDF");
        break;
    case A_CSTE_E:
        printf("A_CSTE_E");
        break;
    case A_CSTE_R:
        printf("A_CSTE_R");
        break;
    case A_CSTE_C:
        printf("A_CSTE_S");
        break;
    case A_PLUS:
        printf("A_PLUS");
        break;
    case A_MOINS:
        printf("A_MOINS");
        break;
    case A_DIV:
        printf("A_DIV");
        break;
    case A_SUP:
        printf("A_SUP");
        break;
    case A_SUP_EG:
        printf("A_SUP_EG");
        break;
    case A_INF:
        printf("A_INF");
        break;
    case A_INF_EG:
        printf("A_INF_EG");
        break;
    case A_EG:
        printf("A_EG");
        break;
    case A_DIFF:
        printf("A_DIFF");
        break;
    case A_LISTE:
        printf("A_LISTE");
        break;
    case A_AFFECT:
        printf("A_AFFECT");
        break;
    case A_APPEL:
        printf("A_APPEL");
        break;
    case A_WHILE:
        printf("A_WHILE");
        break;
    case A_IF:
        printf("A_IF");
        break;
    case A_LISTE_IF:
        printf("A_LISTE_IF");
        break;
    case A_LISTE_ELSE:
        printf("A_LISTE_ELSE");
        break;
    case A_TRUE:
        printf("A_TRUE");
        break;
    case A_FALSE:
        printf("A_FALSE");
        break;
    case A_ET:
        printf("A_ET");
        break;
    case A_OU:
        printf("A_OU");
        break;
    default:
        printf("OK");
        break;
    }
}

void afficher_arbre_bis(arbre a, int largeur){
    printf("[%d] ", a->num_lex);
    switch_arbre(a->appel);
    if(!est_vide(a->frere_droit)){
	printf("  ");
        afficher_arbre_bis(a->frere_droit, largeur+1);
    }
    if(!est_vide(a->fils_gauche)){
        printf("\n");
        for(int i=0; i<largeur; i++)
            fprintf(stdout, "  \t");
        afficher_arbre_bis(a->fils_gauche, largeur);
    }
}

void affiche_arbre(arbre a){
    afficher_arbre_bis(a, 0);
    fprintf(stdout, "\n");
}





