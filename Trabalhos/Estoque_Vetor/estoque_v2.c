
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

#define MAX_PRODUTO 20

struct Produto {
	
	int codigo;
	char nome[45];
	float preco_v;
	int qtd;

};


//funcoes crias prototipos
void criarNovoProduto(struct Produto []);
void entrada(void);
void saida(void);
void listarEstoque(struct Produto []);
void inicializaProduto(struct Produto []);


int main()
{
	int ops;

	struct Produto produto[MAX_PRODUTO];

	inicializaProduto(produto);
	
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
				criarNovoProduto(produto);
				break;
			
			case 2:
				entrada();
				break;
			
			case 3:
				saida();
				break;
				
			case 4: 
				listarEstoque(produto);
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
void listarEstoque(struct Produto p[]){

	int i;
	
	printf("Listando os produtos");
	
	for(i= 0; i <= MAX_PRODUTO - 1 ; i++)
	{
		printf("\n codigo: %d", p[i].codigo);
		printf("\n nome: %s", p[i].nome);
		printf("\n preco venda: %.2f", p[i].preco_v);
		printf("\n qtd atual: %.2f", p[i].qtd);
	}

	printf("\nlistagem com sucesso!!!");
	Sleep(3000);

	
	return ;

}

void inicializaProduto(struct Produto p[])
{
	int i; 
	
	//percorre o vetor de conta inicializando nome vazio '\0' e num = 0 e saldo 0
	for(i= 0; i <= MAX_PRODUTO - 1 ; i++)
	{
		p[i].codigo = 0;
		p[i].nome[0] = '\0';
		p[i].preco_v = 0.0;
		p[i].qtd = 0;
	}

	printf("\ninicializado as contas com sucesso!!!");
	Sleep(3000);
	
	return ;
}
