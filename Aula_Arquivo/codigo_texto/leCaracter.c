#include <stdio.h>


int main()
{
	FILE *fptr;
	short int ch;

	//abre arquivo para escrita
	fptr  =  fopen("caracter.txt","r");     // 1ª Abertura do arquivo
	
	while( (ch = fgetc(fptr) ) != EOF )
	{
		printf("%c", ch); 	// 2ª  manipulação (leitura) do arquivo
	}
	
	fclose( fptr ); 			// 3ª fechamento do arquivo

	return 0;	

}
  
