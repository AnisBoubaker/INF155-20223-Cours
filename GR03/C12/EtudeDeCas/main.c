#include <stdio.h>
#include <stdlib.h>

#include "mod_mesure.h"

int main(void)
{
	t_mesure une_mesure;

	une_mesure.jour = MARDI;

	printf("Le joure de la semaine : %d\n", une_mesure.jour);

	system("pause");
	return EXIT_SUCCESS;
}