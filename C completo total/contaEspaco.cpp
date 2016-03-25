/*
15-09-2014 programa 326
programa para contar espaço
*/
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	char s[80], *str;
	int space;
	
	printf("Digite uma string: ");
	gets(s);
	str = s;
	
	for( space = 0; *str; str++){
		if(*str !=' ') continue;
		space++;
	}
	printf("%d espacos\n", space);
}

