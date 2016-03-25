// Lendo arquivo formatado com fscanf

#include <stdio.h>

int main( void )
{ 
   unsigned int conta; //  numero da conta
   char nome[ 30 ]; //    nome da conta
   double saldo; //       saldo da conta

   FILE *cfPtr; // cfPtr = clients.dat ponteiro para arquivo

   // fopen  abre arquivo, finaliza o programa se arquivo nao aberto 
   if ( ( cfPtr = fopen( "clients.dat", "r" ) ) == NULL ) {
      puts( "Arquivo nao pode ser aberto" );
   } // end if
   else 
   { // le conta nome e saldo do arquivo com fscanf e mostra na tela com printf
      printf( "%-10s%-13s%s\n", "Conta", "Nome", "Saldo" );
      fscanf( cfPtr, "%d%29s%lf", &conta, nome, &saldo );

      // while nao eh fim de arquivo
      while ( !feof( cfPtr ) ) 
	  { 
         printf( "%-10d%-13s%7.2f\n", conta, nome, saldo );
         fscanf( cfPtr, "%d%29s%lf", &conta, nome, &saldo );
      } // fim while

      fclose( cfPtr ); // fclose fecha o arquivo   
   } // fim else
} // fim main

