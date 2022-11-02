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

//typedef struct etudiant t_etudiant; 



//Déclarations des fonctions: 
void etudiant_afficher(t_etudiant* et);

int main(void)
{
	//Eq.: struct etudiant etudiant0
	t_etudiant etudiant0; 
	t_etudiant etudiant1;

	strcpy(etudiant0.nom,  "Valjean");
	strcpy(etudiant0.prenom, "Jean");
	strcpy(etudiant0.code_perm, "VALJ15600510");
	etudiant0.tp1 = 80;
	etudiant0.tp2 = 95;
	etudiant0.intra = 80;
	etudiant0.finale = 85;

	/*printf("Fiche de l'etudiant-e: \n");
	printf("Nom: %s\n", etudiant0.nom);
	printf("Prenom: %s\n", etudiant0.prenom);
	printf("Code Permanent: %s\n", etudiant0.code_perm);
	printf("TP1: %.2lf\n", etudiant0.tp1);
	printf("TP2: %.2lf\n", etudiant0.tp2);
	printf("Intra: %.2lf\n", etudiant0.intra);
	printf("Final: %.2lf\n", etudiant0.finale);*/

	printf("La taille en octets d'un etudiant: %d\n", sizeof(t_etudiant));


	etudiant_afficher(&etudiant0);

	printf("La note de l'examen final de etudiant0: %.2lf\n", etudiant0.finale);


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
	fgets(et->nom, )

	printf("TP1: ");
	scanf("%lf", &(et->tp1));
	printf("TP2: ");
	scanf("%lf", &(et->tp2));
	printf("Intra: ");
	scanf("%lf", &(et->intra));
	printf("Final: ");
	scanf("%lf", &(et->finale));
}