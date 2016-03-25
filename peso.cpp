#include <stdio.h>
#include <stdlib.h>

main()
{
     float peso, maior=0, somap=0, contador=0, media;
     do{
     printf("Entre com o peso: ");
     scanf("%f",&peso);
     if (peso>60){
                 somap=somap+peso;
                 if(maior<peso){
                    maior=peso;
                    }
                 contador++;
                 }
    }while(peso>0);
    media=somap/contador;
    printf("Media aritimetica dos pesos das pessoas com mais de 60 kg: %.2f\n",media);
    printf("O peso do mais pesado e: %.2f", maior);
}
