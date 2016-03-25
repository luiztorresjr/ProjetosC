#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int main()
{
	int i, j=2, ch=0;
	//clrscr();
	printf("\nEntre com qualquer numero: ");
	scanf("%d", &i);
	while(j<=i/2)
	{
		if(i%j==0)
		{
			printf("%d nao eh o primeiro\n",i);
			ch=1;
			break;
		}
		else
		{
			j++;
		}
	}
	if(ch==0)
	{
		printf("%d eh o primeiro\n",i);
	}
	system("pause");
}
