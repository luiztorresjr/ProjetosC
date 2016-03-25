#include<stdio.h>
#include<conio.h>
void main()
{
	int base, altura;
	float area;
	
	printf("\nEntre com o tamanho da base do triangulo: ");
	scanf("%d",&base);
	printf("\nEntre com a altura do triangulo: ");
	scanf("%d",&altura);
	
	area = 0.5*base*altura;
	
	printf("\n A are do tringulo eh: %.2f", area);
	getch();
	
}
	