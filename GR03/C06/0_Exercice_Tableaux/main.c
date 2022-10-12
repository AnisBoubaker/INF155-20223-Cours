/*
Écrire la fonction `trouver_val` qui identifie la position (indice) 
d'une valeur 'val' dans un tableau tab d'entiers.

La fonction doit retourner une valeur vraie si la valeur `val` est
dans le tableau ou fausse sinon. De plus, la position doit être 
fournie par référence (pointeur).

Si la valeur se trouve plus d'une fois dans le tableau, la fonction
doit retourner la position de la première occurence.
*/


#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

#define TAILLE_MAX 100

int trouver_val(int tab[], int nb_elts, int valeur, int* position);

int main(void)
{
	int mon_tab[TAILLE_MAX] = {10, 20, 35, 12, 8, 7};
	int autre_tab[50] = {0};
	int position; 
	/*mon_tab[0] = 10; 
	mon_tab[1] = 20;
	mon_tab[2] = 35;
	mon_tab[3] = 12;
	mon_tab[4] = 8;
	mon_tab[5] = 7;*/

	if (  trouver_val(mon_tab, 6, 55, &position)  )
	{
		printf("La valeur a ete trouvee a la position: %d\n", position);
	}
	else
	{
		printf("La valeur recherchee n'est pas dans le tableau.\n");
	}

	system("pause");
	return EXIT_SUCCESS;
}

int trouver_val(int tab[], int nb_elts, int valeur, int* position)
{
	int pos = 0; 

	while (tab[pos]!=valeur && pos<nb_elts)
	{
		pos++;
	}
	/*
	En sortant de la boucle, pos peut valoir: 
	- l'indice où se trouve la valeur recherchée, OU
	- nb_elts
	*/
	if (pos != nb_elts)
	{
		*position = pos;
		return 1;
	}
	else
	{
		return 0;
	}

}