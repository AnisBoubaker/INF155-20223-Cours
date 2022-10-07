#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

double somme_tableau(const double tab[], int nb_elts)
{
	double somme = 0;
	for (int i = 0; i < nb_elts; i++)
	{
		somme += tab[i];
	}
	return somme;
}

void afficher_tableau(const double tab[], int nb_elts)
{
	for (int i=0; i < nb_elts; i++)
	{
		printf("Case %d: %lf\n", i, tab[i]);
		//La modification du tableau est interdite du fait que le paramètre
		//tab est const. On ne peut donc pas faire ceci: 
		//tab[i] = 0;
	}
}

/*
fonction saisir_tableau qui demande à l'usager de saisir 
une valeur pour chacune des cases du tableau (pour un nombre
de cases déterminé).
*/
void saisir_tableau(double tab[],  int nb_elts)
{
	for (int i = 0; i < nb_elts; i++)
	{
		printf("Saisir la valeur pour la case %d: ", i);
		scanf("%lf", &tab[i]);
	}
	/*
	Ne jamais retourner un tableau depuis une fonction
	car un tableau déclaré dans une fonction cesse d'exister
	dès	qu'on quitte la fonction.
	*/
}



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

	saisir_tableau(produits, nb_produits);
	/*for (int i=0; i<nb_produits; i++ )
	{
		printf("Prix du produit %d: ", i);
		scanf("%lf", &produits[i]);
	}*/
	
	afficher_tableau(produits, nb_produits);

	//ATTENTION: On ne doit mettre que le nom du tableau, pas de crochets!!
	somme = somme_tableau(produits, nb_produits);

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