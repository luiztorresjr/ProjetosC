#include<stdio.h>
#include<conio.h>

void main()
{
	int a, b, c, i, n;
	a=1;
	b=1;
	printf("\n Entre com o numero de vezes para gerar a serie: ");
	scanf("%d",&n);
	printf("\nSerie FIBONACCI\n");
	printf("%d %d",a,b);
	for(i=0;i<n;i++)
	{
		c=a+b;
		a=b;
		b=c;
		printf(" %d",c);
	}
	getch();
}

