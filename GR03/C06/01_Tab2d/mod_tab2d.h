#ifndef MOD_TAB2D__H
#define MOD_TAB2D__H

//Dépendances du module
#include <stdio.h>


//Constantes spécifiques au module MOD_TAB2D
#define MAX_LIGNES 100
#define MAX_COLONNES 50

//Prototypes des fonctions du module
/*
AFFICHER_TAB2D
Affiche le contenu d'un tableau à deux dimensions dans la console
Paramètres: 
- tab2d: Un tableau 2D d'entiers avec MAX_COLONNES colonne
- nb_lignes: nombre de lignes effectives du tableau
- nb_colonne: nombre de colonnes effectuves du tableau
*/
void afficher_tab2d(const int tab[][MAX_COLONNES], int nb_lignes, int nb_colonnes);


/*

*/
void doubler_valeurs_tab2d(int tab[][MAX_COLONNES], int nb_lignes, int nb_colonnes);


#endif