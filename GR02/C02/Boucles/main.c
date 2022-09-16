
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int compteur;

	compteur = 0; 
	while ( compteur < 20 )
	{
		printf("Je suis fatigant!\n");
		compteur++;
	}

	printf("La valeur de compteur est: %d\n", compteur);

	system("pause");
	return EXIT_SUCCESS;
}