
/**
	Programa de exemplo de controle de Conta Corrente em C
	com vetores. Funcionalidades:
		- criar novo conta
		- remover conta
		- deposito (deposito de dinheiro)
		- saque (retirada de dinheiro)
		- listar todas as contas
	
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
void criarNovaConta(struct Conta []);    //cria um nova conta corrente
void depositoConta(struct Conta []);     // realizada um deposito na conta e com valor especificado pelo usuario 
void saqueConta(struct Conta []);		 // realizada um saque (retirada) na conta e com valor especificado pelo usuario 
void listarConta(struct Conta [] );     
void removerConta(struct Conta [] );
void pesquisContaNome(struct Conta[]);

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
	printf("\n 5 - Remover Conta");
	printf("\n 6 - Pesquisa Conta por Nome");
	printf("\n 7 - Sair");
	printf("\nopcao: ");
	scanf("%d",&ops);
	
	while ( ops != 7 )
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
				saqueConta(contaCorrente);
				break;
				
			case 4: 
				listarConta(contaCorrente);
				break;
			
			case 5: 
				removerConta(contaCorrente);
				break;
			
			case 6:
				pesquisContaNome(contaCorrente);
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
		printf("\n 5 - Remover Conta");
		printf("\n 6 - Pesquisa Conta por Nome");
		printf("\n 7 - Sair");
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
	
	//verifica se existe especao no vetor para criar nova conta
	posicao = achaLivre(conta);

	if (posicao == -1 )
	{
		printf("\n --- Lista de Contas esta CHEIA ---");
		printf("\n --- Comece uma nova operacao ---");
		Sleep(3000);
		return ;
	}	
	
	
	printf("\n-- Entre com os dados da Conta numero , nome e saldo-- ");
	printf("\n numero da conta: ");
	scanf("%d", &numero);

	
	//verifica que existe UMA conta com este numero
	if ( existeConta(conta, numero) != -1 )
	{
		printf("\n --- JA EXISTE UMA CONTA COMO ESTE NUMERO ---");
		printf("\n --- Comece uma nova operacao ---");
		Sleep(3000);
		return ;
	}

	
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
	printf("#:%d -nome: %s  -  saldo: %.2f", conta[posicao].numero,conta[posicao].nome, conta[posicao].saldo);	
	printf("\n\nCONTA CRIADA COM SUCESSO!!");
	Sleep(3000);
	return ;	
}


// realizada um deposito na conta e com valor especificado pelo usuario
void depositoConta(struct Conta conta[])
{

	int numero;
	float deposito;
	
	int posicao;
	
	printf("\n-- Entre com os dados da conta -- ");
	printf("\n numero da conta: ");
	scanf("%d", &numero);
	
	if ( ( posicao = existeConta(conta, numero) ) == -1 )
	{
		printf("\n --- CONTA NAO EXISTE ---");
		Sleep(3000);
		return ;
	}
	
	printf("\n Entre com o valo do deposito: ");
	scanf("%f", &deposito);

	//mostrando o saldo antes do deposito 
	printf("\n\nSaldo atual: #:%d -nome: %s  -  saldo: %.2f\n", conta[posicao].numero,conta[posicao].nome, conta[posicao].saldo);	
	
	//atualizando saldo
	conta[posicao].saldo = conta[posicao].saldo + deposito;

	//mostrando o saldo depois do deposito 
	printf("\n\nSaldo atual: #:%d -nome: %s  -  saldo: %.2f", conta[posicao].numero,conta[posicao].nome, conta[posicao].saldo);	

	printf("\n\nDEPOSITO REALIZADO COM SUCESSO!!!");
	Sleep(3000);
	
	return ;
}

//Realiza retirada da conta corrente informada pelo
// usuario um valor tambem informado pelo usuario.
// verifica se que saldo nao pode ficar negativo.
void saqueConta(struct Conta conta[])
{

	int numero;
	float saque;
	
	int posicao;
	
	printf("\n-- Entre com os dados da conta -- ");
	printf("\n numero da conta: ");
	scanf("%d", &numero);
	
	if ( ( posicao = existeConta(conta, numero) ) == -1 )
	{
		printf("\n --- CONTA NAO EXISTE ---");
		Sleep(3000);
		return ;
	}
	
	printf("\n Entre com o valor do saque(retirada): ");
	scanf("%f", &saque);
	
	if ( conta[posicao].saldo - saque < 0)
	{
		printf("\n --- SALDO FICARA NEGATIVO. FACA COM UM NOVO VALOR ---");
		Sleep(3000);
		return ;
	}
	
	//mostrando o saldo antes do deposito 
	printf("\n\nSaldo atual: #:%d -nome: %s  -  saldo: %.2f", conta[posicao].numero,conta[posicao].nome, conta[posicao].saldo);	
	
	//atualizando saldo
	conta[posicao].saldo = conta[posicao].saldo - saque;

	//mostrando o saldo depois do deposito 
	printf("\n\nSaldo atual: #:%d -nome: %s  -  saldo: %.2f", conta[posicao].numero,conta[posicao].nome, conta[posicao].saldo);	

	printf("\n\nSAQUE REALIZADO COM SUCESSO!!!");
	Sleep(3000);
	
	return ;
}
				
//Lista todas as contas correntes pro ordem no vetor
void listarConta(struct Conta conta[])
{
	int i;
	
	printf("\n --- Listando CONTAS --- ");
	
	for(i= 0; i <= MAX_CONTA - 1 ; i++)
	{
		printf("\n\n numero: %d", conta[i].numero);
		printf("\n nome: %s", conta[i].nome);
		printf("\n saldo: %.2f", conta[i].saldo);
	}

	printf("\n\nlistagem com sucesso!!!");
	Sleep(3000);

	
	return ;

}

void removerConta(struct Conta conta[] )
{
	int numero;     //numero da conta
	int posicao;    // indica a posicao no vetor que a conta esta

	char opcao; 	// opcao para remocao	
	
	printf("\n-- Entre com os dados da conta para ser REMOVIDA -- ");
	printf("\n numero da conta: ");
	scanf("%d", &numero);
	
	if ( ( posicao = existeConta(conta, numero) ) == -1 )
	{
		printf("\n --- CONTA NAO EXISTE ---");
		Sleep(3000);
		return ;
	}

	//mostrando o saldo depois do deposito 
	printf("\n\nSaldo atual: #:%d -nome: %s  -  saldo: %f", conta[posicao].numero,conta[posicao].nome, conta[posicao].saldo);	

	//entre apenas com s ou n
	printf("\n Confirma remocao desta conta(s/n):  ");
	scanf("%d", &opcao);
	
	//verifica se o usuario digitou n ou N
	if ( opcao == 'n' ||  opcao == 'N' )
	{
		printf("\n --- REMOCAO DA CONTA FOI CANCELADA ---");
		Sleep(3000);
		return ;
	}	

	conta[posicao].numero = 0;
	conta[posicao].nome[0] = '\0';
	conta[posicao].saldo = 0.00;

	fflush(stdin); // limpar o buffer

	printf("\n --- REMOCAO DA CONTA FOI REALIZADA COM SUCESSO! ---");
	Sleep(3000);
	return ;

}

void pesquisContaNome(struct Conta conta[])
{
	int i;
	char nome[45];

	fflush(stdin); // limpar o buffer

	printf("\n -- PESQUISA CONTAS PELO NOMES -- ");
	printf("\n Entre com o nome ou parte: ");
	gets(nome);

	fflush(stdin); // limpar o buffer
	
	for(i= 0; i <= MAX_CONTA - 1 ; i++)
	{
		//mostra os que tenham  mesmo nome digitado e guardado em nome
		if (!strncmp(conta[i].nome,nome,strlen(nome)))
		{
			printf("\n\n#:%d -nome: %s  -  saldo: %.2f", conta[i].numero,conta[i].nome, conta[i].saldo);	
		}
	}

	printf("\n Pequisa realizada com SUCESSO!!!");
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