
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

	//malloc: Allouer un nombre d?termin? d'octets.
	//retourner l'adresse du premier octet de la m?moire allou?e dans le tas.
	//Le type de retour: un pointeur g?n?rique de type void*
	adresse_allocation = (int*)malloc(sizeof(int));
	*adresse_allocation = 125;
	printf("La valeur stockee ? l'adresse allouee: %d\n", *adresse_allocation);

	printf("La taille? ");
	scanf("%d", &taille);

	foo = (int*)malloc(sizeof(int) * taille);
	//Toujours verifier que le malloc a fonctionne!
	if (foo == NULL)
	{
		printf("Desole, plus de memoire!\n");
		exit(EXIT_FAILURE);
	}


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
	Compl?tez pour demander ? l'usager une liste de notes (nombre d?fini
	par l'usager) et afficher la moyenne des notes. 
	Utiliser un tableau dynamique de doubles.
	*/
	double* notes;
	int nb_notes; 
	double moyenne = 0;

	printf("Combien de notes: ");
	scanf("%d", &nb_notes);

	notes = (double*)malloc(sizeof(double) * nb_notes);

	for (int i = 0; i < nb_notes; i++)
	{
		printf("Saisir la note #%d: ", i);
		scanf("%lf", &notes[i]);
	}

	for (int i = 0; i < nb_notes; i++)
	{
		moyenne += notes[i];
	}
	moyenne = moyenne / nb_notes; 


	//foo = (int*)malloc(sizeof(int) * 4000000000000000);

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