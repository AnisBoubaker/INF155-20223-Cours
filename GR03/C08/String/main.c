
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define TAILLE_MAX_CHAINE 100

int main(void)
{
	//char ma_chaine1[8] = {'B', 'o', 'n', 'j', 'o', 'u', 'r', '\0'};
	char ma_chaine1[TAILLE_MAX_CHAINE] = "Bonjour";

	char nom_prenom[TAILLE_MAX_CHAINE];

	printf("Saisir votre nom et prenom:");
	//Attention: pas de & car nom_prenom est ubn tableau => pointeur (adresse)
	//scanf("%s", nom_prenom);

	fgets(nom_prenom, TAILLE_MAX_CHAINE, stdin);
	nom_prenom[strlen(nom_prenom) - 1] = '\0'; //Enlever le \n à la fin

	//%s pour afficher une chaine de caractères.
	printf("%s %s\n", ma_chaine1, nom_prenom);

	printf("La chaine de caracteres saisie contient %d caracteres.\n",
		strlen(nom_prenom));


	system("pause");
	return EXIT_SUCCESS;
}