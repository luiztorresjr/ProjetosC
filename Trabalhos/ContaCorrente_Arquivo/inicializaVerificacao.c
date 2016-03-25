// Escrevendo arquivo randomico
#include <stdio.h>

// clienteConta structure definition               
struct ClienteConta {                              
   int numConta; // numero conta
   char nome[ 45 ]; // nome   
   double saldo; // saldo   
}; // fim structure clienteConta                   

int main( void ) 
{
	
	int i; // contador usado para conta de 1-100

	// cria clienteConta com informação default       
	struct ClienteConta clienteVazio = { 0, "", 0.0 }; 
   
	FILE *cArquivoPtr; // conta.dat apontador

	// se abrir existe arquivo e arquivoPtr != NULL -> verdade e entra e retorna 1
    if ( (cArquivoPtr = fopen("contas.dat", "rb")) != NULL)
    {
        fclose(cArquivoPtr);
        return ;
    }
	else
	{
		// fopen abre arquivo para escrita se existe descarta conteudo
		if ( ( cArquivoPtr = fopen( "contas.dat", "wb" ) ) == NULL ) {   //wb
		puts( "ERRO Arquivo nao pode ser aberto. inicializaArquivo()" );
		} // fim if
		else { 
			// gera 100 registros em branco para o arquivo                              
			for ( i = 1; i <= 100; ++i ) {                                   
				fwrite( &clienteVazio, sizeof( struct ClienteConta ), 1, cArquivoPtr );
			} // fim for                                                     

			fclose ( cArquivoPtr ); // fclose fecha arquivo
		} // fim else
	}
	
	return ;
   	
}
