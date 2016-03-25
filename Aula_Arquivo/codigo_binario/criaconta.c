// Criando um arquivo de acesso randomico 
// inicializa o arquivo com 100 registros vazios

#include <stdio.h>

// estrutura ClienteConta            
struct ClienteConta {                              
   int numConta;   // numero da conta
   char nome[ 45 ];         // nome
   double saldo; // saldo      
};                 

int main( void )
{ 
   int i; // contador usado para numero da conta de 1-100

   // cria variavel com informação "vazia"        
   struct ClienteConta clienteVazio = { 0, "", 0.0 }; 
   
   FILE *cArquivoPtr; // apontador do arquivo contas.dat 

   // fopen abre arquivo para escrita, se existe descarta conteudo senao existe cria
   if ( ( cArquivoPtr = fopen( "contas.dat", "wb" ) ) == NULL ) {   //wb
      puts( "Arquvio nao pode ser aberto." );
   } // fim if
   else { 
      // gera 100 registros em branco para o arquivo                              
      for ( i = 1; i <= 100; ++i ) {                                   
         fwrite( &clienteVazio, sizeof( struct ClienteConta ), 1, cArquivoPtr );
      } // fim for                                                     

      fclose ( cArquivoPtr ); // fclose fecha arquivo
   } // fim else
} // fim main
