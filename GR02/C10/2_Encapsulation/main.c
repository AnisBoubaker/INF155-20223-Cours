#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "mod_client.h"

int main(void)
{
	int a;
	t_client* un_client;


	un_client = client_init();

	strcpy(un_client->num_ass_sociale, "234 876 456");
	strcpy(un_client->prenom, "Jean");
	strcpy(un_client->nom, "Valjean");
	//5-2-1564
	un_client->date_naissance.jour = 5;
	un_client->date_naissance.mois = 2;
	un_client->date_naissance.annee = 1564;

	un_client->nb_comptes = 0;

	strcpy(un_client->comptes[0].numero, "AB4567");
	un_client->comptes[0].solde_courant = 5000;
	un_client->comptes[0].limite_decouvert = 1500;
	un_client->comptes[0].taux_interet = 1.5;

	un_client->nb_comptes++;

	strcpy(un_client->comptes[1].numero, "FC8765");
	un_client->comptes[1].solde_courant = 1500;
	un_client->comptes[1].limite_decouvert = 0;
	un_client->comptes[1].taux_interet = 0.3;

	un_client->nb_comptes++;


	client_afficher(un_client);


	system("pause");
	return EXIT_SUCCESS;
}

