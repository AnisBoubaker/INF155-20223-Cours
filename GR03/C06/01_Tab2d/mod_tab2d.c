
#include "mod_tab2d.h"

void afficher_tab2d(const int tab[][MAX_COLONNES], int nb_lignes, int nb_colonnes)
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

void doubler_valeurs_tab2d(int tab[][MAX_COLONNES], int nb_lignes, int nb_colonnes)
{
	for (int ligne = 0; ligne < nb_lignes; ligne++)
	{
		for (int colonne = 0; colonne < nb_colonnes; colonne++)
		{
			tab[ligne][colonne] = tab[ligne][colonne] * 2;
		}
	}
}