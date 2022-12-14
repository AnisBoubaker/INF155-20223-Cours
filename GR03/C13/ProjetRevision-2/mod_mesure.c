#include "mod_mesure.h"

t_mesure* mesure_init(void)
{
	t_mesure* nouv_mesure; 

	nouv_mesure = (t_mesure*)malloc(sizeof(t_mesure));
	if (nouv_mesure == NULL)
	{
		printf("Plus de memoire.");
		exit(EXIT_FAILURE);
	}

	nouv_mesure->humidite = 0; 
	nouv_mesure->pression = 0;
	nouv_mesure->temperature = 0;
	nouv_mesure->jour = 0;

	return nouv_mesure;
}

void mesure_destroy(t_mesure* la_mesure)
{
	free(la_mesure);
}

void afficher_jour(e_jour_semaine jour)
{
	switch (jour)
	{
	case DIMANCHE:
		printf("Dimanche");
		break;
	case LUNDI:
		printf("Lundi");
		break;
	case MARDI: 
		printf("Mardi");
		break;
	case MERCREDI:
		printf("Mercredi");
		break;
	case JEUDI:
		printf("Jeudi");
		break;
	case VENDREDI:
		printf("Vendredi");
		break;
	case SAMEDI:
		printf("Samedi");
		break;
	default:
		printf("ERREUR: Jour incorrect\n\n");
	}
}