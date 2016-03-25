/*TRABALHO DE ESTRUTURA DE DADOS I 
AlUNOS : WESLEY ALMEIDA DA SILVA	RA : A1320858
		REGINALDO CORREIA DANTAS	RA : A1320777
*/

//BIBLIOTECAS
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>

//FUNÇÕES
void cadprof();
void cadfunc();
void cadreaj();
void exibirrelatoriop();
void exibirrelatoriof();

//VARIAVEIS GLOBAIS		
int cadprofe = 0; // Numero do cadastro do professor em execução
int cadfunci = 0; // Numero do cadastro do funcionario em execução

//ESTRUTURAS DOS REGISTROS (STRUCT) 
struct professores {
	
	int prontuario;
	char nome[40];
	char titulacao[15];
	float salario;
	float rsal;

};

struct professores docente[50]; 


struct funcionarios{
	
	int prontuario;
	char nome[40];
	char cargo[20];
	float salario;
	float rsal;

};

struct funcionarios colaborador[50];


//FUNÇÃO PRINCIPAL
int main(){
	
	// op : opção do menu  / ed : loop do while
	int op,ed = 0;
	
	system("cls");
	
	do{
		
		printf("Digite uma opcao de numero:\n\n\n");
		printf("1 - Cadastrar professor.\n\n");
		printf("2 - Cadastrar funcionario administrativo.\n\n");
		printf("3 - Reajustar salario.\n\n");
		printf("4 - Exibir relatorio dos professores.\n\n");
		printf("5 - Exibir relatorio dos funcionarios.\n\n");
		printf("6 - Sair.\n\n");
	
		printf("\nDigite uma opcao: ");
		scanf("%d",&op);
	
		switch(op){
		
			case 1: cadprof(docente);
			break;
		
			case 2: cadfunc(colaborador);
			break;
		
			case 3: cadreaj(docente,colaborador);
			break;
		
			case 4: exibirrelatoriop(docente);
			break;
		
			case 5: exibirrelatoriof(colaborador);
			break;
		
			case 6: ed = 6; system("cls"); printf("\n\n\n\n\n\n\n			Obrigado, volte sempre !\n\n\n\n\n\n\n\n");
					printf("Desenvolvido por :\n\nWesley Almeida da Silva		RA: A1320858 \nReginaldo Correia Dantas 	RA: A1320777 \n\n\n");
			break;
		
			default: printf("\n\nOpcao invalida!\n\n"); getch(); system("cls");
		
	}
	}while(ed != 6);

}


// Função cadastrar professor
void cadprof(struct professores p[]){
	
	//c1 : Comparação da string Especialista  / c2 : Comparação da string Mestre / c3 : Comparação da string Doutor
	int c1,c2,c3,conti = 0;
	
	system("cls");

	printf("		Cadastro de Professores ");

	printf("\n\nDigite o numero do prontuario : ");
	scanf("%d",&p[cadprofe].prontuario);

	printf("\nDigite o nome : ");
	scanf("%s",&p[cadprofe].nome);

		do{
			
			printf("\nQual a titulacao (Especialista, Mestre ou Doutor) : ");
			scanf("%s",&p[cadprofe].titulacao);
			
			//Comparando string com nomes e convertendo em numero para antender a condição do if
			c1 = strcmp(p[cadprofe].titulacao,"Especialista");
			c2 = strcmp(p[cadprofe].titulacao,"Mestre");
			c3 = strcmp(p[cadprofe].titulacao,"Doutor");
			
			//Validando 
			if(c1 == 0){
				
				conti = 1;
				
			}
			
			else if(c2 == 0){
				
				conti = 1;
				
			}
			
			else if(c3 == 0){
				
				conti = 1;
				
			}
			else {
						
				conti = 0;
				printf("\n\n\nInsira uma titulacao VALIDA !\n\n\n");
			}
			
		}while(conti != 1 );

	printf("\nDigite o salario : ");
	scanf("%f",&p[cadprofe].salario);
	
	// Acrescentar +1 no registro do cadastro do professor a cada finalização de cadastro
	cadprofe++;
	
	system("cls");
	
}


//Função cadastrar funcionário
void cadfunc(struct funcionarios f[]){

	system("cls");

	printf("		Cadastro de Funcionarios ");

	printf("\n\nDigite o numero do prontuario : ");
	scanf("%d",&f[cadfunci].prontuario);

	printf("\nDigite o nome : ");
	scanf("%s",&f[cadfunci].nome);

	printf("\nDigite o cargo : ");
	scanf("%s",&f[cadfunci].cargo);

	printf("\nDigite o salario : ");
	scanf("%f",&f[cadfunci].salario);
	
	// Acrescentar +1 no registro do funcionário a cada finalização de cadastro
	cadfunci++;
	
	system("cls");
	
}



void cadreaj(struct professores p[], struct funcionarios f[]){
	
	int i,op;
	float porc,sal;

	system("cls");
	
	printf("\n\n Reajuste \n\n\n\n");
	
	printf("Qual sera o valor do reajuste : ");
	scanf("%f",&porc);
	
	
	do {
		system("cls");
		
		printf("\nQual salario voce deseja rejustar :");
		printf("\n\n1 - Professores");
		printf("\n2 - Funcionario");
		printf("\n3 - Sair");
		
		printf("\n\nQual sua opcao : ");
		scanf("%d",&op);
		
			if(op == 1){
		
							for(i=0;i<cadprofe;i++){
	
														p[i].rsal = p[i].salario+(p[i].salario*(porc/100));
														printf("Salario reajustado : %.2f",p[i].rsal);
														getch();
	
							}
							
							printf("\n\nPorcentagen aumentada ao salario dos professores.");
							getch();
							op = 3;
			}
	
			else if(op == 2){
		 
							for(i=0;i<=cadfunci;i++){
		
														f[i].rsal = f[i].salario+(f[i].salario*(porc/100));
														printf("Salario reajustado : %.2f",f[i].rsal);
														getch();	
		
							}
							
							printf("\n\nPorcentagen aumentada ao salario dos funcionarios.");
							getch();
							op = 3;
			}
		
			
	}while(op != 3);
	
	
	system("cls");
	
}



void exibirrelatoriop(struct professores p[]){

	int i;

	system("cls");
	
	printf("\n\n		Professores ");
	
	for(i=0;i<cadprofe;i++){

		
		printf("\n\nProfessor %d",i);
		printf("\nProntuario : %d",p[i].prontuario);
		printf("\nNome : %s",p[i].nome);
		printf("\nTitulacao : %s",p[i].titulacao);
		printf("\nSalario : %.2f",p[i].salario);
		printf("\nSalario reajustado : %.2f",p[i].rsal);

		printf("\n\n------------------------");	
	}
	
	printf("\n\nNumero de Registros %d .",cadprofe);
	getch();
	system("cls");		
}



void exibirrelatoriof(struct funcionarios f[]){

	int i;

	system("cls");
	
	printf("\n\n		Funcionarios ");

	for(i=0;i<cadfunci;i++){

		
		printf("\n\n\nFuncionarios %d",i);
		printf("\nProntuario : %d",f[i].prontuario);
		printf("\nNome : %s",f[i].nome);
		printf("\nTitulacao : %s",f[i].cargo);
		printf("\nSalario : %.2f",f[i].salario);
		printf("\nSalario Reajuste : %.2f",f[i].rsal);

		printf("\n\n------------------------");	
	}
	
	printf("\n\nNumero de Registros %d .",cadfunci);
	getch();
	system("cls");
}


