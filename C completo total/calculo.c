/*
15-09-2014 progama 310
calculo de fra��o
*/

#include<stdio.h>
#include<stdlib.h>

int main(void)// imprime i e i/2 com fra��es
{
	int i;

	for(i=1; i<=100; i++)
		printf("%d / 2 eh: %f\n", i, (float) i/2);
	system("pause");
}
