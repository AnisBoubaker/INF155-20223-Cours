#include "mod_capteur.h"

t_capteur* capteur_init(const char* ville, double latitude, double longitude, int nb_max_jours_mesures)
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

	/*
	Créer le tableau 2D de t_mesure, en stockant l'adresse 
	dans nouv_capteur->mesures
	Le nombre de lignes est de nb_max_jours_mesures (reçu en paramètre)
	Le nombre de colonnes est de NB_MAX_MESURES_PAR_JOUR
	*/


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