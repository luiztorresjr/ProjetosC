#include<stdio.h>

int main()
{

	int rad;
	float PI=3.14, area, ci;

	printf("\nEntre com o raio da circuferencia:- ");
	scanf("%d", &rad);

	area= PI*rad*rad;
	printf("\nA area da circuferencia: %.2f", area);

	ci=2*PI*rad;
	printf("\nA circunferienca eh de: %.2f", ci);

	return(0);
}
