/*
15-09-2014 programa 327
programa para contar espaço
*/
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	char done, ch;
	
	done = 0;
	while(!done)
	{
		ch=getchar();
		if(ch =='$')
		{
			done = 1;
			continue;
		}
		putchar(ch + 1); //deloca o alfabeto uma posição
	}
}
