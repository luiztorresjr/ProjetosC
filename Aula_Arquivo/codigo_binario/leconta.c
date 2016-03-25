// le arquivo de acesso randomico
#include <stdio.h>

// clienteConta structure definition               
struct clienteConta {                              
   unsigned int contaNum; // numero da conta     
   char nome[ 25 ]; // nome   
   double saldo; // saldo            
}; // fim structure clienteConta                   

int main( void )
{ 
   FILE *cfPtr; // contas.dat file pointer
   int resultado; // usado para testar se leu algum byte 
   
   // cria conta com  valor vazio
   struct clienteConta cliente = { 0, "", 0.0 };

   // fopen abre arquivo para leitura
   if ( ( cfPtr = fopen( "conta.dat", "r" ) ) == NULL ) {
      puts( "Arquivo nao pode ser aberto." );
   } // end if
   else { 
      printf( "%-6s%-27s%10s\n", "Conta", "Nome",
          "Saldo" );

      // le todos registros do arquvivo ate eof
      while ( !feof( cfPtr ) ) { 
         resultado = fread( &cliente, sizeof( struct clienteConta ), 1, cfPtr );

         // mostra registro
         if ( resultado != 0 && cliente.contaNum != 0 ) {
            printf( "%-6d%-27s%10.2f\n", 
               cliente.contaNum, cliente.nome, cliente.saldo );
         } // fim if
      } // fim while

      fclose( cfPtr ); // fclose fecha arquivo
   } // fim else
} // fim main



/**************************************************************************
 * (C) Copyright 1992-2013 by Deitel & Associates, Inc. and               *
 * Pearson Education, Inc. All Rights Reserved.                           *
 *                                                                        *
 * DISCLAIMER: The authors and publisher of this book have used their     *
 * best efforts in preparing the book. These efforts include the          *
 * development, research, and testing of the theories and programs        *
 * to determine their effectiveness. The authors and publisher make       *
 * no warranty of any kind, expressed or implied, with regard to these    *
 * programs or to the documentation contained in these books. The authors *
 * and publisher shall not be liable in any event for incidental or       *
 * consequential damages in connection with, or arising out of, the       *
 * furnishing, performance, or use of these programs.                     *
 *************************************************************************/
