#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>


int main(void)
{

	int ma_variable = 50;

	//L'opérateur & permet d'obtenir l'adresse d'une variable
	printf("L'adresse ou se trouve ma_variable est: %p\n", &ma_variable);


	system("pause");
	return EXIT_SUCCESS;
}