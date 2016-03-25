
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
void criarNovaConta(struct Conta []);
void depositoConta(struct Conta []);
void saqueConta(void);
void listarConta(struct Conta [] );

void inicializaConta(struct Conta []);
int  achaLivre(struct Conta []);
int existeConta(struct Conta[], int );


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
				criarNovaConta(contaCorrente);
				break;
			
			case 2:
				depositoConta(contaCorrente);
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
void criarNovaConta(struct Conta conta[])
{
	int numero;
	float saldo;
	char nome[45];

	int posicao;
	
	posicao = achaLivre(conta);
	
	if (posicao == -1 )
	{
		printf("\n --- Lista de Contas esta CHEIA ---");
		Sleep(3000);
		return ;
	}	
	
	
	printf("\n-- Entre com os dados da Conta numero , nome e saldo-- ");
	printf("\n numero da conta: ");
	scanf("%d", &numero);
	
	fflush(stdin); // limpar o buffer
	
	printf("\n nome do cliente: ");
	gets(nome);
	
	printf("\n saldo inicial: ");
	scanf("%f", &saldo);

	//atualizando os dados no vetor
	conta[posicao].numero = numero;
	strcpy(conta[posicao].nome, nome);
	conta[posicao].saldo = saldo;

	//mostrando se ok remover depois
	printf("#:%d -nome: %s  -  saldo: %f", conta[posicao].numero,conta[posicao].nome, conta[posicao].saldo);	
	printf("\nConta criado com sucesso!!");
	Sleep(3000);
	return ;	
}


//Faz deposito de valores na conta conrrente			
void depositoConta(struct Conta conta[])
{

	int numero;
	float deposito;
	
	int posicao;
	
	printf("\n-- Entre com os dados da conta -- ");
	printf("\n numero da conta: ");
	scanf("%d", &numero);
	
	fflush(stdin); // limpar o buffer
	
	if ( ( posicao = existeConta(conta, numero) ) == -1 )
	{
		printf("\n --- CONTA NAO EXISTE ---");
		Sleep(3000);
		return ;
	}
	
	printf("\n Entre com o valo do deposito: ");
	scanf("%f", &deposito);

	//mostrando o saldo antes do deposito 
	printf("Saldo atual: #:%d -nome: %s  -  saldo: %f", conta[posicao].numero,conta[posicao].nome, conta[posicao].saldo);	
	
	//atualizando saldo
	conta[posicao].saldo = conta[posicao].saldo + deposito;

	//mostrando o saldo depois do deposito 
	printf("Saldo atual: #:%d -nome: %s  -  saldo: %f", conta[posicao].numero,conta[posicao].nome, conta[posicao].saldo);	

	printf("depositando com sucesso!!!");
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

//retorna a primeira posicao do vetor Contas livre senao retorna -1 
int  achaLivre(struct Conta conta[])
{
	int posicao;

	printf("\nprocurando conta livre!!!");
	Sleep(3000);
	
	//percorre o vetor de conta testando
	for(posicao = 0;  conta[posicao].numero != 0 && posicao < MAX_CONTA; posicao++);

	//nao existe posicao vazia
	if ( posicao == MAX_CONTA)
		return -1;

	return posicao;
}

//retorna a posicao da numero da conta no vetor se nao existir
// retorna -1
int existeConta(struct Conta conta[], int numeroContaCorrente)
{
	int posicao;
	
	for(posicao = 0;  conta[posicao].numero != numeroContaCorrente && posicao < MAX_CONTA; posicao++);

	//nao existe posicao vazia
	if ( posicao == MAX_CONTA)
		return -1;

	return posicao;

}