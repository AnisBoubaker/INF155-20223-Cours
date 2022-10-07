
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	//Taille du tableau: absolument une valeur numérique entière
	//positive
	double produits[1000];
	double moyenne; 

	int nb_produits=0; //Taille effective du tableau produits

	printf("Combien de produits avez-vous? ");
	scanf("%d", &nb_produits);

	for (int i = 0; i < nb_produits; i++)
	{
		printf("Saisir le prix du produit %d: ", i);
		scanf("%lf", &produits[i]);
	}

	for (int i = 0; i < nb_produits; i++)
	{
		//printf("Produit %d: %lf\n", i, produits[i]);
		printf("%lf | ", produits[i]);
	}
	printf("\n");

	moyenne = 0; 
	for (int i = 0; i < nb_produits; i++)
	{
		//moyenne = moyenne + produits[i];
		moyenne += produits[i];
	}
	//moyenne = moyenne / nb_produits;
	moyenne /= nb_produits;

	printf("La moyenne des prix est: %lf\n", moyenne);


	/*
	produits[2] = 25.50;

	printf("La case 2 contient: %lf\n", produits[2]);*/




	/*double produit0 = 14.5; 
	double produit1 = 22.30;
	double produit2 = 10.50;
	double produit3 = 45.20;
	double produit4 = 9.99;

	double moyenne; 

	moyenne =( produit0 + produit1 + produit2 + produit3 + produit4) /5; */

	system("pause");
	return 0;
}