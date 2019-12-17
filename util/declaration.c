#include "declaration.h"

extern int reg;
extern int numligne;

int compteur=0;

/**
 * Initialisation de la table des déclarations
 */
void initTabDecla(){
    int i;
    
    for(i=0; i<NMAX*2; i++){
        if(i<4){
            tab_decla[i].nature=N_BASE;
            tab_decla[i].exec=1;
        }else{
            tab_decla[i].nature=N_EMPTY;
            tab_decla[i].exec = -1;
        }
        
        tab_decla[i].suivant = NO_NEXT;
        tab_decla[i].region = -1;
        tab_decla[i].description = -1;
    }
}

int insererDeclaration(int num_lex, int nature, int numchamps, int type, int reg){
    int description=-1;
    /**
     * Si le lexeme existe déja :
     */
    if(tab_decla[num_lex].nature!=-1){
        insererDeclarationExistante(num_lex,nature,numchamps, type, reg);
        
    }else{
        tab_decla[num_lex].nature=nature;
        //insererRegion
        tab_decla[num_lex].region=sommet(p);
      
        if(numchamps!=0){
            description = insererRepresentation(nature, numchamps);
        }else if(type!=-1){
            description=type;
        }
        tab_decla[num_lex].description=description;
        remplirColonneExec(nature, num_lex, reg);
        
    }
    
    return 0;
}

void remplirColonneExec(int nature, int num_lex, int reg){

    int num_champs=0, i, nb_champs=0, taille=0, taille_type=0;
    
    switch(nature){
        
    case N_PROC:
        tab_decla[num_lex].exec=reg;
        break;
    case N_FONC:
        tab_decla[num_lex].exec=reg;            
        break;
    case N_STRUCT:
        num_champs=tab_decla[num_lex].description;
        nb_champs=tab_representation[num_champs];
        num_champs++;

        for(i=0; i<nb_champs; i++){
            taille+=tab_decla[tab_representation[num_champs]].exec;
            num_champs=num_champs+2;
        }
        tab_decla[num_lex].exec=taille;
        break;
    case N_TAB:
        taille++;        
        num_champs=tab_decla[num_lex].description;
        taille_type=tab_decla[tab_representation[num_champs]].exec;
        nb_champs=tab_representation[num_champs+1];
        num_champs=num_champs+2;

        for(i=0; i<nb_champs; i++){
            if(tab_representation[num_champs+1]-tab_representation[num_champs]>0){
                taille*=tab_representation[num_champs+1]-tab_representation[num_champs];
            }else if(tab_representation[num_champs+1]-tab_representation[num_champs]==0){
		fprintf(stderr, "Erreur ligne %d : la dimension n°%d du tableau est nulle\n", numligne, i+1);
	    }else{
		fprintf(stderr, "Erreur ligne %d : la dimension n°%d du tableau est négative\n", numligne, i+1);
	    }	
            num_champs=num_champs+2;
        }
        tab_decla[num_lex].exec=taille*taille_type;
        break;
    case N_VAR :
        tab_decla[num_lex].exec=deplac;
        deplac=deplac+tab_decla[tab_decla[num_lex].description].exec;
        break;
    case N_PARAM:
        tab_decla[num_lex].exec=deplac;
        deplac=deplac+tab_decla[tab_decla[num_lex].description].exec;
        break;
    }
    
}

void afficheTabDeclaration(){
    char nat[10];
    int i=0;
    fprintf(stdout, "\n_____________________________________________________________________________\nTable Declaration\n_____________________________________________________________________________\nnumdecla--------nature----------------suivant--------region-------description-----------exec\n");
    while(i<=30 && tab_lexico[i].lexeme!=NULL){

        switch(tab_decla[i].nature){
        case N_BASE:
            strcpy(nat, "N_BASE  ");
            break;
        case N_STRUCT:
            strcpy(nat, "N_STRUCT");
            break;
        case N_TAB:
            strcpy(nat, "N_TAB   ");
            break;
        case N_VAR:
            strcpy(nat, "N_VAR   ");
            break;
        case N_PARAM:
            strcpy(nat, "N_PARAM ");
            break;
        case N_PROC:
            strcpy(nat, "N_PROC  ");
            break;
        case N_FONC:
            strcpy(nat, "N_FONC  ");
            break;
        default:
            strcpy(nat, "        ");
            break;
            
        } 
        fprintf(stdout, "%d\t\t%s\t\t%d\t\t%d\t\t%d\t\t%d\n", i, nat, tab_decla[i].suivant, tab_decla[i].region, tab_decla[i].description, tab_decla[i].exec);
        i++;
    }
    i=499;
    while(i<538 && tab_lexico[i].lexeme!=NULL){

        switch(tab_decla[i].nature){
        case N_BASE:
            strcpy(nat, "N_BASE  ");
            break;
        case N_STRUCT:
            strcpy(nat, "N_STRUCT");
            break;
        case N_TAB:
            strcpy(nat, "N_TAB   ");
            break;
        case N_VAR:
            strcpy(nat, "N_VAR   ");
            break;
        case N_PARAM:
            strcpy(nat, "N_PARAM ");
            break;
        case N_PROC:
            strcpy(nat, "N_PROC  ");
            break;
        case N_FONC:
            strcpy(nat, "N_FONC  ");
            break;
        default:
            strcpy(nat, "        ");
            break;
        } 
        fprintf(stdout, "%d\t\t%s\t\t%d\t\t%d\t\t%d\t\t%d\n", i, nat, tab_decla[i].suivant, tab_decla[i].region, tab_decla[i].description, tab_decla[i].exec);
        i++;
    }
}



int insererDeclarationExistante(int num_lex,int nat,int numchamps, int type, int reg){
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
    tab_decla[suiv].region=sommet(p);
    tab_decla[prec].suivant = suiv;

    //insererRegion;
    if(numchamps!=0){
        description=insererRepresentation(nat, numchamps);
    }else if(type!=-1){
        description=type;
    }

    //tab_decla[num_lex].description=description;
    
    tab_decla[suiv].description=description;
    remplirColonneExec(nat, suiv, reg);

    return 0;
}


int assoc_nom(int num_lex){
    /**
     * <AMELIORATION> : Faire en sorte de dire dans quel region la variable a pu être déclarer ou dire si l'utilisateur ne c'est pas tromper de variable, proposer un solution
     */
    pile p2=pile_vide(), p3=pile_vide();
    int on_continue=1, i=num_lex;

    while(!est_pile_vide(p)){
        p2=empiler(p2,sommet(p));
        p=depiler(p);
    }

    while(!est_pile_vide(p2)){
        p=empiler(p, sommet(p2));
        p3=empiler(p3, sommet(p2));
        p2=depiler(p2);        
    }

    while(!est_pile_vide(p3)){
        while(on_continue){
            if(tab_decla[i].nature==N_VAR && tab_decla[i].region==sommet(p3)){
                return i;
            }

            if(tab_decla[i].suivant!=NO_NEXT){
                i=tab_decla[i].suivant;
            }else on_continue=0;
        }

        p3=depiler(p3);
        on_continue=1;
        i=num_lex;
    }
 
    return -1;
}
