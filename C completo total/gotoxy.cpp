//versao Borland.
/*
15-09-2014 programa 322
programa para calcular o quadrado de um numero mais numeros negativos mantem o sinal portanto -10 neste programa fica -100
*/
#include <stdio.h>
#include <stdlib.h>
#include <conio.h> // arquivo de cabeçalho não- padrão
#include <string.h>

void converge(int line, char *message);

int main(void)
{
	converge(10, "Isto eh um teste de converge(). ");
}
/*Essa função mostra uma string iniciando do lado esquerdo da linha
especificada. Ela escreve caracteres de ambas as extremidades, 
convergindo para o centro.*/

void converge(int line, char *message)
{
	int i, j;
	
	for(i=1, j=strlen(message); i<j; i++, j--)
	{
		gotoxy(i, line); printf("%c", message[i-1]);
		gotoxy(j, line); printf("%c", message[j-1]);
	}
}
