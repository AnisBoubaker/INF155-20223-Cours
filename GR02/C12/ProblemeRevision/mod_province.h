#ifndef MOD_PROVINCE__H_
#define MOD_PROVINCE__H_

#include "mod_capteur.h"

typedef struct province
{
	char* nom; 
	t_capteur* capteurs; //Tab 1D de t_capteur
} t_province;


t_province* province_init(char* nom, int nb_max_capteurs);


#endif