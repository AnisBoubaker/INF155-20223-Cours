#include "mod_capteur.h"

t_capteur* capteur_init(char* ville, double lat, double longi, int nb_jours_max)
{
	t_capteur* nouv_capteur; 

	nouv_capteur = (t_capteur*)malloc(sizeof(t_capteur));
	if (nouv_capteur == NULL)
	{
		exit(EXIT_FAILURE);
	}

	nouv_capteur->ville = (char*)malloc(sizeof(char) * (strlen(ville) + 1));
	if (nouv_capteur->ville == NULL)
	{
		free(nouv_capteur);
		exit(EXIT_FAILURE);
	}

	/*
	ALLOUER LE TAB 2D DES T_MESURE
	Le nombre de lignes est défini par int nb_jours_max
	Le nombre de colonnes est défini par NB_MESURES_PAR_JOUR
	*/


	nouv_capteur->latitude = lat;
	nouv_capteur->longitude = longi;
	strcpy(nouv_capteur->ville,  ville);

	return nouv_capteur;
}

void capteur_destroy(t_capteur* le_capteur)
{
	free(le_capteur->ville);
	free(le_capteur);
}


//
//void* mon_malloc(taille)
//{
//	void* adresse = malloc(taille);
//
//	if (adresse == NULL)
//	{
//		exit(EXIT_FAILURE);
//	}
//	return adresse; 
//}