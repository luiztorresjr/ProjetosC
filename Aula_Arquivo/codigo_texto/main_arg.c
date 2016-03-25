
#include <stdio.h>
#include <stdlib.h>

int main( int argc, char *argv[])
{

	int i;
		
	if ( argc < 3 )
	{
		printf("faltando argumentos");
		return 0;
    }		
	
	printf("\n\n");

	for( i = 0 ; i < argc ; i++)
		printf("O argumentos %d:   %s \n", i, argv[i]);
	
	return 0;


}
