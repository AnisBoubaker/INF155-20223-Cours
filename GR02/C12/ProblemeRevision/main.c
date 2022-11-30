#include <stdio.h>
#include <stdlib.h>
#include "mod_mesure.h"
#include "mod_capteur.h"
#include "mod_province.h"

int main(void)
{
	t_mesure ma_mesure; 

	ma_mesure.jour = VENDREDI;

	printf("La valeur numerique associee: %d\n", ma_mesure.jour);

	t_capteur* mon_capteur; 

	mon_capteur = capteur_init("Montreal", 45.897, 42.876);


	t_province* ma_prov1; 
	t_province* ma_prov2;

	ma_prov1 = province_init("Quebec", 100);

	ma_prov2 = province_init("Ontario", 10);



	system("pause");
	return 0;

}