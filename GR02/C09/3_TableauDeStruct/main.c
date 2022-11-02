
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define TAILLE_MAX_NOM 100
#define TAILLE_MAX_CPERM 15

#define FFLUSH() do{} while (getchar()!='\n')

//On définit le type etudiant
typedef struct etudiant
{
	char nom[TAILLE_MAX_NOM];
	char prenom[TAILLE_MAX_NOM];
	char code_perm[TAILLE_MAX_CPERM];
	double tp1;
	double tp2;
	double intra;
	double finale;
} t_etudiant;

//typedef struct etudiant t_etudiant;


/*
Déclarations de fonctions
*/
void etudiant_afficher(t_etudiant* et);
void etudiant_saisir(t_etudiant* et);

int main(void)
{
	t_etudiant inf155_gr2[50];
	int nb_etudiants; 

	printf("La taille du tableau: %d\n", sizeof(inf155_gr2));

	printf("Combien d'etudiants: ");
	scanf("%d", &nb_etudiants);
	FFLUSH();

	for (int i = 0; i < nb_etudiants; i++)
	{
		printf("Saisie de l'etudiant %d: \n", i);
		etudiant_saisir(&inf155_gr2[i]);
	}

	for (int i = 0; i < nb_etudiants; i++)
	{
		printf("Fiche de l'etudiant %d: \n", i);
		etudiant_afficher(&inf155_gr2[i]);
	}




	system("pause");
	return EXIT_SUCCESS;
}


void etudiant_afficher(const t_etudiant* et)
{
	printf("Fiche de l'etudiant-e:\n");
	printf("Nom: %s\n", et->nom);
	printf("Prenom: %s\n", et->prenom);
	printf("Code Permanent: %s\n", et->code_perm);
	printf("TP1: %.2lf\n", et->tp1);
	printf("TP2: %.2lf\n", et->tp2);
	printf("Intra: %.2lf\n", (*et).intra);
	printf("Final: %.2lf\n", (*et).finale);

	//(*et).finale = 0; 
}

/*
Écrire la fonction etudiant_saisir qui demande à l'usager de saisir
les informations d'un-e étudiant-e et qui stocke les informations saisies dans
la référence vers'l'étudiant reçue en paramètre.

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
	fgets(et->code_perm, TAILLE_MAX_CPERM, stdin);
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