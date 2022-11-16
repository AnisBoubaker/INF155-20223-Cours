
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int a; 
	int* adresse_allocation;
	int* foo;
	int taille; 

	printf("La taille de a dans la pile(stack) est de: %d octets\n", sizeof(int));

	//malloc: Allouer un nombre déterminé d'octets.
	//retourner l'adresse du premier octet de la mémoire allouée dans le tas.
	//Le type de retour: un pointeur générique de type void*
	adresse_allocation = (int*)malloc(sizeof(int));
	*adresse_allocation = 125;
	printf("La valeur stockee à l'adresse allouee: %d\n", *adresse_allocation);

	printf("La taille? ");
	scanf("%d", &taille);

	foo = (int*)malloc(sizeof(int) * taille);

	for (int i = 0; i < taille; i++)
	{
		printf("Valeur de la case #%d: ", i);
		scanf("%d", &foo[i]);
	}

	for (int i = 0; i < taille; i++)
	{
		printf("%d\n", foo[i]);
	}

	free(foo);

	foo = (int*)malloc(sizeof(int) * 10);
	foo[0] = 25;

	/*
	Complétez pour demander à l'usager une liste de notes (nombre défini
	par l'usager) et afficher la moyenne des notes. 
	Utiliser un tableau dynamique de doubles.
	*/



	/*
	*(foo + 0) = 20;
	//Equivalente : foo[0] = 20;
	*(foo + 1) = 150;
	//Eq.: foo[1] = 150; 
	*(foo + 2) = 35;
	//Eq. : foo[2] = 35;
	*/

	system("pause");
	return EXIT_SUCCESS;
}