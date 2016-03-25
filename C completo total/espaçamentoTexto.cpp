/*
15-09-2014 programa 323
programa para calcular o quadrado de um numero mais numeros negativos mantem o sinal portanto -10 neste programa fica -100
*/
#include <stdio.h>
#include <stdlib.h>
#include <conio.h> // arquivo de cabeçalho não- padrão
#include <string.h>


void pad (char *s, int lenght);

int main(void)
{
	char str[80];
	
	strcpy(str, "Isto eh um teste");
	pad(str, 40);
	printf("%d", strlen(str));
}

void pad(char *s, int lenght)
{
	int l;
	l = strlen(s);
	
	while(l < lenght)
	{
		s[l] = ' ';
		l++;
	}	
	s[l] = '\0';
}
