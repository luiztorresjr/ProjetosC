/*
15-09-2014 programa 312
programa de numero m�gicos #1
*/
#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	int magic; //numero m�gico 
	int guess; //palpite do usuario
	
	magic = rand(); //gera o n�mero m�gico
	//printf("%d\n", magic);
	printf("Adivinhe o numero magico: ");
	scanf("%d", &guess);
	if(guess == magic) printf("** CERTO **");
}
