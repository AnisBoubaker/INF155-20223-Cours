/*
Écrire la fonction `trouver_val` qui identifie la position (indice)
d'une valeur 'val' dans un tableau tab d'entiers.

La fonction doit retourner une valeur vraie si la valeur `val` est
dans le tableau ou fausse sinon. De plus, la position doit être
fournie par référence (pointeur).

Si la valeur se trouve plus d'une fois dans le tableau, la fonction
doit retourner la position de la première occurence.

  0    1    2    3    4    5
[10 | 50 | 34 | 24 | 65 | 12 ]


Si val = 24, la fonction doit me retourner vrai et me fournir l'indicie où 24 se trouve: 3

Si val = 150, la fonction doit me retourner faux. 

*/


#include <stdio.h>
#include <stdlib.h>


int trouver_val(int tab[], int nb_elts, int val, int* position)
{
	int pos = 0; 

	while ( tab[pos] != val && pos < nb_elts )
	{
		pos++;
	}
	/*
	Il y'a deux cas de figure: 
	- Soit j'ai quitté ma boucle car tab[pos] == val : on a trouvé la valeur dans le tableau, c'est à pos.
	- Soit on a quitté la boucle car pos == nb_elts: on s'est rendus à la fin et on n'a pas trouvé la valeur. 
	*/
	if (pos == nb_elts)
	{
		return 0;
	}
	else
	{
		*position = pos;
		return 1;
	}

}

int main(void)
{
	//int x = 20; 

	//Initialisation d'un tableau
	int un_tableau[100] = { 10, 50, 34, 24, 65, 12 };
	int position;

	//Tab2 sera rempli intégralement de 0. 
	int tab2[100] = { 0 };

	//Remplir tab3 au complet de 10
	int tab3[100] = { 10 }; //10 | 0 | 0 | ... | 0

	for (int i = 0; i < 100; i++)
	{
		tab3[i] = 10; 
	}

	//  0    1    2    3    4    5
	//[10 | 50 | 34 | 24 | 65 | 12]
	/*un_tableau[0] = 10; 
	un_tableau[1] = 50;
	un_tableau[2] = 34;
	un_tableau[3] = 24;
	un_tableau[4] = 65;
	un_tableau[5] = 12;*/

	


	if ( trouver_val(un_tableau, 6, 24, &position) )
	{
		printf("La valeur a ete trouvee a la position: %d\n", position);
	}
	else
	{
		printf("La valeur n'a pas ete trouvee.\n");
	}

	printf("Contenu du tableau: ");
	for (int i = 0; i < 100; i++)
	{
		printf("%d ", un_tableau[i]);
	}
	printf("\n");

	system("pause");
	return EXIT_SUCCESS;

}