
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int var_a; 
	int var_b;
	int var_copie; 

	printf("Veuillez saisir la valeur de var_a:");
	scanf("%d", &var_a);

	printf("Veuillez saisir la valeur de var_b:");
	scanf("%d", &var_b);

	//Si l'utlisateur a saisi 10 pour var_a et 20 pour var_b, 
	//le programme affiche: 
	// Vous avez saisir 20 pour var_a et 10 pour var_b.
	/*DEBUT*/
	var_copie = var_a; 
	var_a = var_b;
	var_b = var_copie; 
	/*FIN*/

	printf("Vous avez saisi %d pour var_a et %d pour var_b\n", var_a, var_b);

	system("pause");
	return EXIT_SUCCESS;
}