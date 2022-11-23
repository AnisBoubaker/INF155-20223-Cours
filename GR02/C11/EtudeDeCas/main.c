#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "mod_client.h"

int main(void)
{
	t_client* liste_clients[1000];

	liste_clients[0] = client_init("Valjean", "Jean");

	strcpy(liste_clients[0]->num_ass_sociale, "234 876 456");
	
	//5-2-1564
	liste_clients[0]->date_naissance.jour = 5;
	liste_clients[0]->date_naissance.mois = 2;
	liste_clients[0]->date_naissance.annee = 1564;

	liste_clients[0]->nb_comptes = 0;

	strcpy(liste_clients[0]->comptes[0].numero, "AB4567");
	liste_clients[0]->comptes[0].solde_courant = 5000;
	liste_clients[0]->comptes[0].limite_decouvert = 1500;
	liste_clients[0]->comptes[0].taux_interet = 1.5;

	liste_clients[0]->nb_comptes++;

	strcpy(liste_clients[0]->comptes[1].numero, "FC8765");
	liste_clients[0]->comptes[1].solde_courant = 1500;
	liste_clients[0]->comptes[1].limite_decouvert = 0;
	liste_clients[0]->comptes[1].taux_interet = 0.3;

	liste_clients[0]->nb_comptes++;


	client_afficher(liste_clients[0]);


	client_destroy(liste_clients[0]);


	system("pause");
	return EXIT_SUCCESS;
}

