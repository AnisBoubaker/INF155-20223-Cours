/*
Créer les structures de données suivantes à l'aide d'enregistrements (struct)
- Un compte bancaire est identifié par un numéro (alphanumérique). Il a un 
  solde courant ainsi qu'une limite de découvert. De plus, chaque compte 
  a un taux d'intérêts permettant le calcul des intérêts annuellement. 
- Le client d'une banque est identifié par son numéro d'assurance sociale.
  Pour chaque client, nous devons connaitre son nom et prénom ainsi que sa
  date de naissance.
- Les clients ont également des comptes dans la banque. Chaque client peut
  détenir plusieurs comptes bancaires.
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>


#define TAILLE_NUM_COMPTE 20

typedef struct compte_bancaire
{
	char numero_compte[TAILLE_NUM_COMPTE];
	double solde_courant;
	double limite_decouvert;
	double taux_interets;
} t_compte_bancaire;

/*
- Le client d'une banque est identifié par son numéro d'assurance sociale.
  Pour chaque client, nous devons connaitre son nom et prénom ainsi que sa
  date de naissance.
  - Les clients ont également des comptes dans la banque. Chaque client peut
  détenir plusieurs comptes bancaires.
*/

typedef struct date
{
	int jour;
	int mois; 
	int annee;
} t_date;

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


void client_afficher(const t_client* le_client);


int main(void)
{
	t_client un_client;

	//Affecte la valeur "345 567 876" à la chaine de caractères num_ass_sociale
	strcpy(un_client.num_ass_sociale , "345 567 876");
	strcpy(un_client.nom, "Valjean");
	strcpy(un_client.prenom, "Jean");
	//Date de naissance: 20-10-1567
	un_client.date_naissance.jour = 20;
	un_client.date_naissance.mois = 10;
	un_client.date_naissance.annee = 1567;
	un_client.nb_comptes = 0;

	strcpy(un_client.comptes_bancaires[0].numero_compte,  "AB3456");
	un_client.comptes_bancaires[0].solde_courant = 5600;
	un_client.comptes_bancaires[0].taux_interets = 1.3;
	un_client.comptes_bancaires[0].limite_decouvert = 2000;
	un_client.nb_comptes++;

	strcpy(un_client.comptes_bancaires[1].numero_compte, "AB3434");
	un_client.comptes_bancaires[1].solde_courant = 155.50;
	un_client.comptes_bancaires[1].taux_interets = 0.6;
	un_client.comptes_bancaires[1].limite_decouvert = 0;
	un_client.nb_comptes++;



	client_afficher(&un_client);

	system("pause");
	return EXIT_SUCCESS;
}

void client_afficher(const t_client* le_client)
{
	printf("Fiche du client: \n");
	printf("Nom et prenom: %s, %s\n", (*le_client).nom, le_client->prenom);
	printf("Num assurance sociale: %s\n", le_client->num_ass_sociale);
	printf("Date de naissance: %d/%d/%d\n", le_client->date_naissance.jour,
		le_client->date_naissance.mois,
		le_client->date_naissance.annee
	);
	printf("Liste des comptes bancaires: \n");
	for (int i = 0; i < le_client->nb_comptes; i++)
	{
		printf("\tCompte Num: %s\n", le_client->comptes_bancaires[i].numero_compte);
		printf("\tSolde: %.2lf $\n", le_client->comptes_bancaires[i].solde_courant);
		printf("\tLimite de decouvert: %.2lf $\n", le_client->comptes_bancaires[i].limite_decouvert);
		printf("\tTaux d'interets: %.2lf %%\n", le_client->comptes_bancaires[i].taux_interets);
		printf("\t==============================\n");
	}
}