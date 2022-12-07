

#define _CRT_SECURE_NO_WARNINGS
#include <stdlib.h>
#include <stdio.h>


int main(void)
{
	FILE* mon_fichier;
	char ligne_lue[1000];

	printf("Lecture d'un fichier texte contenant des phrases: \n");
	mon_fichier = fopen("fichier_de_test.txt", "r");
	if (mon_fichier == NULL)
	{
		printf("Erreur d'ouverture du fichier!\n");
		system("pause");
		exit(EXIT_FAILURE);
	}

	char* resultat;
	do
	{
		resultat = fgets(ligne_lue, 1000, mon_fichier);
		if (resultat != NULL)
		{
			printf("%s", ligne_lue);
		}
	} while (resultat != NULL);
	
	/*fgets(ligne_lue, 1000, mon_fichier);
	printf("%s", ligne_lue);

	fgets(ligne_lue, 1000, mon_fichier);
	printf("%s", ligne_lue);*/

	fclose(mon_fichier);


	printf("Lecture d'un fichier texte contenant des valeurs numeriques: \n");
	mon_fichier = fopen("data.txt", "r");

	int entier1, entier2;
	double reel1, reel2, reel3, reel4;

	fscanf(mon_fichier, "%d %lf %lf", &entier1, &reel1, &reel2);
	printf("Entier1 contient: %d\n", entier1);
	printf("Reel1 contient: %.2lf\n", reel1);
	printf("Reel2 contient: %.2lf\n", reel2);

	fclose(mon_fichier);

	mon_fichier = fopen("exemple_de_texte.txt", "a");

	int jour = 7;
	int annee = 2022;

	fprintf(mon_fichier, "Nous sommes le %d du mois de decembre %d\n",
		jour, annee);
	fprintf(mon_fichier, "Ceci est notre dernier cours de INF155\n\n\n");

	fclose(mon_fichier);

	system("pause");
	return EXIT_SUCCESS;
}