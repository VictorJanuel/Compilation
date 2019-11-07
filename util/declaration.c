#include "declaration.h"


/**
 * Initialisation de la table des déclarations
 */
void initTabDecla(){
    int i;
    
    for(i=0; i<NMAX*2; i++){
        if(i<4)
            tab_decla[i].nature=N_BASE;
        else
            tab_decla[i].nature=N_EMPTY;
        
        tab_decla[i].suivant = NO_NEXT;
        tab_decla[i].region = -1;
        tab_decla[i].description = -1;
        tab_decla[i].exec = -1;
    }
}

int insererDeclaration(int num_lex, int nature, int numchamps){
    int description=-1;
    if(tab_decla[num_lex].nature!=-1){
        insererDeclarationExistante(num_lex,nature,numchamps);
    }else{
        tab_decla[num_lex].nature=nature;
        //insererRegion;
        if(numchamps!=0){
            description=insererRepresentation(nature, numchamps);
        }

        tab_decla[num_lex].description=description;
        
    }
    
    return 0;
}

void afficheTabDeclaration(){
    int i=0;
    fprintf(stdout, "Table Declaration\n ______________________________\nnumdecla--nature---suivant-----description\n");
    while(i<30 && tab_lexico[i].lexeme!=NULL){
        fprintf(stdout, "%d\t%d\t%d\t%d\n", i, tab_decla[i].nature, tab_decla[i].suivant, tab_decla[i].description);
        i++;
    }
    i=499;
    while(i<538 && tab_lexico[i].lexeme!=NULL){
        fprintf(stdout, "%d\t%d\t%d\t%d\n", i, tab_decla[i].nature, tab_decla[i].suivant, tab_decla[i].description);
        i++;
    }
}



int insererDeclarationExistante(int num_lex,int nat,int numchamps){
    int description=-1;
    int suiv=num_lex;
    int prec=num_lex;
    /*Si suivant déja existant */
    while(tab_decla[suiv].suivant!=N_EMPTY){
        prec=suiv;
        suiv=tab_decla[suiv].suivant;   
    }

    prec=suiv;
    /* Si premère insertion >500 */
    if(tab_decla[num_lex].suivant==N_EMPTY){
        suiv=500;
    }
    

    /*On trouve un case vide */
    while(tab_decla[suiv].nature!=N_EMPTY){
        suiv++;
    }

    
    tab_decla[suiv].nature=nat;
    tab_decla[prec].suivant = suiv;

        //insererRegion;
    if(numchamps!=0){
        description=insererRepresentation(nat, numchamps);
    }
    tab_decla[suiv].description=description;

    return 0;
}

