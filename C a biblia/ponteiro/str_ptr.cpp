/*
12-09-2014	Programa 302
Luiz Torres Junior
Titulo:trocando valores de variaveis atraves de uma função com ponteiros
*/
#include <stdio.h>
#include <stdlib.h>

void exibe_string(char *string)
{
	while(*string)
	{
		putchar(*string++);
	}	
}


int main(void)
{
	exibe_string("Bíblia do Programador C/C++\n");
	system("pause");
}
