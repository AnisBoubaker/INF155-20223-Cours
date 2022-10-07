#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int tab[100]; 

	tab[0] = 20; 
	tab[1] = 10; 
	tab[2] = 5; 

	printf("%d\n", *tab);
	printf("%d\n", *(tab+1));

	system("pause");
	return EXIT_SUCCESS;

}