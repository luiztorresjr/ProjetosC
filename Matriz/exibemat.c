#include <stdio.h>
#include <stdlib.h>

void main(void)
{
	int notas[5] = {80, 70, 90, 85, 80};
	int i;
	
	printf("Valores da Matriz\n");
	for(i = 0; i < 5; i++){
		printf("notas[%d] %d\n",i, notas[i]);
	}
	system("pause");
}
