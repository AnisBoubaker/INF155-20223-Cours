#include "mod_client.h"


t_client* client_init(const char* nom, const char* prenom)
{
	t_client* nouveau_client; 

	nouveau_client = (t_client*)malloc(sizeof(t_client));
	if (nouveau_client == NULL)
	{
		printf("ERREUR: Plus de mémoire!\n");
		exit(EXIT_FAILURE);
	}

	//Allouer l'espace pour le nom: 
	nouveau_client->nom = (char*)malloc(sizeof(char) * (strlen(nom) + 1));
	if (nouveau_client->nom == NULL)
	{
		free(nouveau_client);
		printf("Erreur: Plus de memoire. ");
		exit(EXIT_FAILURE);
	}
	strcpy(nouveau_client->nom, nom);

	nouveau_client->prenom = (char*)malloc(sizeof(char) * (strlen(prenom) + 1));
	if (nouveau_client->prenom == NULL)
	{
		free(nouveau_client->nom);
		free(nouveau_client);
		printf("Erreur memoire.");
		exit(EXIT_FAILURE);
	}
	strcpy(nouveau_client->prenom, prenom);


	nouveau_client->comptes_bancaires =
		(t_compte_bancaire**)malloc(sizeof(t_compte_bancaire*) * NB_MAX_COMPTES);
	if (nouveau_client->comptes_bancaires == NULL)
	{
		free(nouveau_client->nom);
		free(nouveau_client->prenom);
		free(nouveau_client);
		printf("Erreur memoire.");
		exit(EXIT_FAILURE);
	}


	nouveau_client->nb_comptes = 0;

	return nouveau_client;
}


void client_destroy(t_client* le_client)
{
	free(le_client->nom);
	free(le_client->prenom);
	//Libérer chacun des comptes individuellement avant 
	//de libérer le tableau de de comptes.
	for (int i = 0; i < le_client->nb_comptes; i++)
	{
		//free(le_client->comptes_bancaires[i]);
		t_compte_bancaire_destroy(le_client->comptes_bancaires[i]);
	}
	free(le_client->comptes_bancaires);
	free(le_client);
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
		printf("\tCompte Num: %s\n", le_client->comptes_bancaires[i]->numero_compte);
		printf("\tSolde: %.2lf $\n", le_client->comptes_bancaires[i]->solde_courant);
		printf("\tLimite de decouvert: %.2lf $\n", le_client->comptes_bancaires[i]->limite_decouvert);
		printf("\tTaux d'interets: %.2lf %%\n", le_client->comptes_bancaires[i]->taux_interets);
		printf("\t==============================\n");
	}
}