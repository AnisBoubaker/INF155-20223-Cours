#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "mod_client.h"


int main(void)
{
	
	t_client* liste_clients[100];

	liste_clients[0] = client_init("Valjean", "Jean");

	//Affecte la valeur "345 567 876" à la chaine de caractères num_ass_sociale
	strcpy(liste_clients[0]->num_ass_sociale, "345 567 876");
	//strcpy(liste_clients[0]->nom, "Valjean");
	//strcpy(liste_clients[0]->prenom, "Jean");
	//Date de naissance: 20-10-1567
	liste_clients[0]->date_naissance.jour = 20;
	liste_clients[0]->date_naissance.mois = 10;
	liste_clients[0]->date_naissance.annee = 1567;
	liste_clients[0]->nb_comptes = 0;

	//On commence par créer le compte avec init, puis on met
	//son adresse dans le tableau de comptes bancaires du client.
	client_ajouter_compte(liste_clients[0]);
	strcpy(liste_clients[0]->comptes_bancaires[0]->numero_compte, "AB3456");
	liste_clients[0]->comptes_bancaires[0]->solde_courant = 5600;
	liste_clients[0]->comptes_bancaires[0]->taux_interets = 1.3;
	liste_clients[0]->comptes_bancaires[0]->limite_decouvert = 2000;
	//liste_clients[0]->nb_comptes++;

	client_ajouter_compte(liste_clients[0]);
	strcpy(liste_clients[0]->comptes_bancaires[1]->numero_compte, "AB3434");
	liste_clients[0]->comptes_bancaires[1]->solde_courant = 155.50;
	liste_clients[0]->comptes_bancaires[1]->taux_interets = 0.6;
	liste_clients[0]->comptes_bancaires[1]->limite_decouvert = 0;
	//liste_clients[0]->nb_comptes++;

	client_afficher(liste_clients[0]);

	client_destroy(liste_clients[0]);

	system("pause");
	return EXIT_SUCCESS;
}

