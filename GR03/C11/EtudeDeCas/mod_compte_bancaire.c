#include "mod_compte_bancaire.h"

t_compte_bancaire* t_compte_bancaire_init(void)
{
	t_compte_bancaire* nouv_compte;

	nouv_compte = (t_compte_bancaire*)malloc(sizeof(t_compte_bancaire));
	if (nouv_compte == NULL)
	{
		printf("Erreur: Plus de memoire.\n");
		exit(EXIT_FAILURE);
	}

	nouv_compte->solde_courant = 0;
	nouv_compte->taux_interets = 0;
	nouv_compte->limite_decouvert = 0;
	//Deux façons d'initialiser le numero de compte à la chaine
	//vide.
	//strcpy(nouv_compte->numero_compte, "");
	nouv_compte->numero_compte[0] = '\0';

	return nouv_compte;
}


void t_compte_bancaire_destroy(t_compte_bancaire* le_compte)
{
	free(le_compte);
}