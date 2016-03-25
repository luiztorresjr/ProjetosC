/*
15-09-2014 programa 317
programa usando para explica if-else
*/
#include <stdio.h>
#include <stdlib.h>

int f1(int n);
int f2(void);

f1(int n)
{	
	printf("%d ", n);
	return 0;
}

f2(void)
{
	printf("foi digitado");
	return 0;
}

int main(void)
{
	int t;
	
	printf("Digite um numero: ");
	scanf("%d", &t);
	
	//imprime a mensagem apropriada
	t ? f1(t) + f2() : printf("foi digitado zero");
}




