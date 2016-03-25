#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void main()
{

	float radius, area;


	printf("\nEntre com o raio da circuferencia:- ");
	scanf("%f", &radius);

	area= 3.14*radius*radius;
	printf("\nA area da circuferencia: %.2f", area);

	getch();
}
