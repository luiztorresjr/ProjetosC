//Remove os dados da conta selecionada pelo usuario - coloca vazio
//pede confirmacao antes de remover
#include <stdio.h>

struct ClienteConta {                              
     int numConta;                  // numero da conta     
     char nome[ 45 ];               // nome   
     double saldo;                    // saldo            
};                    


int main(){

	FILE *cArquivoPtr; // contas.dat file pointer
   	
	struct ClienteConta cliente;                       
	struct ClienteConta clienteVazio = {0, "" ,0.0};  // cria conta com  valor vazio
	int numeroConta;
	char opcao;
	
    if ( (cArquivoPtr = fopen("contas.dat", "r+b") ) == NULL ) {  
        puts( "Arquivo nao pode ser aberto." );
        return;  
    } 

    printf( "%s", "Entre numero da conta para ser removida ( 1 a 100):\n? " );
    scanf( "%d", &numeroConta );
    fflush(stdin); //limpa o buffer de entrada do carater enter
	
	//posiciona de acordo com o numero da conta
	fseek( cArquivoPtr, ( numeroConta - 1 ) * sizeof( struct ClienteConta ), SEEK_SET );         

	fread( &cliente, sizeof( struct ClienteConta ), 1, cArquivoPtr );
	
    if( cliente.numConta == 0 ) {
		printf("A conta de numero: %d esta VAZIA", numeroConta );
	}
	else{
		//mostra os dados
		printf("Dados atuais da conta \n");	
		printf( "%-6d%-27s%10.2f\n", cliente.numConta, cliente.nome, cliente.saldo );
		
		// seta posicao do arquivo para especifico registro   
		fseek( cArquivoPtr, ( numeroConta - 1 ) * sizeof( struct ClienteConta ), SEEK_SET );         

		// escreve no arquivo na posicao os dados lido do teclado              
		fwrite( &clienteVazio, sizeof( struct ClienteConta ), 1, cArquivoPtr );
	
		printf("remove conta com sucesso!!!" );
	}			
		
	fflush(stdin); //limpa o buffer de entrada do carater enter

	return 0;
}
