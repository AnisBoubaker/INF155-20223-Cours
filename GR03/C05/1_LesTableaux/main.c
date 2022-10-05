#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	double produits[100];
	int nb_produits;
	double somme=0; 

	do
	{
		printf("Combien de produits? ");
		scanf("%d", &nb_produits);
	} while (nb_produits > 100 || nb_produits <= 0);

	for (int i=0; i<nb_produits; i++ )
	{
		printf("Prix du produit %d: ", i);
		scanf("%lf", &produits[i]);
	}
	
	for (int i = 0; i < nb_produits; i++)
	{
		somme += produits[i];
	}

	printf("La moyenne des prix est: %lf\n", somme / nb_produits);




	/*//Déclaration d'un tableau de 10 cases 
	//La tyaille doit toujour être une valeur numérique entière >0
	double produits[10];
	double somme = 0; 
	//Affecter la valeur 10.50 dans la case ayant pour indice 0
	produits[0] = 10.50;
	produits[1] = 40.50;
	produits[2] = 23.80;
	produits[3] = 30.50;
	produits[4] = 70.50;
	produits[5] = 90.50;
	produits[6] = 56.50;
	produits[7] = 23.50;
	produits[8] = 31.50;
	produits[9] = 93.50;

	for (int i = 0; i <= 9; i++)
	{
		printf("Le produit %d: %lf\n", i, produits[i]);
	}

	for (int i= 0; i <= 9; i++)
	{
		somme = somme + produits[i];
	}
	printf("La somme des prix: %lf\n", somme);*/

	system("pause");
	return EXIT_SUCCESS;
}