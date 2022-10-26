

#include <stdio.h>
#include <stdlib.h>

void afficher_tab(int tab[], int taille);
void tri_insertion(int tab[], int taille);
void tri_selection(int tab[], int taille);

int main(void)
{
	int mon_tab1[100] = { 44, 10, 20, 55, 10, 24, 35 };
	int mon_tab2[100] = { 44, 10, 20, 55, 10, 24, 35 };

	printf("Avant le tri: \n");
	afficher_tab(mon_tab1, 7);

	tri_insertion(mon_tab1, 7);

	printf("Apres le tri par insertion: \n");
	afficher_tab(mon_tab1, 7);

	tri_selection(mon_tab2, 7);

	printf("Apres le tri par selection: \n");
	afficher_tab(mon_tab2, 7);

	system("pause");
	return EXIT_SUCCESS;
}

void tri_insertion(int tab[], int taille)
{
	int i, j, x;

	for (i = 1; i < taille; i++)
	{
		x = tab[i];
		j = i;

		while (j > 0 && tab[j - 1] > x)
		{
			tab[j] = tab[j - 1];
			j--;
		}

		tab[j] = x;
	}
}


void tri_selection(int tab[], int taille)
{
	int indice_min; 

	for (int i = 0; i < taille; i++)
	{
		indice_min = i;
		for (int j = i + 1; j < taille; j++)
		{
			if (tab[j] < tab[indice_min])
			{
				indice_min = j;
			}
		}
		if (indice_min != i)
		{
			int copie; 
			copie = tab[i];
			tab[i] = tab[indice_min];
			tab[indice_min] = copie;
		}
	}

}


void afficher_tab(int tab[], int taille)
{
	for (int i = 0; i < taille; i++)
	{
		printf("%d ", tab[i]);
	}
	printf("\n");
}



/*
Écrire la fonction mediane_tab qui calcule la médiane d'un ensemble d'entiers 
stockés dans un tableau. 
*/

double mediane_tab(const int tab[], int taille)
{

}