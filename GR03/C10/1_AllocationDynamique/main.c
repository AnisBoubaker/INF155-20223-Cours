

#include <stdio.h>
#include <stdlib.h>


int main(void)
{
	int a; 
	int* adresse_mem_allouee;
	int* foo = NULL;
	int taille; 

	printf("La variable a occupe %d octets dans la pile (Stack)\n", sizeof(int));

	//malloc: Allouer un espace d'une taille donn�e en octets
	//retourne une adresse g�n�rique de type void*
	adresse_mem_allouee = (int*)malloc(sizeof(int));

	*adresse_mem_allouee = 50;

	printf("Contenu de la memoire allouee dynamiquement: %d\n", *adresse_mem_allouee);

	printf("Quelle taille? ");
	scanf("%d", &taille);

	foo = (int*)malloc(sizeof(int) * taille);
	if (foo == NULL)
	{
		printf("ERREUR: Plus de memoire!\n");
		exit(EXIT_FAILURE);
	}
	
	//*(foo + 0) = 10; 
	foo[0] = 10;
	//*(foo + 1) = 25;
	foo[1] = 25;
	//*(foo + 2) = 32;
	foo[2] = 32;
	
	

	/*
	RAPPEL: 
	int tab[10];
		tab[2] = 50; 
	Equivalent � �crire: 
		*(tab+2) = 50
	*/

	//Lib�re l'espace m�moire allou� avec malloc
	//Dont l'adresse est stock�e dans foo.
	free(foo);

	foo = (int*)malloc(sizeof(int) * 10);


	system("pause");
	return EXIT_SUCCESS;

}