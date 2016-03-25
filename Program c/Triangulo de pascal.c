#include <stdio.h>
long fact(int);

long fact(int num)
{
		long f=1;
		int i=1;
		while(i<=num)
		{
			f=f*i;
			i++;
		}
		return f;
}
	

int main()
{
	int line, i, j;
	printf("Entre com o numero de linhas: ");
	scanf("%d", &line);
	for(i=0;i<line;i++)
	{
		for(j=0;j<line;j++)
		{
			printf(" ");
		{
		for(j=0;j<i;j++)
		{
			printf("%d", fact(i)/(fact(j)*fact(i-j)));
			printf("\n");
		}
	}
}

