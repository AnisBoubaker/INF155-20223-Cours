/*
Écrire un programme qui fait le produit des entiers entre 1 et n, n étant
une valeur saisie par l'usager. 

Dans cet exercice, vous devez utiliser une boucle for. 
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int n; 
	int resultat; 

	printf("Saisir la valeur de n: ");
	scanf("%d", &n);

	resultat = 1;
	for (int compteur = 1; compteur <= n; compteur++)
	{
		resultat = resultat * compteur;
	}

	printf("Le produit des entiers entre 1 et %d est: %d\n", n, resultat);

	system("pause");
	return EXIT_SUCCESS;
}