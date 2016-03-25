#include <stdio.h>
#include <conio.h>

void knapsack(int n, float weight[], float profit[], float capacity)
{
		float x[20], tp=0;
		int i, j,u;
		u=capacity;
		
		for(i=0;i<n;i++)
		{
			x[i]=0.0;
		}
		for(i=0;i<n;i++)
		{
			if(weight[i]>u)
				break;
			else
			{
				x[i]=1.0;
				tp= tp+profit[i];
				u=u-weight[i];
			}
		}
		if(i<n)
			x[i]=u/weight[i];
		tp=tp+(x[i]*profit[i]);
		printf("\n O resultado do vetor eh:- ");
		for(i=0;i<n;i++)
			printf("%f\t",x[i]);
		printf("O maximo profit eh:- %f",tp);
}

main()
{
	float weight[20], profit[20], capacity;
	int n, i, j;
	float ratio[20], temp;
	//clrscr();
	
	printf("Entre com o nº de objetos:- ");
	scanf("%d", &n);
	printf("Entre como tamanho e proft dos objetos:- ");
	scanf("%f %f", &weight, &profit[i]);
	printf("Entre com a capaciadade do knapsack:- ");
	scanf("%f", &capacity);
	for(i=0;i<n; i++)
	{
		for(j=i+1; j<n; j++)
		{
			if(ratio[i]<ratio[j])
			{	
				temp=ratio[j];
				ratio[j]= ratio[i];
				ratio[i]=temp;
				
				temp=weight[j];
				weight[j]= weight[i];
				weight[i]=temp;
				
				temp=profit[j];
				profit[j]=profit[i];
				profit[i]=temp;
			}
		}	
	}
	knapsack(n, weight, profit, capacity);
	getch();
}
	
		
		
		