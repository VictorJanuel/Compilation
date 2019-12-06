union{
    int entier ;
    float reel ;
    char booleen ;
    char caractere ;
} cellule ;

cellule pseudo_pile[5000] ;


void evalue_arbre(arbre a){
/**
* Des trucs
*/
    switch(a->nature){
    // Liste d'instructions
    case A_LISTE:
        evalue_arbre(a->fils_gauche);
        evalue_arbre(a->fils_gauche->frere_droit);
        break;
    // MaVar := ...
    case A_AFFECT:
        pos = evalue_arbre_variable(a->fils_gauche);
        val = evalue_arbre_exp(a->fils_gauche->frere_droit);
        stocker(val, pos);
        break;
    // Si ... alors ... sinon ...
    case A_IF_THEN_ELSE:
        b=evalue_arbre_bool(a->fils_gauche);
        if(b){
            evalue_arbre(a->fils_gauche->frere_droit);
        }else{
            evalue_arbre(a->fils_gauche->frere_droit->frere_droit);
        }
        break;
    case A_TANT_QUE:
        do{
            b=evalue_arbre_bool(a->fils_gauche);
            evalue_arbre(a->fils_gauche);
        }while(b);
        break;
    // maProcdure(arg1, arg2, ..., argN);
    case A_APPEL_PROC:
        /**
         * Evaluer les paramètres.
         * Les mettre au bon endroit de la pile.
         * Mise en place des chainages dans la pile.
         * Mettre a jour BC (base courante).
         * Evaluer arbre de la procédure.
         * evalue_arbre(table_region[champs_exec_tab_decla(a->numDecla)].arbre).
         * Mettre en place chainages dans la pile.
         * Mettre à jour BC.
         * 
         */
        break;
    case A_APPEL_FONC:
        /**
         * idem
         * 
         */
        break;
    }
}

int evalue_arbre_exp(arbre a){
/**
 * Des trucs
 */
    cellule val1, val2;

    /**
     * Parcours récursif des expressions arithmétiques
     */
    switch(a->nature){
        case PLUS:
            val1 = evalue_arbre_exp(a->fils_gauche);
            val2 = evalue_arbre_exp(a->fils_gauche->frere_droit);
            return (val1+val2);
        case MOINS:
            val1 = evalue_arbre_exp(a->fils_gauche);
            val2 = evalue_arbre_exp(a->fils_gauche->frere_droit);
            return(val1-val2);
        case MULT:
            val1 = evalue_arbre_exp(a->fils_gauche);
            val2 = evalue_arbre_exp(a->fils_gauche->frere_droit);
            return(val1*val2);
        case DIV:
            val1 = evalue_arbre_exp(a->fils_gauche);
            val2 = evalue_arbre_exp(a->fils_gauche->frere_droit);
            return(val1/val2);
        case MOD:             
            val1 = evalue_arbre_exp(a->fils_gauche);
            val2 = evalue_arbre_exp(a->fils_gauche->frere_droit);
            return(val1/val2);
        case IDF:
            //** Cas d'arret
            val1 = evalue_arbre_variable(a);
            return val1;
        case A_APPEL_FONC:
            //** On rentre dans une fonction appelée
            evalue_arbre(a->fils_gauche);
            val1 = -1;//???
            return val1;    
        default:
            fprintf(stderr, "L'arbre n'a pas pu être évalué\n");
        return -1;
    }
}

boolean evalue_arbre_bool(arbre a){
    /**
     * Des trucs
     */
    switch(a->nature){
        case OU:
            val1 = evalue_arbre_bool(a->fils_gauche);
            val2 = evalue_arbre_bool(a->fils_gauche->frere_droit);
            return (val1 || val2);
        case ET:
            val1 = evalue_arbre_bool(a->fils_gauche);
            val2 = evalue_arbre_bool(a->fils_gauche->frere_droit);
            return (val1 && val2);
        case EGAL:
            val1 = evalue_arbre_bool(a->fils_gauche);
            val2 = evalue_arbre_bool(a->fils_gauche->frere_droit);
            return (val1 == val2);
        case DIFF:
            val1 = evalue_arbre_bool(a->fils_gauche);
            val2 = evalue_arbre_bool(a->fils_gauche->frere_droit);
            return (val1!=val2);
        default:
            fprintf(stderr, "Erreur expression booléenne.\n");
            return -1;
    }
}

cellule evalue_arbre_variable(arbre a){

    switch(a->nature){

    }
}


void stocker(int valeur, int position){
    pseudo_pile[position] = valeur;
}