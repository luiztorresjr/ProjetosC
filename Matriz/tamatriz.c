#include <stdio.h>
#include <stdlib.h>

void main(void)
{
	int notas[100];
	float salar[100];
	char string[100];

	printf("Memoria para conter int notas[100] %d bytes\n", sizeof(notas));
	printf("Memoria para conter float salar[100] %d bytes\n", sizeof(salar));
	printf("Memoria para conter char string[100] %d bytes\n", sizeof(string));
	system("pause");
 }
