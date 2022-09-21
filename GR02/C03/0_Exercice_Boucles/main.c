/*
Écrire un programme qui affiche tous les multiples d'une valeur k, pour les
entiers entre une valeur debut et fin

Exemples: 

Valeur de début: 4
Valeur de fin: 120

Valeur de k: 27

Tous les multiples de 27 entre 4 et 120 sont: 
27
54
81
108
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int debut, fin; //Bornes entre lesquelles on cherche les multiples
	int k; //Valeur dont on cherche les multiples
	int compteur; 

	printf("Saisir la valeur du debut de l'intervalle: ");
	scanf("%d", &debut);

	printf("Saisir la valeur de la fin de l'intervalle: ");
	scanf("%d", &fin);

	printf("Saisir la valeur de k: ");
	scanf("%d", &k);


	printf("Tous les multiples de %d entre %d et %d sont: \n", k, debut, fin);

	for (compteur = debut; compteur <= fin; compteur++)
	{
		if (compteur % k == 0)
		{
			printf("%d\n", compteur);
		}
	}


	/*compteur = debut; //Initialisation d'un compteur
	while (compteur <= fin) //Condition qui limite la valeur maximale du compteur
	{
		if (compteur % k == 0)
		{
			printf("%d\n", compteur);
		}
		compteur++; //Incrémenter le compteur
	}*/
	

	system("pause");
	return EXIT_SUCCESS;
}