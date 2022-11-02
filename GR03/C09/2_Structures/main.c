#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct etudiant 
{
	char nom[100]; 
	char prenom[100];
	char code_perm[100];
	double tp1; 
	double tp2; 
	double intra;
	double finale; 
};


int main(void)
{

	struct etudiant etudiant0; 

	strcpy(etudiant0.nom,  "Valjean");
	strcpy(etudiant0.prenom, "Jean");
	strcpy(etudiant0.code_perm, "VALJ15600510");
	etudiant0.tp1 = 80;
	etudiant0.tp2 = 95;
	etudiant0.intra = 80;
	etudiant0.finale = 85;

	printf("Fiche de l'etudiant-e: \n");
	printf("Nom: %s\n", etudiant0.nom);
	printf("Prenom: %s\n", etudiant0.prenom);
	printf("Code Permanent: %s\n", etudiant0.code_perm);
	printf("TP1: %.2lf\n", etudiant0.tp1);
	printf("TP2: %.2lf\n", etudiant0.tp2);
	printf("Intra: %.2lf\n", etudiant0.intra);
	printf("Final: %.2lf\n", etudiant0.finale);


	system("pause");
	return EXIT_SUCCESS;
}