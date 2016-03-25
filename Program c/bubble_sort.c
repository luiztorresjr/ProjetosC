#include<stdio.h>
void bubble_sort(long[], long);
int main()
{
	long array [100], n, c, d, swap;
	printf("Entre como o numero de elementos: ");
	scanf("%ld",&n);
	printf("Entre com os %ld elementos\n",n);
	for(c=0;c<n;c++)
	{
		scanf("%ld",&array[c]);
		bubble_sort(array,n);
		printf("Lista em ordem crescente:n");
	}
		for(c=0;c<n;c++)
		{
			printf("%ld\n", array[c]);
			return 0;
		}
}
	void bubble_sort(long list[], long n)
	{
		long c, d, t;
		for(c=0;c<(n-1);c++)
		{
			for(d=0; d<n-c; d++)
			{
				if(list[d]>list[d+1])
				{
					t=list[d];
					list[d]=list[d+1];
					list[d+1]=t;
				}
			}
		}
	}


