//Exemplo que le caracteres do teclado
// e escreve os caracteres no arquivo

#include <stdio.h>
#include <conio.h>

int main()
{
	FILE *fptr;
	char ch;

	//abre arquivo para escrita
	fptr = fopen("caracter.txt","w");
	
	while( (ch = getche()) != '\r')
	{
		fputc(ch,fptr);
	}
	
	fclose(fptr);

	return 0;	

}
