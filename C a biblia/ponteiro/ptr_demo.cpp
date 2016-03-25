/*
12-09-2014	Programa 300
Luiz Torres Junior
Titulo: alterando valor de contador atraves do ponteiro
*/
#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	int contador =10;
	int *iptr; 	//declara  valor de ponteiro
	
	iptr = &contador;	//atribui o endereço
	printf("Endereço em iptr %x Valor em *iptr %d\n", iptr, *iptr);
	*iptr = 25;
	printf("Valor de contador %d\n", contador);
	system("pause");
}
