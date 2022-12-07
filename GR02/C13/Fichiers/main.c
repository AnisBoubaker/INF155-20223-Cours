
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>


int main(void)
{
	FILE* mon_fichier;
	char ligne_lue[1000];

	mon_fichier = fopen("fichier_texte.txt", "r");
	if (mon_fichier == NULL)
	{
		printf("Ouverture du fichier impossible!");
		exit(EXIT_FAILURE);
	}

	/*
	QUELQUE CHOSE D'UTILE
	*/
	char* resultat;

	do
	{
		resultat = fgets(ligne_lue, 1000, mon_fichier);
		if (resultat != NULL)
		{
			printf("%s", ligne_lue);
		}
	} while (resultat != NULL);

	fclose(mon_fichier);


	mon_fichier = fopen("data.txt", "r");
	if (mon_fichier == NULL)
	{
		printf("Ouverture du fichier impossible!");
		exit(EXIT_FAILURE);
	}

	int un_entier;
	double reel1, reel2;

	fscanf(mon_fichier, "%d %lf %lf", &un_entier, &reel1, &reel2);
	printf("un entier contient: %d\n", un_entier);
	printf("reel1 contient: %.2lf\n", reel1);
	printf("reel2 contient: %.2lf\n", reel2);

	/*fscanf(mon_fichier, "%lf", &reel1);
	printf("reel1 contient: %.2lf\n", reel1);

	fscanf(mon_fichier, "%lf", &reel2);
	printf("reel2 contient: %.2lf\n", reel2);*/

	fclose(mon_fichier);


	int jour = 7;
	char mois[] = "Decembre"; //{'D', 'e', 'c', ... }
	int annee = 2022;

	int data[2][3] = { {10, 3, 23}, {15, 2, 10} };

	mon_fichier = fopen("fichier_ecrit.txt", "w");
	if (mon_fichier == NULL)
	{
		printf("Ouverture du fichier impossible!");
		system("pause");
		exit(EXIT_FAILURE);
	}

	fprintf(mon_fichier, "Ceci est le premier fichier que je crée.\n");
	fprintf(mon_fichier, "Cree en ce %d ieme jour de %s de l'an %d\n\n\n", jour, mois, annee);

	for (int i = 0; i < 2; i++)
	{
		fprintf(mon_fichier, "%d %d %d\n", data[i][0], data[i][1], data[i][2]);
	}


	fclose(mon_fichier);




	system("pause");
	return EXIT_SUCCESS;
}