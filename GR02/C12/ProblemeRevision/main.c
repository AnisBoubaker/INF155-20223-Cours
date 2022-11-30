#include <stdio.h>
#include <stdlib.h>
#include "mod_mesure.h"
#include "mod_capteur.h"


int main(void)
{
	t_mesure ma_mesure; 

	ma_mesure.jour = VENDREDI;

	printf("La valeur numerique associee: %d\n", ma_mesure.jour);

	t_capteur* mon_capteur; 

	mon_capteur = capteur_init("Montreal", 45.897, 42.876);


	system("pause");
	return 0;

}