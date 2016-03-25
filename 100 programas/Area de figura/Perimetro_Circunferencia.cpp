#include<stdio.h>

void areaperi(int r, float *a, float *p)
{
	*a=3.14*r*r;
	*p=2*3.14*r;
}

main()
{
	int radius;
	float area, perimeter;
	
	printf("\nEntre com o raio do circulo: ");
	scanf("%d", &radius);
	areaperi(radius, &area, &perimeter);
	printf("Area do circulo = %f", area );
	printf("\nPerimetro do circulo = %f", perimeter );
	
}