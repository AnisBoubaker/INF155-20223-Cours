

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>


void afficher_tab(const int tab[], int taille);
void tri_insertion_croissant(int tab[], int taille);
void tri_selection_croissant(int tab[], int taille);
double mediane_tab(const int tab, int taille);

#define TAILLE_MAX_TAB 100

int main(void)
{
	int mon_tab1[TAILLE_MAX_TAB] = { 44, 10, 20 ,55, 10 , 24, 35 };
	int mon_tab2[TAILLE_MAX_TAB] = { 44, 10, 20 ,55, 10 , 24, 35 };
	int mon_tab3[TAILLE_MAX_TAB] = { 44, 10, 20 ,55, 10 , 24, 35 };
	int mon_tab4[TAILLE_MAX_TAB] = { 44, 10, 20 ,55, 10 , 24, 35, 50 };

	tri_insertion_croissant(mon_tab1, 7);
	afficher_tab(mon_tab1, 7);

	tri_selection_croissant(mon_tab2, 7);
	afficher_tab(mon_tab2, 7);

	printf("La mediane du tableau3: %.2lf\n", mediane_tab(mon_tab3, 7) );
	printf("La mediane du tableau4: %.2lf\n", mediane_tab(mon_tab4, 8));

	tri_selection_croissant(mon_tab4, 8);
	afficher_tab(mon_tab4, 8);

	system("pause");
	return EXIT_SUCCESS;
}


void tri_insertion_croissant(int tab[], int taille)
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

void afficher_tab(const int tab[], int taille)
{
	for (int i = 0; i < taille; i++)
	{
		printf("%d ", tab[i]);
	}
	printf("\n");
}


void tri_selection_croissant(int tab[], int taille)
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
			copie = tab[indice_min];
			tab[indice_min] = tab[i];
			tab[i] = copie;
		}
	}
}

double mediane_tab(const int tab[], int taille)
{
	int copie_tab[TAILLE_MAX_TAB];
	double mediane;
	//Le tableau tab est constant, on doit travailler sur une copie
	for (int i = 0; i < taille; i++)
	{
		copie_tab[i] = tab[i];
	}
	//Pour trouver la valeur mediane, on doit trier le tableau
	tri_selection_croissant(copie_tab, taille);

	if (taille % 2 != 0) //Nombre d'éléments impair
	{
		mediane = copie_tab[taille / 2];
	}
	else
	{
		mediane = (copie_tab[taille / 2] + copie_tab[(taille / 2) - 1]) / 2.0;
	}
	return mediane;
}