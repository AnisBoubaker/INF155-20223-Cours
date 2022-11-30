#include "mod_mesure.h"


t_mesure* mesure_init(void)
{
	t_mesure* nouv_mesure;

	nouv_mesure = (t_mesure*)malloc(sizeof(t_mesure));
	if (nouv_mesure == NULL)
	{
		printf("Plus de mémoire\n");
		exit(EXIT_FAILURE);
	}

	nouv_mesure->humidite = 0;
	nouv_mesure->temperature = 0; 
	nouv_mesure->pression = 0; 
	nouv_mesure->jour = DIMANCHE;

	return nouv_mesure;
}

void mesure_destroy(t_mesure* la_mesure)
{
	free(la_mesure);
}