
/**
	Programa de controle de conta corrente em C
	com vetores.
	
	criado em 14/04/2014
	por naur jr
	
**/

//bibliotecas
#include <conio.h>
#include <stdio.h>
#include <windows.h> //Sleep

#define MAX_CONTA 10

struct Conta{
	int numero;
	char nome[45];
	float saldo;
};


//funcoes crias prototipos
void criarNovaConta(void);
void depositoConta(void);
void saqueConta(void);
void listarConta(struct Conta [] );

void inicializaConta(struct Conta []);


int main()
{
	int ops;

	struct Conta contaCorrente[MAX_CONTA];

	inicializaConta(contaCorrente);
	
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
				listarConta(contaCorrente);
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
	getch();
	
    return 0;
}


//cria uma novo conta corrente no vetor
//(1) verifica se tem posicao no vetor
// le dados e salva
void criarNovaConta(void){


	printf("criando conta");
	Sleep(3000);
	return ;	
}


//Faz deposito de valores na conta conrrente			
void depositoConta(void){

	printf("depositando em conta");
	Sleep(3000);
	
	return ;
}

//Realiza retirada da conta corrente
void saqueConta(void){

	printf("saque em conta");
	Sleep(3000);
	
	return ;
}
				
//Lista todas as contas correntes pro ordem no vetor
void listarConta(struct Conta conta[])
{
	int i;
	
	printf("Listando as contas");
	
	for(i= 0; i <= MAX_CONTA - 1 ; i++)
	{
		printf("\n numero: %d", conta[i].numero);
		printf("\n nome: %s", conta[i].nome);
		printf("\n saldo: %.2f", conta[i].saldo);
	}

	printf("\nlistagem com sucesso!!!");
	Sleep(3000);

	
	return ;

}

void inicializaConta(struct Conta conta[])
{
	int i; 
	
	//percorre o vetor de conta inicializando nome vazio '\0' e num = 0 e saldo 0
	for(i= 0; i <= MAX_CONTA - 1 ; i++)
	{
		conta[i].numero = 0;
		conta[i].nome[0] = '\0';
		conta[i].saldo = 0.00;
	}

	printf("\ninicializado as contas com sucesso!!!");
	Sleep(3000);
	
	return ;
}
