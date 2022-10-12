


#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include "mod_tab2d.h"


int main(void)
{
	int tab2d[MAX_LIGNES][MAX_COLONNES] = { {5,8,6,2}, {1, 7, 3, 8, 4}, {3, 2, 1, 25}, {4, 6, 10} };

	tab2d[3][2] = 20;

	printf("La valeur a la case [3][2]: %d\n", tab2d[3][2]);

	/*for (int ligne = 0; ligne < 7; ligne++)
	{
		for (int colonne = 0; colonne < 6; colonne++)
		{
			printf("%d\t", tab2d[ligne][colonne]);
		}
		printf("\n");
	}*/
	printf("Avant de doubler: \n");
	afficher_tab2d(tab2d, 4, 5);

	doubler_valeurs_tab2d(tab2d, 4, 5);

	printf("Apres avoir double: \n");
	afficher_tab2d(tab2d, 4, 5);

	system("pause");
	return EXIT_SUCCESS;
}

