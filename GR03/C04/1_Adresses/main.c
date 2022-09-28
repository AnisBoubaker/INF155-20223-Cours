
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int ma_variable = 25; 

	printf("L'adresse ou se trouve ma_varieble: %p\n", &ma_variable);

	system("pause");
	return EXIT_SUCCESS;
}