/*
Écrire un programme qui saisit (demande à l'usager de saisir) un entier n. 

Votre programme doit faire la somme des valeurs entières entre 1 et n. 

Exemple 1: 
------------
Veuillez saisir la valeur de n: 5
La somme des entiers entre 1 et 5 est: 15

Exemple 2:
------------
Veuillez saisir la valeur de n: 100
La somme des entiers entre 1 et 100 est: 5050

*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int n;
	int compteur; 
	int resultat; 

	printf("Veuillez saisir la valeur de n: ");
	scanf("%d", &n);


	resultat = 0; 
	for (compteur = 1; compteur <= n; compteur++)
	{
		resultat = resultat + compteur;
	}

	/*compteur = 1; 
	resultat = 0; 
	while (compteur <= n)
	{
		resultat = resultat + compteur;
		compteur++;
	}*/

	printf("La somme des valeurs entre 1 et %d est: %d\n", n, resultat);

	system("pause");
	return EXIT_SUCCESS;
}