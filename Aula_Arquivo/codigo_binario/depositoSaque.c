// atualiza saldo da conta: deposito e saque.
//depositoSaque.c

#include <stdio.h>

struct ClienteConta {                              
     int numConta;                  // numero da conta     
     char nome[ 45 ];               // nome   
     double saldo;                    // saldo            
};                    

int main(){

	FILE *cArquivoPtr;   // leitura
	int numConta; // conta number
	double transacao; // transacao amount

	// cria clienteConta sem informacao 
	struct ClienteConta cliente;

   	// fopen abre arquivo para leitura e atualizacao
	if ( ( cArquivoPtr = fopen( "contas.dat", "r+b" ) ) == NULL ) {
		puts( "Arquivo nao pode ser aberto." );
		return 0;
	} // end if

	// obtem numero da conta para atualizar
	printf( "%s", "Entre com a conta para atualizar ( 1 - 100 ): " );
	scanf( "%d", &numConta );

	// movimento ponteiro do arquivo para o correto registro no arquivo              
	fseek( cArquivoPtr, ( numConta - 1 ) * sizeof( struct ClienteConta ), SEEK_SET );                                              

	// le registro do arquivo
	fread( &cliente, sizeof( struct ClienteConta ), 1, cArquivoPtr );

	// informa erro se conta nao existe
	if ( cliente.numConta == 0 ) {
		printf( "conta #%d esta VAZIA.\n", numConta );
	} // fim if
	else { // atualiza registro
		printf( "%-6d%-27s%10.2f\n\n", cliente.numConta, cliente.nome, cliente.saldo );
      
		// solicita valor da transacao para usuario 
		printf( "%s", "Entre deposito ( + ) or saque ( - ): " );
		scanf( "%lf", &transacao );
		cliente.saldo += transacao; // atualiza saldo do registro
      
		printf( "%-6d%-27s%10.2f\n", cliente.numConta, cliente.nome, cliente.saldo );
      
		// movimenta ponteiro do arquivo para correto registro no arquivo              
		fseek( cArquivoPtr, ( numConta - 1 ) * sizeof( struct ClienteConta ), SEEK_SET );                                              

		//  escreve atualizando o registro sobre o registro antigo no arquivo         
		fwrite( &cliente, sizeof( struct ClienteConta ), 1, cArquivoPtr );
		
		printf("atualizado saldo conta com sucesso!!!" );
    } // fim else
   
   fclose(cArquivoPtr);
   return 0;
} // fim funcao atualizaArquivo
