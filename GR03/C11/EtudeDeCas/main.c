#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "mod_client.h"


int main(void)
{
	t_client* un_client;


	un_client = client_init();
	

	//Affecte la valeur "345 567 876" à la chaine de caractères num_ass_sociale
	strcpy(un_client->num_ass_sociale, "345 567 876");
	strcpy(un_client->nom, "Valjean");
	strcpy(un_client->prenom, "Jean");
	//Date de naissance: 20-10-1567
	un_client->date_naissance.jour = 20;
	un_client->date_naissance.mois = 10;
	un_client->date_naissance.annee = 1567;
	un_client->nb_comptes = 0;

	strcpy(un_client->comptes_bancaires[0].numero_compte, "AB3456");
	un_client->comptes_bancaires[0].solde_courant = 5600;
	un_client->comptes_bancaires[0].taux_interets = 1.3;
	un_client->comptes_bancaires[0].limite_decouvert = 2000;
	un_client->nb_comptes++;

	strcpy(un_client->comptes_bancaires[1].numero_compte, "AB3434");
	un_client->comptes_bancaires[1].solde_courant = 155.50;
	un_client->comptes_bancaires[1].taux_interets = 0.6;
	un_client->comptes_bancaires[1].limite_decouvert = 0;
	un_client->nb_comptes++;



	client_afficher(un_client);

	system("pause");
	return EXIT_SUCCESS;
}

