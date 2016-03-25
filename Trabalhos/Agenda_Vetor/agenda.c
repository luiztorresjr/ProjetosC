
/**
	Programa de exemplo monta uma Agenda de contatos/Amigos em C
	com vetores. Funcionalidades:
		- criar novo amigo
		- remover amigo
		- pesquisar amigo por nome (iniciais)
		- alterar dados do amigo
		- listar todas amigos
	
	criado em 15/05/2014
	por naur jr
	
**/

//bibliotecas
#include <conio.h>
#include <stdio.h>
#include <windows.h> //Sleep

#define MAX_AMIGO 5
struct Amigo{
	int codigo;
	char nome[45];
	char celular[15];  // formato (dd)xxxxx-xxxx
	char email[50];
	char dataNascimento[11];   //formato dd/mm/yyyy
	
};


//funcoes crias prototipos
void criarNovoAmigo(struct Amigo []);    //cadastro novo amigo
void listarAmigo(struct Amigo [] );      // lista todos os amigos
void removerAmigo(struct Amigo [] );       // remove especifico amigo
void pesquisarAmigoNome(struct Amigo[]);     // pesquisa amigos que comecam com 
void alterarAmigo(struct Amigo[]);           // altera dados do amigo

void inicializaAgenda(struct Amigo []);        // inicializa agenda com vazio
int  achaLivre(struct Amigo []);               // acha a primeira posicao livre da agenda
int existeAmigo(struct Amigo[], int );         // verifica se existe o amigo ja cadastrado codigo


int main()
{
	int ops;

	struct Amigo agenda[MAX_AMIGO];

	inicializaAgenda(agenda);
	
	//Desenha o menu de opcao
	system("cls");
	printf("\n\n\tEntre com a opcao");
	printf("\n 1 - Criar Novo Amigo(a)");
	printf("\n 2 - Listar Amigos(as)");
	printf("\n 3 - Remover Amigo(a)");
	printf("\n 4 - Pesquisar Amigo(a) por nome");
	printf("\n 5 - Alterar dados do Amigo(a)");
	printf("\n 6 - Sair");
	printf("\nopcao: ");
	scanf("%d",&ops);
	
	while ( ops != 6 )
	{
		
		switch( ops  ) 
		{	
			case 1:
				criarNovoAmigo(agenda);
				break;
			
			case 2:
				listarAmigo(agenda);
				break;
			
			case 3:
				removerAmigo(agenda);
				break;
				
			case 4: 
				pesquisarAmigoNome(agenda);
				break;
			
			case 5: 
				alterarAmigo(agenda);
				break;
			
			default :
				printf("\nOpcao Invalida -- Digite qq tecla para continuar");
				getch();
		}
		
		system("cls");
		printf("\n\n\tEntre com a opcao");
		printf("\n 1 - Criar Novo Amigo(a)");
		printf("\n 2 - Listar Amigos(as)");
		printf("\n 3 - Remover Amigo(a)");
		printf("\n 4 - Pesquisar Amigo(a) por nome");
		printf("\n 5 - Alterar dados do Amigo(a)");
		printf("\n 6 - Sair");
		printf("\nopcao: ");
		scanf("%d",&ops);
	
	} //fim while

	printf("\nFinalizando o programa -- Digite qq tecla para sair");
	getch();
	
    return 0;
}


