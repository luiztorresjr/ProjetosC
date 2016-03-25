/* 
IFSP-Hto    ADS-matutino    1ºsem.  03/11/13
LINGUAGEM DE PROGRAMAÇÃO - Profª MICHELE BARION
PROGRAMADOR: MARCIO RICARDO BENETASSO DA SILVA

PROGRAMA AUTO-EXPLICATIVO SOBRE MÉTODO DE ORDENAÇÃO BUBBLE SORT - MODELO 2
*/

#include "stdio.h"
#include "stdlib.h"
main(){
      printf("ESTE EH UM PROGRAMA PARA ENTENDER O PROCESSO DE ORDENACAO 'BUBBLE SORT'.\nONDE SERA CRIADO UM VETOR, SOLICITADO OS VALORES QUE SERAO\nORDENADOS CONFORME REFERIDO PROCESSO!\n");
      system("pause");
      system("cls"); 
      int num_vetor;
      printf("Deseja um vetor de quantas posicoes?\n");
      scanf("%i",&num_vetor);
      int v[num_vetor], qtd_posicoes=num_vetor , posicao, trocou, aux,cont,rodada;
      for (posicao=0;posicao<=num_vetor-1;posicao++){
           printf("Entre com o valor da posi%c%co %i: \n",135,198,posicao);
           scanf("%i",&v[posicao]);
           printf("\n\n");
      } 
      printf("VALORES ATUAIS DO VETOR: \n");
      for (posicao=0;posicao<=num_vetor-1;posicao++){
           printf("Valor do vetor %i: %i\n",posicao,v[posicao]);
      }
      system("pause");
      
      do {
          for (rodada=1;rodada<=num_vetor-1;rodada++){
              printf("\n%i%c RODADA DE COMPARACOES: \n",rodada,166);
              qtd_posicoes--;
              trocou = 0;
              for(posicao = 0; posicao < qtd_posicoes; posicao++){
                 printf("\n\nAnalisando vetor[%i] X vetor[%i]",posicao,posicao+1);
                 printf("\n\n   %i eh maior que %i?\n\n",v[posicao],v[posicao+1]);
                 if(v[posicao] > v[posicao + 1]) {
                      printf("SIM!\nEntao sera trocado de posicao. Ficando assim:\n\n");
                      aux = v[posicao];
                      v[posicao] = v[posicao + 1];
                      v[posicao + 1] = aux;
                      trocou = 1;
                      for (cont=0;cont<=num_vetor-1;cont++)
                          printf("Valor do vetor %i: %i\n",cont,v[cont]);
                      system("pause");
                 }
                 else{
                     printf("NAO!!! Entao vetor permanece igual.\n\n");
                     for (cont=0;cont<=num_vetor-1;cont++)
                         printf("Valor do vetor %i: %i\n",cont,v[cont]);
                     system("pause");                 
                 }                 
                 system("cls");
                 printf("VETOR ATUALIZADO:\n");
                 for (cont=0;cont<=num_vetor-1;cont++)
                      printf("Valor do vetor %i: %i\n",cont,v[cont]);
              } 
          }
      }while(trocou==1);
      system("cls");
      printf("\n\n*****VETOR ORDENADO:*****\n\n");
                 for (cont=0;cont<=num_vetor-1;cont++)
                      printf("Valor do vetor %i: %i\n",cont,v[cont]);
      system("pause");
}
