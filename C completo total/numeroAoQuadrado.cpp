/*
15-09-2014 programa 316
programa para calcular o quadrado de um numero mais numeros negativos mantem o sinal portanto -10 neste programa fica -100
*/
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int isqrd, i;
	
	printf("Digite um numero: ");
	scanf("%d", &i);
	
	isqrd = i>0 ? i*i : -(i*i);
	
	printf("%d ao quadrado eh %d\n", i,isqrd);
	
	system("pause");
}
