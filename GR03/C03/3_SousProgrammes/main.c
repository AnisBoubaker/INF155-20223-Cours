/*
Écrire un programme qui calcule le nombre de possiblités qui existent
lorsqu'on tire k boules dans une urne qui en contient n. 

On commence par demander à l'utilisateur nombre de boules (n) et le nombre
de boules à tirer (k). Ensuite on affiche le nombre de possibilités. 

*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int factorielle(int n)
{
	int resultat = 1;

	for (int compteur = 1; compteur <= n; compteur++)
	{
		resultat = resultat * compteur;
	}

	//La valeur fournie par la fonction en réponse
	return resultat;
}

//La fonction ne prend aucun paramètre (void)
int saisie_positif(void)
{
	int saisie; 

	do
	{
		printf("Saisir une valeur >=0: ");
		scanf("%d", &saisie);
	} while (saisie < 0);

	return saisie; 
}

int nombre_combinaisons(int nb_total, int nb_tirees)
{
	int resultat; 

	resultat = factorielle(nb_total) /
		(factorielle(nb_tirees) * factorielle(nb_total - nb_tirees));

	return resultat; 
}

void bienvenue(void)
{
	printf("*****************************************\n");
	printf("*   SUPER CALCULATEUR DE COMBINAISONS   *\n");
	printf("*****************************************\n");
}



int main(void)
{
	int n; 
	int k; 
	int combinaisons;

	bienvenue();

	printf("Saisir le nombre de boules dans l'urne: \n");
	n = saisie_positif();

	printf("Saisir le nombre de boules tirees: \n");
	k = saisie_positif();

	combinaisons = nombre_combinaisons(n, k);

	printf("Le nombre de combinaisons possibles: %d\n", combinaisons);





	//int n; 
	//int resultat; 

	//printf("Quelle valeur pour le calcul de la factorielle?\n");
	////scanf("%i", &n);
	////Ne pas mettre void, et ikl faut obligatoirement des parenthèses
	//n = saisie_positif();

	//resultat = factorielle(n);

	//printf("La factorielle de %d est: %d\n", n, resultat);



	/*int valeur; 

	valeur = factorielle(5);

	printf("La variable valeur contient: %d\n", valeur);*/






	/*int n; //Nombre total de boules
	int k;//Nombre de boules à tirer
	int resultat; //Nombre de combinaisons possibles
	int fact_n;
	int fact_k;
	int fact_n_k;

	printf("Nombre total de boules: ");
	scanf("%i", &n);

	printf("Nombre de boules à tirer: ");
	scanf("%i", &k);

	fact_n = 1;
	for (int compteur = 1; compteur <= n; compteur++)
	{
		fact_n = fact_n * compteur;
	}

	fact_k = 1;
	for (int compteur = 1; compteur <= k; compteur++)
	{
		fact_k = fact_k * compteur;
	}

	fact_n_k = 1;
	for (int compteur = 1; compteur <= n-k; compteur++)
	{
		fact_n_k = fact_n_k * compteur;
	}

	resultat = fact_n / (fact_k * fact_n_k);

	printf("Le nombre de combinaisons possibles est: %d\n", resultat);*/

	system("pause");
	return EXIT_SUCCESS;
}