
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int ma_variable = 25;
	int* adresse;
	int** adr_de_adresse; 

	printf("ma_variable vaut: %d\n", ma_variable);

	printf("L'adresse ou se trouve ma_variable: %p\n", &ma_variable);

	adresse = &ma_variable;

	printf("La variable adresse contient: %p\n", adresse);

	printf("Le contenu se trouvant au bout du pointeur: %d\n", *adresse);

	*adresse = 50; 

	printf("ma_variable vaut: %d\n", ma_variable);

	adr_de_adresse = &adresse;

	printf("%p \n", *adr_de_adresse);

	printf("%d \n", **adr_de_adresse);



	system("pause");
	return EXIT_SUCCESS;
}