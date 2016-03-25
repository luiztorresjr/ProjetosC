/*
12-09-2014	Programa 301
Luiz Torres Junior
Titulo:trocando valores de variaveis atraves de uma função com ponteiros
*/
#include <stdio.h>
#include <stdlib.h>
void troca_valores(int *a, int *b)
{
	int temp;
	
	temp = *a;	//armazena temporariamente o valor apontado por a
	*a = *b;	//atribui o valor do ponteiro b ao ponteiro a
	*b = temp;	//atribui o valor do poneteiro a ao ponteiro b		
}

int main(void)
{
	int um =1, dois = 2;
	printf("Os valores eram A = %d   B = %d\n\n",um, dois);
	troca_valores(&um, &dois);
	printf("Os valores ficaram A = %d   B = %d\n\n",um, dois);
	system("pause");
}
