#include<stdio.h>
#include<conio.h>

void main()
{
    int comp, alt, area;
    printf("\nEntre com a comprimento do retangulo: ");
    scanf("%d",&comp);
    printf("\nEntre com a altura do retangulo: ");
    scanf("%d",&alt);

    area = comp*alt;
    printf("\nA Area do retangulo eh: %d", area);
    getch();
}
