
#include "mod_client.h"


t_client* client_init(void)
{
	t_client* nouveau_client;

	nouveau_client = (t_client*)malloc(sizeof(t_client));
	if (nouveau_client == NULL)
	{
		printf("ERREUR: Plus de mémoire.\n");
		exit(EXIT_FAILURE);
	}

	nouveau_client->nb_comptes = 0;

	return nouveau_client;
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
	for (int i = 0; i < le_client->nb_comptes; i++)
	{
		printf("\tNumero: %s\n", le_client->comptes[i].numero);
		printf("\tSolde: %.2lf\n", le_client->comptes[i].solde_courant);
		printf("\tLimite decouvert: %.2lf\n", le_client->comptes[i].limite_decouvert);
		printf("\tTaux d'interets: %.2lf\n", le_client->comptes[i].taux_interet);
		printf("\t-------------------------\n");
	}
}