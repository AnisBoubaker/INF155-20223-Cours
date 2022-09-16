
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int saisie;

	printf("Saisir une valeur: ");
	scanf("%d", &saisie);

	/*
	Que devraient être message1 et message2? 
	*/
	if (saisie) // if(saisie != 0)
	{
		printf("Vous avez saisi une valeur non-nulle.\n");
	}
	else
	{
		printf("Vous avez saisi une valeur nulle.\n");
	}



	/*int saisie;

	printf("Saisir une valeur: ");
	scanf("%d", &saisie);

	//Est-ce que la valeur fait partie de l'intervalle [-30..-10]
	if (-30 < saisie && saisie < -10)
	{
		printf("La valeur saisie %d est dans l'intervalle [-30,-10].\n", saisie);
	}
	else
	{
		printf("La valeur saisie %d n'est pas dans l'intervalle [-30,-10].\n", saisie);
	}*/

	system("pause");
	return EXIT_SUCCESS;
}