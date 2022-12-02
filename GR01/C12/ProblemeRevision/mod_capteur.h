#ifndef MOD_CAPTEUR__H_
#define MOD_CAPTEUR__H_

#include "mod_mesure.h"

typedef struct capteur
{
	char* ville; 
	double longitude; 
	double latitude; 
	t_mesure mesures[365][10];
	int nb_jours; //La taille effective en lignes du tableau mesures
} t_capteur;

t_capteur* capteur_init(char* ville, double lat, double longi);

void capteur_destroy(t_capteur* capteur);

#endif