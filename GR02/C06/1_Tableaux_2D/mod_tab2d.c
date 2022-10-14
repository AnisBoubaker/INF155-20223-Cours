
//Toujours include le .h du module!
#include "mod_tab2d.h"


//La fonction peut afficher uniquement les tableaux d'entiers qui ont une taille
//maximale de 100 cases en colonnes. 
void afficher_tab2d(const int tab[][NB_MAX_COLONNES], int nb_lignes, int nb_colonnes)
{
	for (int ligne = 0; ligne < nb_lignes; ligne++)
	{
		for (int colonne = 0; colonne < nb_colonnes; colonne++)
		{
			printf("%d\t", tab[ligne][colonne]);
		}
		printf("\n");
	}
}



//Doubler toutes les valeurs d'un tableau à deux dimensions
void doubler_tab2d(int tab[][NB_MAX_COLONNES], int nb_lignes, int nb_colonnes)
{
	for (int i = 0; i < nb_lignes; i++)
	{
		for (int j = 0; j < nb_colonnes; j++)
		{
			tab[i][j] = tab[i][j] * 2; // tab[i][j] *= 2;
		}
	}
}