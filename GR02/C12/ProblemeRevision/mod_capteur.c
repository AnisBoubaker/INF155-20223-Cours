#include "mod_capteur.h"

t_capteur* capteur_init(char* ville, double lat, double longi)
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

	nouv_capteur->latitude = lat;
	nouv_capteur->longitude = longi;
	strcpy(nouv_capteur->ville,  ville);

	return nouv_capteur;
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