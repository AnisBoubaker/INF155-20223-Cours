#include "mod_compte.h"


t_compte* compte_init(void)
{
	t_compte* nouv_compte;


	nouv_compte = (t_compte*)malloc(sizeof(t_compte));
	if (nouv_compte == NULL)
	{
		printf("Erreur: Plus de mémoire!\n");
		exit(EXIT_FAILURE);
	}

	return nouv_compte;

}