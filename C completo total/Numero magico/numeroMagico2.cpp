/*
15-09-2014 programa 314
programa de numero mágicos #2
*/
#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	int magic; //numero mágico 
	int guess; //palpite do usuario
	
	magic = rand(); //gera o número mágico
	//printf("%d\n", magic);
	printf("Adivinhe o numero magico: ");
	scanf("%d", &guess);
	if(guess == magic) printf("** CERTO **");
}
