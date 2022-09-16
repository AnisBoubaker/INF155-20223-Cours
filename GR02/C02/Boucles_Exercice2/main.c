/*
Écrire un programme qui fait la somme des valeurs 0..n, 
n étant une valeur saisie par l'usager. 

Par exemple: 

Saisir la valeur de n: 100
La somme des valeurs entre 0 et 100 est: 5050
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int n; 
	int compteur; 
	int somme; 

	printf("Saisir la valeur de n: ");
	scanf("%d", &n);

	compteur = 0;
	somme = 0; 
	//On suppose que n = 5
	while (compteur <= n )
	{
		somme = somme + compteur; 
		compteur++;
	}
	printf("La somme des valeurs entre 0 et %d est de: %d\n", n, somme);
	/*
	Iteration 6: 
		Compteur = 5
		Somme = 15
	Iteration 5: 
		Compteur = 4
		Somme = 10
	Iteration 4: 
		Compteur = 3
		Somme = 6
	Iteration 3: 
		Compteur = 2
		somme = 3
	Iteration 2: 
		compteur = 1
		somme = 1
	Iteration 1: 
		compteur = 0
		somme = 0
		nouvelle somme = 0
	
	*/

	system("pause");
	return EXIT_SUCCESS;
}