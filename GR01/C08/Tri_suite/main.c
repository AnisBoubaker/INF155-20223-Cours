
#include <stdio.h>
#include <stdlib.h>

void afficher_tab(int tab[], int taille);
void tri_insertion(int tab[], int taille);
void tri_selection(int tab[], int taille);

int main(void)
{
	int mon_tableau1[] = { 44, 10, 20, 55, 10, 24, 35 };
	int mon_tableau2[] = { 44, 10, 20, 55, 10, 24, 35 };
	int mon_tableau3[] = { 44, 10, 20, 55, 10, 24, 35 };

	printf("Avant le tri: \n");
	afficher_tab(mon_tableau1, 7);

	tri_insertion(mon_tableau1, 7);

	printf("Apres le tri insertion: \n");
	afficher_tab(mon_tableau1, 7);

	printf("Apres le tri selection: \n");
	tri_selection(mon_tableau2, 7);
	afficher_tab(mon_tableau2, 7);

	system("pause");
	return 0;
}

void afficher_tab(int tab[], int taille)
{
	for (int i = 0; i < taille; i++)
	{
		printf("%d ", tab[i]);
	}
	printf("\n");
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
			int copie = tab[indice_min];
			tab[indice_min] = tab[i];
			tab[i] = copie; 
		}
	}
}