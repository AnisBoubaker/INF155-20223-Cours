


#include <stdio.h>
#include <stdlib.h>


#define NB_MAX_LIGNES 40
#define NB_MAX_COLONNES 100


//Déclaratiuons de fonctions
void afficher_tab2d(const int tab[][NB_MAX_COLONNES], int nb_lignes, int nb_colonnes);
void doubler_tab2d(int tab[][NB_MAX_COLONNES], int nb_lignes, int nb_colonnes);


int main(void)
{
	int tab2d[NB_MAX_LIGNES][NB_MAX_COLONNES] = { {5, 7, 8}, {3, 1, 6}, {4, 3, 2} };

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