/*
Écrire un programme qui calcule le nombre de combinaisons possibles
en tirant k boules à partir d'une urne contenant n boules. 


*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>


int factorielle(int n)
{
	int resultat = 1;
	int compteur; 

	for (compteur = 1; compteur <= n; compteur++)
	{
		resultat = resultat * compteur;
	}

	return resultat; 
}


int saisir_entier_positif(void)
{
	int saisie; 

	do
	{
		printf("Saisir une valeur >=0: ");
		scanf("%d", &saisie);
	} while (saisie < 0);

	return saisie; 
}


int main(void)
{
	int valeur; 
	int resultat; 

	printf("Saisir la valeur pour la factorielle: \n");
	//scanf("%d", &valeur);
	valeur = saisir_entier_positif();

	resultat = factorielle(valeur);

	printf("La factorielle de %d est: %d\n", valeur, resultat);


	//int total; //Nombre total de boules dans l'urne
	//int tirees; //Nombre de boules tirées à chaque tirage
	//int fact_total;
	//int fact_tirees;
	//int fact_total_tirees;
	//int compteur;
	//int resultat; 

	//printf("Saisir le nombre de boules: ");
	//scanf("%d", &total);

	//printf("Saisir le nombre de boules par tirage: ");
	//scanf("%d", &tirees);

	///*
	//Écriture mathématique
	//Résultat = total! / tirees! * (total - tirees)!
	//*/
	//fact_total = 1;
	//for (compteur = 1; compteur <= total; compteur++)
	//{
	//	fact_total = fact_total * compteur;
	//}

	//fact_tirees = 1;
	//for (compteur = 1; compteur <= tirees; compteur++)
	//{
	//	fact_tirees = fact_tirees * compteur;
	//}

	//fact_total_tirees = 1;
	//for (compteur = 1; compteur <= total-tirees; compteur++)
	//{
	//	fact_total_tirees = fact_total_tirees * compteur;
	//}

	//resultat = fact_total / (fact_tirees * fact_total_tirees);

	//printf("Le nombre de combinaisons possibles: %d\n", resultat);

	system("pause");
	return EXIT_SUCCESS;
}
