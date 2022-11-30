

#include <stdio.h>
#include <stdlib.h>

int** creer_tab2d_int(int nb_lignes, int nb_colonnes); 

int main(void)
{
	int** tab;
	int nb_lignes = 3;
	int nb_colonnes = 5;

	tab = creer_tab2d_int(3, 5);
	if (tab == NULL)
	{
		exit(EXIT_FAILURE);
	}

	/*

	tab = (int**)malloc(sizeof(int*) * nb_lignes);
	if (tab == NULL)
	{
		exit(EXIT_FAILURE);
	}
	for (int i = 0; i < nb_lignes; i++)
	{
		tab[i] = (int*)malloc(sizeof(int)*nb_colonnes);
		if (tab[i] == NULL)
		{
			for (int j = 0; j < i; j++)
			{
				free(tab[j]);
			}
			free(tab);
			exit(EXIT_FAILURE);
		}
	}*/


	for (int i = 0; i < nb_lignes; i++)
	{
		for (int j = 0; j < nb_colonnes; j++)
		{
			tab[i][j] = i * j - 4;
		}
	}

	for (int i = 0; i < nb_lignes; i++)
	{
		for (int j = 0; j < nb_colonnes; j++)
		{
			printf("%d\t", tab[i][j]);
		}
		printf("\n");
	}

	system("pause");
	return EXIT_SUCCESS;
}

int** creer_tab2d_int(int nb_lignes, int nb_colonnes)
{
	int** tab;

	tab = (int**)malloc(sizeof(int*) * nb_lignes);
	if (tab == NULL)
	{
		return NULL;
	}
	for (int i = 0; i < nb_lignes; i++)
	{
		tab[i] = (int*)malloc(sizeof(int) * nb_colonnes);
		if (tab[i] == NULL)
		{
			for (int j = 0; j < i; j++)
			{
				free(tab[j]);
			}
			free(tab);
			return NULL;
		}
	}

	return tab;
}