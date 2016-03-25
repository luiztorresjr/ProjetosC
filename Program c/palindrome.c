#include<stdio.h>
#include<string.h>

main()
{
	char a[100], b[100];
	printf("Entre com a string para checar se eh uma palindrome\n");
	gets(a);
	strcpy(b,a);
	strrev(b);
	if( strcmp(a,b) == 0)
	{
		printf("A string eh um palindrome\n");
	}
	else
		printf("A string naoh eh um palindrome\n");
	return 0;
}
