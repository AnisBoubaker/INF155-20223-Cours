/*
Exercice: Écrire la fonction "min_de_3" qui récoit trois valeurs réelles
en paramètre. Votre fonction doit retourner la valeur la plus petite des
trois.

Testez votre fonction en l'appelant depuis votre main.

Enseignement: cet exercice nous permettra également d'introduire
l'opérateur ternaire et la déclaration des fonctions.
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

/* Déclaration des fonctions */
double val_absolue(double val);
double min_de_3_v1(double val1, double val2, double val3);
double min_de_3_v2(double val1, double val2, double val3);
double min_de_3_v3(double val1, double val2, double val3);


int main(void)
{
	double le_min; 

	le_min = min_de_3_v3(1.5, 1.5, 25.6);

	printf("La valeur min est: %lf\n", le_min);

	printf("La valeur min est: %lf\n", min_de_3_v3(160, 10.5, 85.2));


	printf("Valeur absolue de -10: %lf\n", val_absolue(-10));
	printf("Valeur absolue de 150: %lf\n", val_absolue(150));
	printf("Valeur absolue de 0: %lf\n", val_absolue(0));

	system("pause");
	return EXIT_SUCCESS;
}



/*
écrire la fonction val_absolue qui reçoit un réel et retourne sa valeur absolue.
En utilisant l'opérateur ternaire.
*/
double val_absolue(double val)
{
	return val < 0 ? -val : val;
}

double min_de_3_v3(double val1, double val2, double val3)
{
	double min = val1;

	min = val2 < min ? val2 : min;
	min = val3 < min ? val3 : min;

	return min;
}

double min_de_3_v2(double val1, double val2, double val3)
{
	double min = val1;

	if (val2 < min)
	{
		min = val2;
	}
	if (val3 < min)
	{
		min = val3;
	}
	return min;
}

double min_de_3_v1(double val1, double val2, double val3)
{
	double min;

	if (val1 <= val2 && val1 <= val3)
	{
		min = val1;
	}
	else if (val2 <= val1 && val2 <= val3)
	{
		min = val2;
	}
	else
	{
		min = val3;
	}
	return min;
}
