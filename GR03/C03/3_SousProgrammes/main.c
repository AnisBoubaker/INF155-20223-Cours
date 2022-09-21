/*
Écrire un programme qui calcule le nombre de possiblités qui existent
lorsqu'on tire k boules dans une urne qui en contient n. 

On commence par demander à l'utilisateur nombre de boules (n) et le nombre
de boules à tirer (k). Ensuite on affiche le nombre de possibilités. 

*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int n; //Nombre total de boules
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


}