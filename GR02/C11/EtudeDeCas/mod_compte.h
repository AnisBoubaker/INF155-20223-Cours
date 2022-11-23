#ifndef MOD_COMPTE__H_
#define MOD_COMPTE__H_

#define TAILLE_MAX_NUM_COMPTE 20

typedef struct compte {
	char numero[TAILLE_MAX_NUM_COMPTE];
	double solde_courant;
	double limite_decouvert;
	double taux_interet;
} t_compte;


#endif