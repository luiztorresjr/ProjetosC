/* programa que copia arquivo programa chama copia */
#include <stdio.h> 
#include <stdlib.h>

int main( int argc, char *argv [ ] ) 
{ 
	FILE *original,*copia;
	char linha[81]; 

	if(argc < 3) { 
		printf("\nSintaxe correta:\n\n"); 
		printf("copiar ARQUIVO_ORIGEM   ARQUIVO_DESTINO\n\n"); 			
		exit(1); // return 1
	} 
	
	// verifica se o nomes são iguais 
	if( strcmp( argv[1], argv[2]) == 0 )          
	{
        printf("\nO nome do arquivo original não pode ser igual ao da copia.\n\n");
        exit(1); 
   	} 
    // abre o arquivo_origem para leitura              
	if (  (original = fopen(argv[1],"r")) == NULL) 
	{           
	    printf("\nErro ao abrir o arquivo original.\n\n"); 
	    exit(1); 
    } 
                  
	if ( (copia = fopen( argv[2],"w" )) == NULL) { 
	    printf("\nErro ao abrir o arquivo copia.\n\n"); 
	    exit(1); 
    } 
	
	while( !feof(original) ) 
	{ 
		fgets(linha,80,original); 
		fputs(linha,copia); 
	} 

	fclose(original); 
	fclose(copia); 

	printf("\n%s copiado com sucesso com o nome de   %s. \n\n"  ,argv[1],  argv[2]);

	return 0; 
}
   
