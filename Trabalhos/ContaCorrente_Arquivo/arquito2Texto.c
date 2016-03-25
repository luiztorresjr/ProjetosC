//arquivo2Texto
// le de uma arquivo binario e escreve para um arquivo Texto
#include <stdio.h>

struct ClienteConta {                              
     int numConta;                  // numero da conta     
     char nome[ 45 ];               // nome   
     double saldo;                    // saldo            
};                    

int main( void ){
 
    FILE *cArquivoPtr;   // leitura
    FILE *cEscritaPtr;    // escrita modo texto
    struct ClienteConta cliente;

    if ( (cArquivoPtr = fopen("contas.dat", "rb") ) == NULL ) {  
        puts( "Arquivo nao pode ser aberto." );
        return;  
    } 
     
    if ( (cEscritaPtr = fopen("contas.txt", "w") ) == NULL )   
        puts( "Arquivo nao pode ser aberto." );
    else 
	{ 
    	fprintf(cEscritaPtr,"%-6s%-27s%10s\n", "Conta", "Nome",  "Saldo" );  //cabecalho

        while ( !feof ( cArquivoPtr ) ) {   // le todos registros do arquvivo ate eof

			fread( &cliente, sizeof ( struct ClienteConta ), 1, cArquivoPtr );

            if ( cliente.numConta != 0 ) 
                fprintf(cEscritaPtr,  "%-6d%-27s%10.2f\n", cliente.numConta, cliente.nome, cliente.saldo );
          
        } 
        
		fclose( cArquivoPtr ); // fclose fecha arquivo binario
		fclose( cEscritaPtr ); // fclose fecha arquivo texto
    } // fim else
} // fim main
