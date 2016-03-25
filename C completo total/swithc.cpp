/*
15-09-2014 programa 321
programa para calcular o quadrado de um numero mais numeros negativos mantem o sinal portanto -10 neste programa fica -100
*/
#include <stdio.h>
#include <stdlib.h>

void inp_handler(int i)
{
	int flag;
	flag = -1;
	
	switch(i){
		case 1:
		case 2:
		case 3:
			flag = 0;
			break;
		case 4:
			flag = 1;
		case 5:
			error(flag);
			break;
		default:
			process(i);			
	}
}
