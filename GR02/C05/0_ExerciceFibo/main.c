/*
Écrire la fonction "fibo" permettant de calculer le nième terme de
la suite de Fibonacci ainsi que le nombre d'or.

La suite de Fibonacci est définie comme suit:
Fibo(0) = 0
Fibo(1) = 1
Fibo(n) = Fibo(n-2)+Fibo(n-1)

Le nombre d'or se calcule en faisant le rapport entre deux termes
consécutifs de la suite.

Par exemple, le terme 6 de la suite de Fibonacci (Fibo(6)) est: 8. En effet:
Fibo(0) = 0
Fibo(1) = 1
Fibo(2) = 1
Fibo(3) = 2
Fibo(4) = 3
Fibo(5) = 5
Fibo(6) = 8
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int fibo(int n, double* adr_nombre_or)
{

	int fibo_i = 0; 
	int fibo_i_1 = 1;
	int fibo_i_2 = 0;
	double nombre_or; 

	if (n == 1)
	{
		fibo_i = 1; 
	}

	for (int i = 2; i <= n; i++)
	{
		fibo_i = fibo_i_1 + fibo_i_2;
		fibo_i_2 = fibo_i_1;
		fibo_i_1 = fibo_i;
	}

	/*nombre_or = fibo_i / fibo_i_2;
	*adr_nombre_or = nombre_or;*/

	*adr_nombre_or = (double)fibo_i / fibo_i_2;

	return fibo_i;
}


int main(void)
{
	double nb_or; 

	//1.618...

	printf("%d\n", fibo(20, &nb_or));
	printf("Nombre d'or: %lf\n", nb_or);

	system("pause");
	return EXIT_SUCCESS;
}