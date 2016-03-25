
/**
	Programa de controle de estoque em C
	com vetores.
	
	criado em 24/04/2014
	por naur jr
	
**/

//bibliotecas
#include <conio.h>
#include <stdio.h>
#include <windows.h>

//funcoes crias prototipos
void criarNovoProduto(void);
void entrada(void);
void saida(void);
void listarEstoque(void);


int main()
{
	int ops;
		
	//Desenha o menu de opcao
	system("cls");
	printf("\n\n\tEntre com a opcao");
	printf("\n 1 - Criar Novo Produto");
	printf("\n 2 - Entrada de Produto");
	printf("\n 3 - Saida de Produto");
	printf("\n 4 - Listar Produtoas");
	printf("\n 5 - Sair");
	printf("\nopcao: ");
	scanf("%d",&ops);
	
	while ( ops != 5 )
	{
		
		switch( ops  ) 
		{	
			case 1:
				criarNovoProduto();
				break;
			
			case 2:
				entrada();
				break;
			
			case 3:
				saida();
				break;
				
			case 4: 
				listarEstoque();
				break;
		
			default :
				printf("\nOpcao Invalida -- Digite qq tecla para continuar");
				getch();
		}
		
		system("cls");
		printf("\n\n\tEntre com a opcao");
		printf("\n 1 - Criar Novo Produto");
		printf("\n 2 - Entrada de Produto");
		printf("\n 3 - Saida de Produto");
		printf("\n 4 - Listar Produtoas");
		printf("\n 5 - Sair");
		printf("\nopcao: ");
		scanf("%d",&ops);
	
	} //fim while

	printf("\nFinalizando o programa -- Digite qq tecla para sair");
	getch(); // parar a tela
	
    return 0;
}


//cria uma novo conta corrente no vetor
void criarNovoProduto(void){
	
	printf("novo produto" );
	Sleep(3000);
	
	
}


//Faz deposito de valores na conta conrrente			
void entrada(void){
	
	printf("enttada" );
	Sleep(3000);
	
}

//Realiza retirada da conta corrente
void saida(void){

	printf("saida" );
	Sleep(3000);
}
				
//Lista todas as contas correntes pro ordem no vetor
void listarEstoque(void){

	printf("listar" );
	Sleep(3000);


}

