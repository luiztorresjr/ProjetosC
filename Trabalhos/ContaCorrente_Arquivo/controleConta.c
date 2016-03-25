// Programa saldo bancário 
// cria novas contas com acesso randômico um arquivo binario, 
// atualiza os dados já escritos no arquivo, 
// e deleta dados existintes no arquivo.
// criado por naur baseado em Deitel Deitel

#include <stdio.h>
#include <conio.h>
#include <windows.h>

// definicao da struct ClienteConta              
struct ClienteConta {                              
	int numConta; // numero da conta
	char nome[ 45 ]; // nome da conta     
	double saldo; // saldo da conta            
}; // final da structura ClienteConta                   

void novaConta();
void depositoConta();
void saqueConta();

void arquivo2Texto(); //relatorio ou listagem
void removeConta();
void atualizaNomeConta();

void inicializaArquivo( void );

// chama a funcao inicializa para criar o arquivo
// monta o menu de opcoes para chamar a funcao
int main( void )
{ 
	int opcao; // opcao do usuario

	inicializaArquivo();
	
	//Desenha o menu de opcao
	system("cls");
	printf("\n\n\tEntre com a opcao");
	printf("\n 1 - Criar Novo Conta");
	printf("\n 2 - Deposito na Conta");
	printf("\n 3 - Saque da Conta");
	printf("\n 4 - Listar Contas");
	printf("\n 5 - Alterar Nome Contas");
	printf("\n 6 - Remover Conta");
	printf("\n 7 - Sair");
	printf("\nopcao: ");
	scanf("%d",&opcao);

	while ( opcao != 7 ) { 
		switch ( opcao ) { 
			case 1:
				novaConta();   //cria nova conta
				break;	

			case 2:
				depositoConta();  //deposita na conta
				break;	

			case 3:
				saqueConta();     //saque na conta
				break;

			case 4:	
				arquivo2Texto();   //relatorio para arquivo/tela
				break;

			case 5:
				atualizaNomeConta();
				break;

			case 6:
				removeConta();
				break;
				// mostra mensagem se usuario selecionou opcao invalida

			default:
				   puts( "Opcao invalida 1 a 7" );
				   break;
		} // fim switch
			//Desenha o menu de opcao
		system("cls");
		printf("\n\n\tEntre com a opcao");
		printf("\n 1 - Criar Novo Conta");
		printf("\n 2 - Deposito na Conta");
		printf("\n 3 - Saque da Conta");
		printf("\n 4 - Listar Contas");
		printf("\n 5 - Alterar Nome Contas");
		printf("\n 6 - Remover Conta");
		printf("\n 7 - Sair");
		printf("\nopcao: ");
		scanf("%d",&opcao);

	} // fim while

} // fim main

void novaConta( ){

	printf("nova conta" );
	Sleep(3000);

}
void depositoConta( ){

	printf("deposito conta" );
	Sleep(3000);

}

void saqueConta( ){

	printf("saque conta" );
	Sleep(3000);

}

void arquivo2Texto( ){

	printf("listagem conta" );
	Sleep(3000);

}

void removeConta( ){

	printf("remove conta" );
	Sleep(3000);

}

void atualizaNomeConta(  ){

	printf("atualiza conta" );
	Sleep(3000);
	return ;

}

void inicializaArquivo( void ){

	
	printf("inicializa arquivo" );
	Sleep(3000);
	return ;
   	
}