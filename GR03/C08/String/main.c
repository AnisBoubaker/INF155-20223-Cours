
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define TAILLE_MAX_CHAINE 100

int main(void)
{
	//char ma_chaine1[8] = {'B', 'o', 'n', 'j', 'o', 'u', 'r', '\0'};
	char ma_chaine1[TAILLE_MAX_CHAINE] = "Bonjour";

	char nom[TAILLE_MAX_CHAINE];
	char prenom[TAILLE_MAX_CHAINE];

	

	char nom_prenom[TAILLE_MAX_CHAINE];
	char copie_nom_prenom[TAILLE_MAX_CHAINE];
	char sigle_cours[TAILLE_MAX_CHAINE];


	printf("Saisir votre nom:");
	//Attention: pas de & car nom_prenom est ubn tableau => pointeur (adresse)
	//scanf("%s", nom_prenom);

	fgets(nom, TAILLE_MAX_CHAINE, stdin);
	nom[strlen(nom) - 1] = '\0'; //Enlever le \n à la fin

	printf("Saisir votre prenom:");
	//Attention: pas de & car nom_prenom est ubn tableau => pointeur (adresse)
	//scanf("%s", nom_prenom);

	fgets(prenom, TAILLE_MAX_CHAINE, stdin);
	prenom[strlen(prenom) - 1] = '\0'; //Enlever le \n à la fin


	//Construire la chaine nom_prenom qui contient le nom et le prénom
	//séparés par un espace
	strncpy(nom_prenom, prenom, TAILLE_MAX_CHAINE);
	strncat(nom_prenom, " ", TAILLE_MAX_CHAINE);
	strncat(nom_prenom, nom, TAILLE_MAX_CHAINE);




	//%s pour afficher une chaine de caractères.
	printf("%s %s\n", ma_chaine1, nom_prenom);

	printf("La chaine de caracteres saisie contient %d caracteres.\n",
		strlen(nom_prenom));


	//Pour changer le contenu d'une chaine de caractères, on ne peut pas 
	//utiliser l'affectation = 
	//Interdit: copie_nom_prenom = nom_prenom;
	//On utilise la fonction strcpy
	strncpy(copie_nom_prenom, nom_prenom, TAILLE_MAX_CHAINE);

	printf("La copie du nom et prenom: %s\n", copie_nom_prenom);

	//Mettre la valeur "INF155" dans sigle cours: 
	//INTERDIT: sigle_cours = "INF155";
	strncpy(sigle_cours, "INF155", TAILLE_MAX_CHAINE);

	printf("Le sigle du cours: %s\n", sigle_cours);


	printf("La chaine nom_prenom contient: %s\n", nom_prenom);
	printf("La chaine copie_nom_prenom contient: %s\n", copie_nom_prenom);

	//PAS POSSIBLE: On compares desa pointeurs!!
	/*if (nom_prenom == copie_nom_prenom)
	{
		printf("Les deux chaines de caracteres sont identiques!\n");
	}
	else
	{
		printf("Les deux chaines de caracteres sont differentes!\n");
	}*/
	int comparaison = strncmp(nom_prenom, copie_nom_prenom, TAILLE_MAX_CHAINE);
	if ( comparaison == 0)
	{
		printf("Les deux chaines sont identiques");
	}
	else if (comparaison > 0)
	{
		printf("nom_prenom > copie_nom_prenom");
	}
	else
	{
		printf("nom_prenom < copie_nom_prenom");
	}


	system("pause");
	return EXIT_SUCCESS;
}