//cria uma novo contato no vetor
//(1) verifica se tem posicao no vetor
// le dados e salva
void criarNovoAmigo(struct Amigo ag[])
{

	int codigo;
	char nome[45];
	char celular[15];  // formato (dd)xxxxx-xxxx
	char email[50];
	char dataNascimento[11];   //formato dd/mm/yyyy

	int posicao;
	
	//verifica se existe especao no vetor para criar nova conta
	posicao = achaLivre(ag);

	if (posicao == -1 )
	{
		printf("\n --- AGENDA esta CHEIA ---");
		printf("\n --- Comece uma nova operacao ---");
		Sleep(3000);
		return ;
	}	
	
	
	printf("\n-- Entre com os dados do Amigo(a) codigo , nome, celular...-- ");
	printf("\n codigo da conta: ");
	scanf("%d", &codigo);

	
	//verifica que existe UMA conta com este codigo
	if ( existeAmigo(ag, codigo) != -1 )
	{
		printf("\n --- JA EXISTE UM AMIGO(A) COMO ESTE CODIGO ---");
		printf("\n --- Comece uma nova operacao ---");
		Sleep(3000);
		return ;
	}

	
	fflush(stdin); // limpar o buffer
	
	printf("\n Nome: ");
	gets(nome);

	printf("\n Celular( (dd)xxxxx-xxxx ): ");
	gets(celular);

	printf("\n Email: ");
	gets(email);

	printf("\n Data Nascimento(dd/mm/yyyy): ");
	gets(dataNascimento);

	
	//atualizando os dados no vetor
	ag[posicao].codigo = codigo;
	strcpy(ag[posicao].nome, nome);
	strcpy(ag[posicao].celular, celular);
	strcpy(ag[posicao].email, email);
	strcpy(ag[posicao].dataNascimento, dataNascimento);

	//mostrando se ok 
	printf("#:%d -nome: %s  - celular: %s - email: %s - data nasc.: %s", ag[posicao].codigo,ag[posicao].nome, ag[posicao].celular, ag[posicao].email, ag[posicao].dataNascimento);	
	printf("\n\nAMIGO(A) CRIADO COM SUCESSO!!");
	Sleep(3000);
	return ;	
}

//Lista todas os amigos da agenda por ordem no vetor
void listarAmigo(struct Amigo ag[])
{
	int i;
	
	printf("\n --- Listando AGENDA --- ");
	
	for(i= 0; i <= MAX_AMIGO - 1 ; i++)
	{
		printf("\n\n codigo: %d", ag[i].codigo);
		printf("\n nome: %s", ag[i].nome);
		printf("\n celular: %s", ag[i].celular);
		printf("\n email: %s", ag[i].email);
		printf("\n data nascimento: %s", ag[i].dataNascimento);
		
	}

	printf("\n\nlistagem com sucesso!!!");
	Sleep(3000);
	
	return ;
}

//Remove um amigo(a) da agenda a partir do codigo
void removerAmigo(struct Amigo ag[] )
{
	int codigo;     //codigo de um amigo 
	int posicao;    // indica a posicao no vetor que o amigo(a) esta

	char opcao; 	// opcao para remocao	
	
	printf("\n-- Removendo o amigo(a)  -- ");
	printf("\n codigo do amigo(a): ");
	scanf("%d", &codigo);
	
	if ( ( posicao = existeAmigo(ag, codigo) ) == -1 )
	{
		printf("\n --- AMIGO(A) NAO EXISTE ---");
		Sleep(3000);
		return ;
	}

	//mostrando o dados do amigo antes da remocao 
	printf("#:%d -nome: %s  - celular: %s - email: %s - data nasc.: %s", ag[posicao].codigo,ag[posicao].nome, ag[posicao].celular, ag[posicao].email, ag[posicao].dataNascimento);	

	//entre apenas com s ou n
	printf("\n Confirma remocao deste amigo(s/n):  ");
	scanf("%d", &opcao);
	
	//verifica se o usuario digitou n ou N
	if ( opcao == 'n' ||  opcao == 'N' )
	{
		printf("\n --- REMOCAO DO AMIGO(A) FOI CANCELADA ---");
		Sleep(3000);
		return ;
	}	

	ag[posicao].codigo = 0;
	ag[posicao].nome[0] = '\0';
	ag[posicao].celular[0] = '\0';
	ag[posicao].email[0] = '\0';
	ag[posicao].dataNascimento[0] = '\0';

	fflush(stdin); // limpar o buffer

	printf("\n --- REMOCAO DO AMIGO(A) FOI REALIZADO COM SUCESSO! ---");
	Sleep(3000);
	return ;

}

//Pequisa um amigo existente na agenda pelo nome
// a busca pela o que foi digitado. Se digitar an poderá retorna
// uma lista de amigos(se existir) por exemplo: ana , anabela, ana maria, ana julia
void pesquisarAmigoNome(struct Amigo ag[])
{
	int i;
	char nome[45];

	fflush(stdin); // limpar o buffer

	printf("\n -- PESQUISA AMIGO(A) PELO NOMES -- ");
	printf("\n Entre com o nome ou parte do nome: ");
	gets(nome);

	for(i= 0; i <= MAX_AMIGO - 1 ; i++)
	{
		//mostra os que tenham  mesmo nome digitado e guardado em nome
		if (!strncmp(ag[i].nome,nome,strlen(nome)))
		{
			printf("#:%d -nome: %s  - celular: %s - email: %s - data nasc.: %s", ag[i].codigo,ag[i].nome, ag[i].celular, ag[i].email, ag[i].dataNascimento);	
		}
	}

	printf("\n Pequisa realizada com SUCESSO!!!");
	Sleep(3000);
	
	return ;
}

