// Criando arquivo texto formatado

#include <stdio.h>

int main( void )
{ 
   unsigned int conta; // numero da conta
   char nome[ 30 ]; //  nome da conta
   double saldo; // saldo da conta

   FILE *cfPtr; // cfPtr = clients.dat file pointer   

   // fopen abre arquivo. Se nao conseguir criar arquivo sai do programa 
   if ( ( cfPtr = fopen( "clients.dat", "w" ) ) == NULL ) {
      puts( "File could not be opened" );
   } // fim if
   else 
   { 
      puts( "Entre com conta, nome e saldo." );
      puts( "Entre com EOF para finalizar entrada." );
      printf( "%s", "? " );
      scanf( "%d%29s%lf", &conta, nome, &saldo );

      // escreve conta, nome e saldo no arquivo com fprintf
      while ( !feof( stdin ) ) 
	  { 
         fprintf( cfPtr, "%d %s %.2f\n", conta, nome, saldo );
         printf( "%s", "? " );
         scanf( "%d%29s%lf", &conta, nome, &saldo );
      } // fim while
      
      fclose( cfPtr ); // fclose closes file   
   } // fim else
} // fim main


 