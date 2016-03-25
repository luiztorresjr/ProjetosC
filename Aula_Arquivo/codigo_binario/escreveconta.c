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
	struct ClienteConta cliente;
	int numeroConta;
	
    // fopen abre se existe  senao erro
    if ( ( cArquivoPtr = fopen( "contas.dat", "r+b" ) ) == NULL ) {
      puts( "Arquivo nao pode ser aberto." );
    } // fim if
    else { 
		printf( "%s", "Entre numero da conta ( 1 a 100):\n? " );
		scanf( "%d", &numeroConta );
		fflush(stdin); //limpa o buffer de entrada do carater enter
		
		//posiciona de acordo com o numero da conta
		fseek( cArquivoPtr, ( numeroConta - 1 ) * sizeof( struct ClienteConta ), SEEK_SET );         

		fread( &cliente, sizeof( struct ClienteConta ), 1, cArquivoPtr );
		
		if( cliente.numConta != 0 ) {
			printf("A conta de numero: %d ja existe", numeroConta );
		}
		else{
			// usuario entre nome e saldo
			printf( "%s", "Entre nome\n? " );
			gets(cliente.nome);
			printf( "%s", "\nEntre com o saldo inicial\n? " );
			scanf("%lf",&cliente.saldo);
		
			//atualiza no cliente a numero da conta
			cliente.numConta = numeroConta;
		
			// seta posicao do arquivo para especifico registro   
			fseek( cArquivoPtr, ( numeroConta - 1 ) * sizeof( struct ClienteConta ), SEEK_SET );         

			// escreve no arquivo na posicao os dados lido do teclado              
			fwrite( &cliente, sizeof( struct ClienteConta ), 1, cArquivoPtr );
		
			fflush(stdin); //limpa o buffer de entrada do carater enter
		}
	} //fim else
	
	fclose(cArquivoPtr);
	return ;
}
