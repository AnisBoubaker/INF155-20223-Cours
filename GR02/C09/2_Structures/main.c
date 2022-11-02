
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define TAILLE_MAX_NOM 100
#define TAILLE_MAX_CPERM 13

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

int main(void)
{
	//struct etudiant marie;
	t_etudiant marie; 
	struct etudiant marc; 
	t_etudiant jean;

	strcpy(marie.nom ,  "Laforest");
	strcpy(marie.prenom , "Marie");
	strcpy(marie.code_perm , "LAFM19990610");
	marie.tp1 = 85;
	marie.tp2 = 80;
	marie.intra = 90;
	marie.finale = 95;

	printf("La taille en memoire occupee par marie: %d\n", sizeof(marie));

	/*printf("Fiche de l'etudiant-e:\n");
	printf("Nom: %s\n", marie.nom);
	printf("Prenom: %s\n", marie.prenom);
	printf("Code Permanent: %s\n", marie.code_perm);
	printf("TP1: %.2lf\n", marie.tp1);
	printf("TP2: %.2lf\n", marie.tp2);
	printf("Intra: %.2lf\n", marie.intra);
	printf("Final: %.2lf\n", marie.finale);*/

	etudiant_afficher(&marie);

	//Afficher 0 si en réalité marie a été envoyée à la fonction en tant que pointeur
	//Afficher 95 si la fonction a créé une copie de marie et le 0 a été affecté à la copie
	printf("La note de l'examen final est: %.2lf\n", marie.finale);



	system("pause");
	return EXIT_SUCCESS;
}


void etudiant_afficher(const t_etudiant* et )
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