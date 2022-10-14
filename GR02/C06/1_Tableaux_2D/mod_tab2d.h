//ifndef: If not defined
#ifndef MOD_TAB2D_H__
#define MOD_TAB2D_H__


/* D�pendances du modules*/
#include <stdio.h>


//Constantes sp�cifiques aux fonctions du module
#define NB_MAX_LIGNES 40
#define NB_MAX_COLONNES 100

/*
AFFICHER_TAB2D
Affiche le contenu d'un tableau � deux dimensions dans la console. 
Param�tres: 
- tab: tableau � 2 dimensions d'entiers avec NB_MAX_COLONNES colonnes comme taille maximale.
- nb_lignes: taille effective en lignes (>0)
- nb_colonnes: taille effective en colonnes (>0)
Retour: Rien. 
*/
void afficher_tab2d(const int tab[][NB_MAX_COLONNES], int nb_lignes, int nb_colonnes);

/*

*/
void doubler_tab2d(int tab[][NB_MAX_COLONNES], int nb_lignes, int nb_colonnes);



#endif