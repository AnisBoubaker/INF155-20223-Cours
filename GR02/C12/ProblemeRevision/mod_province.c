#include "mod_province.h"

t_province* province_init(char* nom, int nb_max_capteurs)
{
	t_province* nouv_prov;

	nouv_prov = (t_province*)malloc(sizeof(t_province));
	if (nouv_prov == NULL)
	{
		exit(EXIT_FAILURE);
	}

	nouv_prov->nom = (char*)malloc(sizeof(char) * (strlen(nom) + 1));
	if (nouv_prov->nom == NULL)
	{
		free(nouv_prov);
		exit(EXIT_FAILURE);
	}
	
	nouv_prov->capteurs = (t_capteur*)malloc(sizeof(t_capteur)*nb_max_capteurs);


	strcpy(nouv_prov->nom, nom);


	return nouv_prov;
}