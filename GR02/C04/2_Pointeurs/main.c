#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>


int main(void)
{

	int ma_variable = 50;
	
	//un_pointeur va stocker l'adresse d'une information de type int
	int* un_pointeur; 

	int** adr_un_pointeur; 


	//L'opérateur & permet d'obtenir l'adresse d'une variable
	printf("L'adresse ou se trouve ma_variable est: %p\n", &ma_variable);

	// (int*)       &(int) ~ (int*)
	un_pointeur = &ma_variable;

	printf("Avant le dereferencement, ma_variable vaut: %d\n", ma_variable);

	*un_pointeur = 100;

	printf("Apres le dereferencement, ma_variable vaut: %d\n", ma_variable);

	printf("La valeur qui se trouve à l'adresse contenue par un_pointeur est: %i\n", *un_pointeur);

	//(int **)          &(int*) ~ (int**)
	adr_un_pointeur = &un_pointeur; 

	**adr_un_pointeur = 150;

	printf("Apres le double dereferencementt, ma_variable vaut: %d\n", ma_variable);

	system("pause");
	return EXIT_SUCCESS;
}