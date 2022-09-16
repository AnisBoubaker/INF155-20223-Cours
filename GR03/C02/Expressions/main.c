
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main(void)
{

	int x; 
	int y; 

	int resultat;

	x = 11; 
	y = 3;


	resultat = x++ / y;

	printf("La variable resultat contient la valeur: %d\n", resultat);
	printf("La variable x contient la valeur: %d\n", x);

	// 4, 3, 



	/*
	int var_a; 
	int var_b; 
	double var_c; 

	var_a = 10; 
	var_b = 3; 

	var_c = (double)var_a / var_b;

	printf("Le resultat (var_c) est: %.3lf\n", var_c);
	*/

	system("pause");
	return EXIT_SUCCESS;
}