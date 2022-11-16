#ifndef MOD_CLIENT__H_
#define MOD_CLIENT__H_

#include <stdio.h>
#include <stdlib.h>
#include "mod_date.h"
#include "mod_compte_bancaire.h"

#define TAILLE_NUM_ASS_SOCIALE 15
#define TAILLE_MAX_NOM 50
#define NB_MAX_COMPTES 10


typedef struct client
{
	char num_ass_sociale[TAILLE_NUM_ASS_SOCIALE];
	char nom[TAILLE_MAX_NOM];
	char prenom[TAILLE_MAX_NOM];
	t_date date_naissance;
	t_compte_bancaire comptes_bancaires[NB_MAX_COMPTES];
	int nb_comptes;
} t_client;

/*
Fonction constructeur d'un client : Alloue dynamiquement un client
et retourne son adresse. 
*/
t_client* client_init(void);

/*
Description de la fonction afficher...
*/
void client_afficher(const t_client* le_client);


#endif