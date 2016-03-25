/*
Programa de conversão de peso de libra para quilograma
*/
//				Instruções para o pré-processador

#include<stdio.h>
#include <stdlib.h>

#define LB_KG 0,45359237

int main(void){
	double LIBRAS, QUILOGRAMAS;
	
	do{
		printf("Distancia em milhas? ");
		scanf("%lf", &LIBRAS);		
	}while(LB < 0.0);
	QUILOGRAMAS = LB_KG * LIBRAS;
	
	printf("Distancia em quilometros eh %8.3f\n", QUILOGRAMAS);
	return 0;
	system("pause");	
}
