

#include <stdio.h>
#include <stdlib.h>

void afficher_tab(int tab[], int taille);
void tri_insertion(int tab[], int taille);
void tri_selection(int tab[], int taille);
double mediane_tab(const int tab[], int taille);

#define TAILLE_MAX 100

int main(void)
{
	int mon_tab1[TAILLE_MAX] = { 44, 10, 20, 55, 10, 24, 35 };
	int mon_tab2[TAILLE_MAX] = { 44, 10, 20, 55, 10, 24, 35 };
	int mon_tab3[TAILLE_MAX] = { 44, 10, 20, 55, 10, 24, 35 };
	int mon_tab4[TAILLE_MAX] = { 44, 10, 20, 55, 10, 24, 35, 11 };

	printf("Avant le tri: \n");
	afficher_tab(mon_tab1, 7);

	tri_insertion(mon_tab1, 7);

	printf("Apres le tri par insertion: \n");
	afficher_tab(mon_tab1, 7);

	tri_selection(mon_tab2, 7);

	printf("Apres le tri par selection: \n");
	afficher_tab(mon_tab2, 7);

	printf("La mediane du tableau tab3: %.2lf\n", mediane_tab(mon_tab3, 7));

	printf("La mediane du tableau tab4: %.2lf\n", mediane_tab(mon_tab4, 8));

	tri_selection(mon_tab4, 8);

	printf("tab4 trie: \n");
	afficher_tab(mon_tab4, 8);


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
NOTE: Le tableau reçu n'est pas forcément trié!!
*/

double mediane_tab(const int tab[], int taille)
{
	int copie[TAILLE_MAX];
	double mediane; 

	//Créer une copie du tableau
	for (int i = 0; i < taille; i++)
	{
		copie[i] = tab[i];
	}

	tri_selection(copie, taille);


	if (taille % 2 != 0) //La taille est impaire
	{
		mediane = copie[taille / 2];
	}
	else
	{
		mediane = (copie[taille / 2] + copie[(taille / 2) - 1]) / 2.0;
	}
	return mediane; 
}