#ifndef MOD_CAPTEUR__H_
#define MOD_CAPTEUR__H_

#include "mod_mesure.h"


#define NB_MESURES_PAR_JOUR 10

typedef struct capteur
{
	char* ville; 
	double latitude; 
	double longitude; 
	//t_mesure mesures[365][10]; //Tableau statique 2D de t_mesure
	t_mesure** mesures; //Tableau dynamique 2D de t_mesure

	/*
	Tableau statique: Il faut ajouter un champs pour la taille 
	effective. (la taille maximale est connue puisque c'est statique)
	*/
	int nb_jours_mesure; //Taille effective sur les lignes du tableau mesures.
	//On suppose que on utilise toutes les colinnes d'une ligne donnée
} t_capteur;


t_capteur* capteur_init(char* ville, double lat, double longi, int nb_jours_max);

void capteur_destroy(t_capteur* le_capteur);


#endif