

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>


void afficher_tab(const int tab[], int taille);
void tri_insertion_croissant(int tab[], int taille);

int main(void)
{
	int mon_tab[100] = { 44, 10, 20 ,55, 10 , 24, 35 };

	tri_insertion(mon_tab, 7);

	afficher_tab(mon_tab, 7);

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


