
/**
	Programa de controle de conta corrente em C
	com vetores.
	
	criado em 14/04/2014
	por naur jr
	
**/

//bibliotecas
#include <conio.h>
#include <stdio.h>


//funcoes crias prototipos
void criarNovaConta(void);
void depositoConta(void);
void saqueConta(void);
void listarConta(void);


int main()
{
	int ops;
		
	//Desenha o menu de opcao
	system("cls");
	printf("\n\n\tEntre com a opcao");
	printf("\n 1 - Criar Nova Conta");
	printf("\n 2 - Realizar Deposito");
	printf("\n 3 - Relizar Saque (retirada)");
	printf("\n 4 - Listar Contas");
	printf("\n 5 - Sair");
	printf("\nopcao: ");
	scanf("%d",&ops);
	
	while ( ops != 5 )
	{
		
		switch( ops  ) 
		{	
			case 1:
				criarNovaConta();
				break;
			
			case 2:
				depositoConta();
				break;
			
			case 3:
				saqueConta();
				break;
				
			case 4: 
				listarConta();
				break;
		
			default :
				printf("\nOpcao Invalida -- Digite qq tecla para continuar");
				getch();
		}
		
		system("cls");
		printf("\n\n\tEntre com a opcao");
		printf("\n 1 - Criar Nova Conta");
		printf("\n 2 - Realizar Deposito");
		printf("\n 3 - Relizar Saque (retirada)");
		printf("\n 4 - Listar Contas");
		printf("\n 5 - Sair");
		printf("\nopcao: ");
		scanf("%d",&ops);
	
	} //fim while

	printf("\nFinalizando o programa -- Digite qq tecla para sair");
	getch(); // parar a tela
	
    return 0;
}


//cria uma novo conta corrente no vetor
void criarNovaConta(void){
	
	printf(")
}


//Faz deposito de valores na conta conrrente			
void depositoConta(void){
	
}

//Realiza retirada da conta corrente
void saqueConta(void){

}
				
//Lista todas as contas correntes pro ordem no vetor
void listarConta(void){


}

