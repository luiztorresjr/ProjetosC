/*
12-09-2014	Programa 302
Luiz Torres Junior
Titulo:trocando valores de variaveis atraves de uma função com ponteiros
*/
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int valores[5]={1, 2, 3, 4, 5};
	int contador;
	int *iptr;
	
	iptr = valores;
	for(contador = 0;contador < 5; contador++)
	{
		printf("%d\n", *iptr);
		iptr++;	
	}
	system("pause");
}
