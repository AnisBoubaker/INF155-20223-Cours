#ifndef MOD_CAPTEUR__H_
#define MOD_CAPTEUR__H_

#include "mod_mesure.h"

#define NB_MAX_MESURES_PAR_JOUR 2

typedef struct capteur
{
	char* ville;
	double latitude; 
	double longitude; 
	//Tableau dynamique 2D 
	// de t_mesure
	t_mesure** mesures; 	
	int nb_jours_mesures; //Taille effective du tableau mesures
	int max_jours_mesures; 
} t_capteur;

t_capteur* capteur_init(const char* ville, double latitude, double longitude, int nb_max_jours_mesures);

void capteur_destroy(t_capteur* le_capteur);

void afficher_capteur(const t_capteur* capteur);

#endif