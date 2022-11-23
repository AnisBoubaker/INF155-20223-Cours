#ifndef MOD_CLIENT__H_
#define MOD_CLIENT__H_

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "mod_date.h"
#include "mod_compte_bancaire.h"

#define TAILLE_NUM_ASS_SOCIALE 15
#define TAILLE_MAX_NOM 50
#define NB_MAX_COMPTES 10


typedef struct client
{
	char num_ass_sociale[TAILLE_NUM_ASS_SOCIALE];
	char* nom;
	char* prenom;
	t_date date_naissance;
	t_compte_bancaire comptes_bancaires[NB_MAX_COMPTES];
	int nb_comptes;
} t_client;

/*
Fonction constructeur d'un client : Alloue dynamiquement un client
et retourne son adresse. 
*/
t_client* client_init(const char* nom, const char* prenom);

/*
Description de la fonction afficher...
*/
void client_afficher(const t_client* le_client);


#endif