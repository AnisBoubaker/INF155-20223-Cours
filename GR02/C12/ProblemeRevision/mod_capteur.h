#ifndef MOD_CAPTEUR__H_
#define MOD_CAPTEUR__H_

#include "mod_mesure.h"

typedef struct capteur
{
	char* ville; 
	double latitude; 
	double longitude; 
	t_mesure mesures[365][10];
} t_capteur;


t_capteur* capteur_init(char* ville, double lat, double longi);


#endif