#ifndef MOD_PROVINCE__H_
#define MOD_PROVINCE__H_

#include "mod_capteur.h"

typedef struct province
{
	char* nom; 
	t_capteur** capteurs; //Tab 1D de t_capteur*
	/*
	Tableau dynamique: Il faut ajouter des champs pour la taille
	effective et la taille maximale du tableau.
	*/
	int nb_capteurs; //Taille effective du tableau capteurs
	int nb_max_capteurs; //Taille maximale du tableau de capteurs 
} t_province;


t_province* province_init(char* nom, int nb_max_capteurs);


#endif