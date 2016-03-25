/*
15-09-2014 programa 320
programa para corrigir texto
*/
#include <stdio.h>
#include <stdlib.h>

void menu (void)
{
	char ch;	
	printf("1. Checar Ortografia\n");
	printf("2. Corrigir erros de Ortografia\n");
	printf("3. Mostrar Erros de Ortografia\n");
	printf("Pressionar Qualquer Outra Tecla para Abandonar\n");
	printf("    Entre com sua escolha:    ");
	
	ch = getchar(); //lê do teclado a seleção
	
	switch(ch)
	{
		case '1':
			check_spelling();
			break;
		case '2':
			correct_errors();
			break;
		case '3':
			display_errors();
			break;
		default:
			printf("Nenhuma opcao selecionada");
	}
}
