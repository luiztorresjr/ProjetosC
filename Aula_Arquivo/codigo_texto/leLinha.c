//Escreve linha a linha no arquivo

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main()
{
	FILE *fptr;
	char texto[81];

	//abre arquivo para escrita
	if ( (fptr  =  fopen("linhaTexto.txt","r") ) == NULL )      // 1ª Abertura do arquivo
	{
	    printf("ERRO na abertura do arquivo");
        exit(1);   // return (1);	
	}
	
	while( fgets(texto,80,fptr) != NULL)   // ctrl-z
	{
		printf("%s",texto);
	}
	
	fclose(fptr);

	return 0;	

}
