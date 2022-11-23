
#ifndef MOD_CLIENT__H_
#define MOD_CLIENT__H_

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "mod_date.h"
#include "mod_compte.h"

#define TAILLE_MAX_ASS_SOCIALE 15
#define TAILLE_MAX_NOM 50
#define NB_MAX_COMPTES 10

typedef struct client {
	char num_ass_sociale[TAILLE_MAX_ASS_SOCIALE]; //567 787 909
	char* nom;
	char* prenom;
	t_date date_naissance;
	t_compte comptes[NB_MAX_COMPTES];
	int nb_comptes;
} t_client;

/*
Fonction constructeur d'un client: alloue un espace mémoire pour un client
et retourne l'adresse de l'espace alloué. 
*/
t_client* client_init(char* nom, char* prenom);


/*
Description de la fonction
*/
void client_afficher(const t_client* le_client);



#endif