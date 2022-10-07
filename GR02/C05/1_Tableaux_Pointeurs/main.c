
#include <stdio.h>
#include <stdlib.h>


int main(void)
{
	double produits[100]; 

	produits[0] = 10; 
	produits[1] = 5;
	produits[2] = 21; 
	produits[3] = 3;
	produits[4] = 8;

	printf("%lf\n", *(produits+0) ); //produits[0]


	printf("%lf\n", *(produits+1)    ); //produits[1]

	printf("%lf\n", *(produits + 2) ); //produits[2]

	system("pause");
	return 0;

}