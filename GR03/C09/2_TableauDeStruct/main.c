#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
- On définit le type struct etudiant (qui contient le nom, prenom, tpq, etc.)
- Dans la même opération on renomme struct etudiant en t_etudiant
*/
#define TAILLE_MAX_NOM 100
#define TAILLE_MAX_CODE_PERM 13

#define FFLUSH() do{} while (getchar()!='\n')

typedef struct etudiant
{
	char nom[TAILLE_MAX_NOM];
	char prenom[TAILLE_MAX_NOM];
	char code_perm[TAILLE_MAX_CODE_PERM];
	double tp1;
	double tp2;
	double intra;
	double finale;
} t_etudiant;


//Déclarations des fonctions: 
void etudiant_afficher(t_etudiant* et);
void etudiant_saisir(t_etudiant* et);
double etudiant_moyenne_tp1(const t_etudiant classe[], int nb_etudiants);

int main(void)
{
	t_etudiant inf155_gr3[30];
	int nb_etudiants; 

	printf("Combien d'etudiant-e-s? ");
	scanf("%d", &nb_etudiants);
	FFLUSH();

	for (int i = 0; i < nb_etudiants; i++)
	{
		printf("*** SAISIE DE L'ETUDIANT %d ****\n", i);
		etudiant_saisir(&inf155_gr3[i]);
	}

	for (int i = 0; i < nb_etudiants; i++)
	{
		printf("*** FICHE DE L'ETUDIANT %d ****\n", i);
		etudiant_afficher(&inf155_gr3[i]);
	}

	printf("La moyenne du TP1 de la classe: %lf\n",
		etudiant_moyenne_tp1(inf155_gr3, nb_etudiants));

	system("pause");
	return EXIT_SUCCESS;
}

void etudiant_afficher(const t_etudiant* et)
{
	printf("Fiche de l'etudiant-e: \n");
	printf("Nom: %s\n", et->nom);
	printf("Prenom: %s\n", et->prenom);
	printf("Code Permanent: %s\n", et->code_perm);
	printf("TP1: %.2lf\n", et->tp1);
	printf("TP2: %.2lf\n", (*et).tp2);
	printf("Intra: %.2lf\n", (*et).intra);
	printf("Final: %.2lf\n", (*et).finale);
	//Plus possible car et est const
	//(*et).finale = 0;
}

/*
Écrire la fonction etudiant_saisir qui reçoit un
etudiant et qui demande à l'usager de saisir chacun de ses champs

void etudiant_saisir(t_etudiant* et);

*/

void etudiant_saisir(t_etudiant* et)
{
	printf("Nom: ");
	fgets(et->nom, TAILLE_MAX_NOM, stdin);
	et->nom[strlen(et->nom) - 1] = '\0';

	printf("Prenom: ");
	fgets(et->prenom, TAILLE_MAX_NOM, stdin);
	et->prenom[strlen(et->prenom) - 1] = '\0';

	printf("Code permanent: ");
	fgets(et->code_perm, TAILLE_MAX_CODE_PERM, stdin);
	et->code_perm[strlen(et->code_perm) - 1] = '\0';

	printf("TP1: ");
	scanf("%lf", &(et->tp1));
	FFLUSH();
	printf("TP2: ");
	scanf("%lf", &(et->tp2));
	FFLUSH();
	printf("Intra: ");
	scanf("%lf", &(et->intra));
	FFLUSH();
	printf("Final: ");
	scanf("%lf", &(et->finale));
	FFLUSH();
}


double etudiant_moyenne_tp1(const t_etudiant classe[], int nb_etudiants)
{
	double somme = 0; 

	for (int i = 0; i < nb_etudiants; i++)
	{
		somme += classe[i].tp1;
	}
	return somme / nb_etudiants; 
}