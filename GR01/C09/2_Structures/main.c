

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define TAILLE_MAX_NOM 100
#define TAILLE_MAX_CPERM 13

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

int main(void)
{
	t_etudiant marie;
	t_etudiant jean; 
	struct etudiant marc;

	printf("l'étudiante marie consomme %d octets.\n", sizeof(marie));

	strcpy(marie.prenom, "Marie");
	strcpy(marie.nom, "Lafortune");
	strcpy(marie.code_perm, "LAFM19991023");
	marie.tp1 = 80;
	marie.tp2 = 95; 
	marie.intra = 90;
	marie.finale = 87;

	printf("**** FICHE DE L'ETUDIANT-E ****\n");
	printf("Nom: %s\n", marie.nom);
	printf("Prenom: %s\n", marie.prenom);
	printf("Code permanent: %s\n", marie.code_perm);
	printf("TP1: %lf\n", marie.tp1);
	printf("TP2: %lf\n", marie.tp2);
	printf("Intra: %lf\n", marie.intra);
	printf("Final: %lf\n", marie.finale);




	system("pause");
	return EXIT_SUCCESS;
}