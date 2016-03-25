#include <stdio.h>
main()
{
	int n, reverse=0;
	printf("Entre com um numero para inverter: ");
	scanf("%d", &n);
	while(n!=0)
	{
		reverse=reverse*10;
		reverse=reverse+n%10;
		n=n/10;
	}
	printf("O inverso do numero digitato eh: %d\n",reverse);
	return 0;
}
