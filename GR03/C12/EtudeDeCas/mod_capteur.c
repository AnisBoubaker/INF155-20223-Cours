#include "mod_capteur.h"

t_capteur* capteur_init(const char* ville, double latitude, double longitude)
{
	t_capteur* nouv_capteur; 

	nouv_capteur = (t_capteur*)malloc(sizeof(t_capteur));
	if (nouv_capteur == NULL)
	{
		exit(EXIT_FAILURE);
	}

	nouv_capteur->ville = (char*)malloc(sizeof(char)*(strlen(ville)+1));
	if (nouv_capteur->ville == NULL)
	{
		free(nouv_capteur);
		exit(EXIT_FAILURE);
	}


	nouv_capteur->latitude = latitude;
	nouv_capteur->longitude = longitude;
	strcpy(nouv_capteur->ville, ville);
	nouv_capteur->nb_jours_mesures = 0;

	return nouv_capteur;
}

void capteur_destroy(t_capteur* le_capteur)
{
	free(le_capteur->ville);
	free(le_capteur);
}