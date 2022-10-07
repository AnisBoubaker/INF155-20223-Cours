#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>


double moyenne_tab(const double tab[], int nb_elts);
void afficher_tab(const double tab[], int nb_elts);
void saisir_valeurs_tab(double tab[], int nb_valeurs);



int main(void)
{
	//Crée un tableau de doubles qui contient 5 cases.
	//5: Taille MAXIMALE du tableau
	//Taille doit obligatoirement être une valeur numérique entière positive
	double produits[100]; //Pas de variables pour la taille!
	double la_moyenne; 
	int nb_produits;
	
	do
	{
		printf("Nombre de produits [1..100]: ");
		scanf("%d", &nb_produits);
	} while (nb_produits<=0 || nb_produits>100);

	//nb_produits représente la taille EFFECTIVE de mon tableau produits. 


	
	saisir_valeurs_tab(produits, nb_produits);

	/*for (int i = 0; i < nb_produits; i++)
	{
		printf("Prix du produit %d: ", i);
		scanf("%lf", &produits[i]);
	}*/

	printf("Liste des prix saisis: \n");
	afficher_tab(produits, nb_produits);
	/*for (int i = 0; i < nb_produits; i++)
	{
		printf("%lf\n", produits[i]);
	}*/
	
	//ATTENTION: Pour passer un tableau en paramètre on ne met que le nom
	//du tableau (pas de crochets!!!)
	la_moyenne = moyenne_tab(produits, nb_produits);

	printf("La moyenne des prix est: %lf\n", la_moyenne);


	/*double produit0;
	double produit1; 
	double produit2;
	double produit3;
	double produit4;
	double moyenne; 

	produit0 = 150.50; 
	produit1 = 15.25;
	produit2 = 140.10;
	produit3 = 50.50;
	produit4 = 65.25;

	moyenne = (produit0 + produit1 + produit2 + produit3 + produit4) / 5;*/

	system("pause");
	return EXIT_SUCCESS;
}

//nb_elts: taille effective du tableau
double moyenne_tab(const double tab[], int nb_elts)
{
	double somme = 0;
	for (int i = 0; i < nb_elts; i++)
	{
		somme = somme + tab[i]; // somme += tab[i];
	}
	return somme / nb_elts;
}

/*
Écrire la fonction afficher_tab qui affiche dans la console
le contenu de toutes les cases d'un tableau reçu en paramètre.
(printf directement dans la fonction)
Case 0: ...
Case 1: ....
Case 2: ...

*/
void afficher_tab(const double tab[], int nb_elts)
{
	for (int i = 0; i < nb_elts; i++)
	{
		printf("%lf ", tab[i]);
		//Ceci n'est pas possible car le tableau est const (lecture seule)
		//tab[i] = 0;
	}
	printf("\n");
}


/*
NE JAMAIS RETOURNER UN TABLEAU statique CRÉÉ DANS UNE FONCTION! 
*/
void saisir_valeurs_tab(double tab[], int nb_valeurs)
{

	for (int i = 0; i < nb_valeurs; i++)
	{
		printf("Saisir la valeur %d : ", i);
		scanf("%lf", &tab[i]);
	}

}