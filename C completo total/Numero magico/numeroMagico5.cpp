/*
15-09-2014 programa 318
programa de numero m�gicos #5
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
	if(guess==magic){
		printf("** CERTO **");
		printf("%d eh o numero magico\n", magic);
	}
	else
		guess > magic ? printf("Alto") : printf("Baixo");
}
