#include<stdio.h>
main()
{
	int m1[10][10], i, j, k, m2[10][10], mult[10][10], r1, c1, r2, c2;
	printf("Entre com o numero de linhas e colunas da primeira matriz:(meno de 10)\n ");
	scanf("%d %d", &r1, &c1);
	printf("Entre com o numero de linhas e colunas da segunda matriz:(meno de 10)\n ");
	scanf("%d %d", &r2, &c2);
	if(r2==c1)
	{
		printf("Entre com a linha e coluna da primeira matriz\n");
		printf("linha enfileirada\n");
		for(i=0;i<r1;i++)
		{
			for(j=0;j<c1;j++)
			{
				scanf("%d", &m1[i][j]);
			}
		}
		
		printf("A primeira matriz eh:\n");		
		for(i=0;i<r1;i++)
		{
			for(j=0;j<c1;j++)
			{
				printf("%d ", m1[i][j]);
			}
			printf("\n");
		}		
		printf("Entre com a linha e coluna da segunda matriz\n");
		printf("linha enfileirada\n");
		for(i=0;i<r2;i++)
		{
			for(j=0;j<c2;j++)
			{
				scanf("%d", &m2[i][j]);
			}
		}
		
		printf("A segunda matriz eh:\n");		
		for(i=0;i<r2;i++)
		{
			for(j=0;j<c2;j++)
			{
				printf("%d ", m2[i][j]);
			}
			printf("\n");
		}
		printf("A mutiplicacao das matrizes:\n");
		for(i=0;i<r1;i++)
		{
			for(j=0;j<c2;j++)
			{
				multi[i][j]=0;
				for(k=0;k<r1;k++)
				{
					mult[i][j]=m1[i][k]*m2[k][j];
					printf("%d ", multi[i][j]);
				}
			}
		printf("\n");
		}
	}
	else
	{
		printf("A multipicacao entre as matrizes naoh pode ser feita\n");
	}
	return 0;
}
	
