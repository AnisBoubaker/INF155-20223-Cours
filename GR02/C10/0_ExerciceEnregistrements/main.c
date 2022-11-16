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


#define TAILLE_MAX_NUM_COMPTE 20

typedef struct compte {
	char numero[TAILLE_MAX_NUM_COMPTE]; 
	double solde_courant; 
	double limite_decouvert; 
	double taux_interet; 
} t_compte;

/*
- Le client d'une banque est identifié par son numéro d'assurance sociale.
  Pour chaque client, nous devons connaitre son nom et prénom ainsi que sa
  date de naissance.
- Les clients ont également des comptes dans la banque. Chaque client peut
  détenir plusieurs comptes bancaires.
*/
#define TAILLE_MAX_ASS_SOCIALE 15
#define TAILLE_MAX_NOM 50
#define NB_MAX_COMPTES 10
typedef struct date {
	int jour; 
	int mois;
	int annee;
} t_date;

typedef struct client {
	char num_ass_sociale[15]; //567 787 909
	char nom[TAILLE_MAX_NOM];
	char prenom[TAILLE_MAX_NOM];
	t_date date_naissance;
	t_compte comptes[NB_MAX_COMPTES];
	int nb_comptes;
	//Date de naissance, options: 
	//Option1: Tableau d'entiers
	//int date_naissance[3];
	//Option2: 3 champs: jour, mois et année
	//int jour_naissance;
	//int mois_naissance; 
	//int annee_naissance; 
} t_client;


void client_afficher(const t_client* le_client);

int main(void)
{
	int a;
	t_client un_client;

	strcpy(un_client.num_ass_sociale,  "234 876 456");
	strcpy(un_client.prenom, "Jean");
	strcpy(un_client.nom, "Valjean");
	//5-2-1564
	un_client.date_naissance.jour = 5;
	un_client.date_naissance.mois = 2;
	un_client.date_naissance.annee = 1564;

	un_client.nb_comptes = 0;

	strcpy(un_client.comptes[0].numero, "AB4567");
	un_client.comptes[0].solde_courant = 5000; 
	un_client.comptes[0].limite_decouvert = 1500;
	un_client.comptes[0].taux_interet = 1.5;

	un_client.nb_comptes++;

	strcpy(un_client.comptes[1].numero, "FC8765");
	un_client.comptes[1].solde_courant = 1500;
	un_client.comptes[1].limite_decouvert = 0;
	un_client.comptes[1].taux_interet = 0.3;

	un_client.nb_comptes++;


	client_afficher(&un_client);


	system("pause");
	return EXIT_SUCCESS;
}

void client_afficher(const t_client* le_client)
{
	printf("FICHE DU CLIENT: \n------------------\n");
	printf("Num. Assurance sociale: %s\n", le_client->num_ass_sociale);
	printf("Nom et prenom: %s, %s\n", le_client->nom, le_client->prenom);
	printf("Date de naissance: %d/%d/%d\n",
		le_client->date_naissance.jour,
		le_client->date_naissance.mois,
		le_client->date_naissance.annee
	);
	printf("Liste des comptes: \n");
	for (int i = 0; i < le_client->nb_comptes ; i++)
	{
		printf("\tNumero: %s\n", le_client->comptes[i].numero);
		printf("\tSolde: %.2lf\n", le_client->comptes[i].solde_courant);
		printf("\tLimite decouvert: %.2lf\n", le_client->comptes[i].limite_decouvert);
		printf("\tTaux d'interets: %.2lf\n", le_client->comptes[i].taux_interet);
		printf("\t-------------------------\n");
	}
}