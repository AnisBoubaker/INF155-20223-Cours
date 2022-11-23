#ifndef MOD_COMPTE_BANCAIRE__H_
#define MOD_COMPTE_BANCAIRE__H_

#define TAILLE_NUM_COMPTE 20
#include <stdlib.h>

typedef struct compte_bancaire
{
	char numero_compte[TAILLE_NUM_COMPTE];
	double solde_courant;
	double limite_decouvert;
	double taux_interets;
} t_compte_bancaire;

t_compte_bancaire* t_compte_bancaire_init(void);

#endif