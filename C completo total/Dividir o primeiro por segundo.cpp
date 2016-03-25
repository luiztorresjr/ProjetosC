/*
15-09-2014 programa 319
programa para dividir o primeiro numero pelo segundo
*/
#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	int a, b;
	
	printf("Digite dois numeros: ");
	scanf("%d%d", &a, &b);
	
	if(b) printf("%d \n", a/b);
	else printf("nao pode dividir por zero\n");
	
	system("pause");
}