//Realiza a alteracao dos dados de um amigo(a)
// O codigo nao pode ser alterado (chave de identificao) 
// caso o usuario nao queira alterar algum dado basta digitar enter.
// e sera mantido o dado originar
void alterarAmigo(struct Amigo ag[])
{

	int codigo;
	char nome[45];
	char celular[15];  // formato (dd)xxxxx-xxxx
	char email[50];
	char dataNascimento[11];   //formato dd/mm/yyyy

	int posicao;
	
	//inicializa as variaveis com vazio 
	nome[0] = '\0';
	celular[0] = '\0';
	email[0] = '\0';
	dataNascimento[0] = '\0';
	
	printf("\n-- Altercao dos dados do AMIGO(A) -- ");
	printf("\n codigo do amigo(a): ");
	scanf("%d", &codigo);
	
	if ( ( posicao = existeAmigo(ag, codigo) ) == -1 )
	{
		printf("\n --- AMIGO(A) NAO EXISTE ---");
		Sleep(3000);
		return ;
	}
	
	//Mostra os dados atuais
	printf("#:%d -nome: %s  - celular: %s - email: %s - data nasc.: %s", ag[posicao].codigo,ag[posicao].nome, ag[posicao].celular, ag[posicao].email, ag[posicao].dataNascimento);	
	
	printf("\n Entre com o novo mome: ");
	gets(nome);

	printf("\n Celular( (dd)xxxxx-xxxx ): ");
	gets(celular);

	printf("\n Email: ");
	gets(email);

	printf("\n Data Nascimento(dd/mm/yyyy): ");
	gets(dataNascimento);
	
	//Altera apenas se tiver alguma coisa em nome
	if (strlen(nome) > 0)
		strcpy(ag[posicao].nome, nome);

	if (strlen(celular) > 0)
		strcpy(ag[posicao].celular, celular);

	if (strlen(email) > 0)
		strcpy(ag[posicao].email, email);

	if (strlen(dataNascimento) > 0)
		strcpy(ag[posicao].dataNascimento, dataNascimento);
		
	//mostrando os dados apos a atualizacao
   	printf("#:%d -nome: %s  - celular: %s - email: %s - data nasc.: %s", ag[posicao].codigo,ag[posicao].nome, ag[posicao].celular, ag[posicao].email, ag[posicao].dataNascimento);	

	printf("\n\nATUALIZACAO REALIZADO COM SUCESSO!!!");
	Sleep(3000);
	
	return ;
}
				
//Inicializa a agenda com vazio. As posicoes do vetor com vazio
void inicializaAgenda(struct Amigo ag[])
{
	int i; 
	
	//percorre o vetor de conta inicializando nome vazio '\0' e num = 0 e saldo 0
	for(i= 0; i <= MAX_AMIGO - 1 ; i++)
	{
		ag[i].codigo = 0;
		ag[i].nome[0] = '\0';
		ag[i].celular[0] = '\0';
		ag[i].email[0] = '\0';
		ag[i].dataNascimento[0] = '\0';
	}

	printf("\ninicializado a agenda com sucesso!!!");
	Sleep(3000);
	
	return ;
}

//retorna a primeira posicao do vetor Agenda livre (codigo = 0) senao retorna -1 
int  achaLivre(struct Amigo ag[])
{
	int posicao;

	printf("\nprocurando posicao livre na agenda!!!");
	Sleep(3000);
	
	//percorre o vetor da agenda testando se existe valor vazio
	for(posicao = 0;  ag[posicao].codigo != 0 && posicao < MAX_AMIGO; posicao++);

	//nao existe posicao vazia
	if ( posicao == MAX_AMIGO)
		return -1;

	return posicao;
}

//retorna a posicao da agenda no vetor se exister se nao existir
// retorna -1
int existeAmigo(struct Amigo ag[], int codigoAmigo)
{
	int posicao;
	
	for(posicao = 0;  ag[posicao].codigo != codigoAmigo && posicao < MAX_AMIGO; posicao++);

	//nao existe posicao vazia
	if ( posicao == MAX_AMIGO)
		return -1;

	return posicao;

}