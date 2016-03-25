/*
12-09-2014	Programa 302
Luiz Torres Junior
Titulo:trocando valores de variaveis atraves de uma função com ponteiros
*/
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

char *string_maiusc(char *string)
{
	char *ender_inicial, *temp;
	ender_inicial = temp = string;
	while(*string)
		*(temp++) = toupper(*string++);
	return (ender_inicial);
}
int main(void)
{
	char *titulo = "Biblia do Programador C/C++!";
	char *string;
	
	string = string_maiusc(titulo);
	printf("%s\n", string);
	printf("%s\n", string_maiusc("Matrizes e Ponteiros"));
	system("pause");
}
