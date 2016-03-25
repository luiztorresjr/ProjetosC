/*
Programa de conversão de distancias de milhas para quilometros
*/
//				Instruções para o pré-processador

#include<stdio.h>
#include <stdlib.h>

#define MIL_QUI 1.6093

int main(void){
	double MILHAS, QUILOMETROS;
	
	do{
		printf("Distancia em milhas? ");
		scanf("%lf", &MILHAS);		
	}while(MILHAS < 0.0);
	QUILOMETROS = MIL_QUI * MILHAS;
	
	printf("Distancia em quilometros eh %8.3f\n", QUILOMETROS);
	return 0;
	system("pause");	
}
