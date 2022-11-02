#include <stdio.h>
#include <stdlib.h>


//typedef type_a_renommer nouveau_nom
typedef unsigned int uint;

typedef int entier;

typedef int tab_entier_100[100];

int main(void)
{
	unsigned int nb_personnes;
	unsigned int nb_presents;
	uint nb_personnes_malades;


	//int mon_tableau[100];
	tab_entier_100 mon_tableau;

	mon_tableau[10] = 20;

	system("pause");
	return EXIT_SUCCESS;
}