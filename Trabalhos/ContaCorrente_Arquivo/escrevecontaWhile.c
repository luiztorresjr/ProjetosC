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
    FILE *cArquivoPtr; // contas.dat file pointer

    // cria clienteConta com informacao default 
    struct ClienteConta cliente;

    // fopen abre se existe  senao erro
    if ( ( cArquivoPtr = fopen( "contas.dat", "r+b" ) ) == NULL ) {
      puts( "Arquivo nao pode ser aberto." );
    } // fim if
    else { 
		// requer ao usuario numero da conta
		printf( "%s", "Entre numero da conta ( 1 a 100, 0 para finalizar )\n? " );
		scanf( "%d", &cliente.numConta );
		fflush(stdin); //limpa o buffer de entrada do caracter enter
	  
		// usuario entre com informacoes para aquivo quando numConta  enters information, which is copied into file
		while ( cliente.numConta != 0 ) { 
			// usuario entre nome e saldo
			printf( "%s", "Entre com nome:\n? " );
			gets(cliente.nome);
			printf( "%s", "\nEntre com o saldo:\n? " );
			scanf("%lf",&cliente.saldo);
			 
			// seta posicao do arquivo para especifico registro   
			fseek( cArquivoPtr, ( cliente.numConta - 1 ) * sizeof( struct ClienteConta ), SEEK_SET );         

			// write user-specified information in file              
			fwrite( &cliente, sizeof( struct ClienteConta ), 1, cArquivoPtr );

			// enable user to input another account number
			printf( "%s", "Entre com numero da conta:\n? " );
			scanf( "%d", &cliente.numConta );
			fflush(stdin); //limpa o buffer de entrada do carater enter

	} // fim while

      fclose( cArquivoPtr ); // fclose fecha arquvivo
   } // fim else
} // fim main
