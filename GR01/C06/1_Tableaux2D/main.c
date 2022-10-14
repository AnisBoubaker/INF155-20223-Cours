#include <stdio.h>
#include <stdlib.h>


#define NB_MAX_LIGNES 100
#define NB_MAX_COLONNES 100


void afficher_tab2d(double tab[][NB_MAX_COLONNES],
	int nb_lignes, int nb_colonnes);

void convertir_fahreneith(double temps[][NB_MAX_COLONNES],
	int nb_lignes, int nb_colonnes);

int main(void)
{
	int demo[NB_MAX_LIGNES][NB_MAX_COLONNES] = { {0} }; //Visual Studio accepte aussi {0}

	double temperatures[NB_MAX_LIGNES][NB_MAX_COLONNES] = {
		{25.5, 20.2, 23.5},
		{12.5, 13.3},
		{24.0, 20.4, 26.2}
	};

	/*for (int ligne = 0; ligne < 5; ligne++)
	{
		for (int colonne = 0; colonne < 4; colonne++)
		{
			printf("%.2lf\t", temperatures[ligne][colonne]);
		}
		printf("\n");
	}*/

	printf("Temperatures en Celcius: \n");
	afficher_tab2d(temperatures, 3, 3);

	convertir_fahreneith(temperatures, 3, 3);

	printf("Temperatures en Fahreneith: \n");
	afficher_tab2d(temperatures, 3, 3);


	/*int i;
	i = 0;
	for (int j = 0; j < 4; i++)
	{
		printf("%d ", temperatures[i][j]);
	}
	i = 1;
	for (int j = 0; j < 4; i++)
	{
		printf("%d ", temperatures[i][j]);
	}*/
	system("pause");
	return 0;
}



void afficher_tab2d(const double tab[][NB_MAX_COLONNES],
	int nb_lignes, int nb_colonnes)
{
	for(int i = 0; i < nb_lignes; i++)
	{
		for (int j = 0; j < nb_colonnes; j++)
		{
			printf("%.2lf\t", tab[i][j]);
		}
		printf("\n");
	}
}

void convertir_fahreneith(double temps[][NB_MAX_COLONNES],
	int nb_lignes, int nb_colonnes
	)
{
	for (int i = 0; i < nb_lignes; i++)
	{
		for (int j = 0; j < nb_colonnes; j++)
		{
			temps[i][j] = temps[i][j] * 1.8 + 32;
		}
	}
}