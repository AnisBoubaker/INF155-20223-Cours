

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define TAILLE_MAX 100

int main(void)
{
	//char ma_chaine[8] = {'B', 'o', 'n', 'j', 'o', 'u', 'r', 0};
	char salutation[8] = "Bonjour";
	char prenom[TAILLE_MAX];
	char copie_prenom[TAILLE_MAX];

	char nom[TAILLE_MAX];

	char nom_et_prenom[TAILLE_MAX];

	//%s: Afficher une chaine de caractères (string)
	printf("La chaine ma_chaine contient: %s\n", salutation);

	printf("Veuillez saisir votre prenom: ");
	/*//ATTENTION: Pas de &, car prenom est un tableau de char (donc un pointeur/adresse vers un char)
	//Note: scanf ne lit pas les espaces, tabulations et retours à la ligne.
	scanf("%s", prenom);*/

	fgets(prenom, TAILLE_MAX, stdin);
	prenom[ strlen(prenom) - 1 ] = '\0';

	printf("Veuillez saisir votre nom: ");
	fgets(nom, TAILLE_MAX, stdin);
	nom[strlen(nom) - 1] = '\0';




	printf("Vous avez saisir: %s\n", prenom);

	printf("Le prenom comprend %d caracteres.\n", strlen(prenom));

	//ATTENTION: Ne pas faire salutation = "Bonsoir"
	strcpy(salutation, "Bonsoir");

	printf("%s %s\n", salutation, prenom); 


	strcpy(nom_et_prenom, prenom);
	strcat(nom_et_prenom, " ");
	strcat(nom_et_prenom, nom);

	printf("Nom complet: %s\n", nom_et_prenom);




	strncpy(copie_prenom, prenom, TAILLE_MAX);
	printf("La copie du prenom: %s\n", copie_prenom);


	int comparaison = strcmp(copie_prenom, prenom);
	if (comparaison==0)
	{
		printf("Les deux chaines de caracteres sont identiques\n");
	}
	else if(comparaison > 0)
	{
		printf("Les deux chaines de caracteres sont differentes, copie_prenom est superieure a prenom.\n");
	}
	else
	{
		printf("Les deux chaines de caracteres sont differentes, copie_prenom est inferieure a prenom.\n");
	}


	system("pause");
	return EXIT_SUCCESS;
}