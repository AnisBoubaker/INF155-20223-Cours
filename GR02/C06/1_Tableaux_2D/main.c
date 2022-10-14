#include <stdio.h>
#include <stdlib.h>

//NE JAMAIS INCLURE UN .C
#include "mod_tab2d.h"


int main(void)
{
	int tab2d[NB_MAX_LIGNES][NB_MAX_COLONNES] = { {5, 7, 8}, {3, 1, 6}, {4, 3, 2} };

	//Initialiser un tableau à deux dimensions avec des 0 dans toutes les cases. 
	int tab2d_nul[NB_MAX_LIGNES][NB_MAX_COLONNES] = { {0} }; //{0}

	tab2d[2][1] = 10; 

	printf("%d\n", tab2d[2][1]);


	//On suppose que la taile effective c'est 3 colonnes par 3 lignes
	int ligne, colonne; 

	/*
	ligne = 0; 
	for (colonne = 0; colonne < 3; colonne++)
	{
		printf("%d ", tab2d[ligne][colonne]);
	}
	ligne = 1;
	for (colonne = 0; colonne < 3; colonne++)
	{
		printf("%d ", tab2d[ligne][colonne]);
	}
	ligne = 2;
	for (colonne = 0; colonne < 3; colonne++)
	{
		printf("%d ", tab2d[ligne][colonne]);
	}*/
	
	//for (ligne = 0; ligne < 3; ligne++)
	//{
	//	for (colonne = 0; colonne < 3; colonne++)
	//	{
	//		//\t veut dire tabulation
	//		printf("%d\t", tab2d[ligne][colonne]);
	//	}
	//	printf("\n");
	//}

	printf("Avant d'avoir double: \n");
	afficher_tab2d(tab2d, 10, 10);

	doubler_tab2d(tab2d, 10, 10);

	printf("Apres avoir double: \n");
	afficher_tab2d(tab2d, 10, 10);


	system("pause");
	return EXIT_SUCCESS;

}
