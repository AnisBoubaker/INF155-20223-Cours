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

#include <stdio.h>
#include <stdlib.h>


int fibo(int n, double* adr_nbr_or)
{
	int fib_n_1 = 1; //Initialisé à fibo(1)
	int fib_n_2 = 0; //Initialisé à fibo(0) 
	int fib_n;

	if (n == 0 || n == 1)
	{
		*adr_nbr_or = 0;
		return n == 0 ? 0 : 1;
	}

	for (int i = 2; i <= n; i++)
	{
		fib_n = fib_n_2 + fib_n_1;
		fib_n_2 = fib_n_1;
		fib_n_1 = fib_n;
	}

	*adr_nbr_or = (double)fib_n / fib_n_2;
	return fib_n;
}

int main(void)
{
	double nombre_or;

	for (int i = 0; i < 37; i++)
	{
		printf("fibo(%d) = %d\n", i, fibo(i, &nombre_or));
		printf("\tnombre d'or: %.20lf\n", nombre_or);
	}
	

	system("pause");
	return EXIT_SUCCESS;
}