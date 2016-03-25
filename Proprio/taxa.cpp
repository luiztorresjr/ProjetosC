/*
29-10-2013-IFSP HTO
le um numero de 2 a 9 calcular a tabuada e armazenar em um vetor apresentar a tabuada na tela
criado por luiz torres junior
programa-55
*/
#include <stdio.h>
#include <stdlib.h>

main()
{
      float ini, taxa,valor=0;
      int mes,cont;
      printf("Entre com o valor inicial:");
      scanf("%f",&ini);
      printf("Entre com o mes:");
      scanf("%i",&mes);
      printf("Entre com a taxa:");
      scanf("%f",&taxa);
      for(cont=0;cont<=mes;cont++){
                                   if(cont==1)
                                   valor=(ini*taxa)+ini;
                                   else
                                   valor=(valor*taxa) + valor;
      }
      printf("O valor total e: R$ %.2f",valor);
      system("pause");
}
