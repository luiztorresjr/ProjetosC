//Luiz Torres Junior
//Paulo Teruo Izumi
#include <stdlib.h>
#include <stdio.h>


struct cadastro {
	int pront;
	char nome[30],titu[10],cargo[10];
	float sala,sala1;
	};
 cadastro prof[3];
 cadastro adm[3];

 void cadastroProf(int i){
 	printf("Digite o nome do Professor %d : ",(i+1));
 	scanf("%s",&prof[i].nome);
 	printf("Digite o prontuario:");
 	scanf("%d",&prof[i].pront);
 	printf("Digite o Titulacao:");
 	scanf("%s",&prof[i].titu);
 	printf("Digite o salario:");
 	scanf("%f",&prof[i].sala);
 }
 void cadastroAdm(int i){
 	printf("Digite o nome do Funcinario %d : ",(i+1));
 	scanf("%s",&adm[i].nome);
 	printf("Digite o prontuario:");
 	scanf("%d",&adm[i].pront);
 	printf("Digite o Cargo:");
 	scanf("%s",&adm[i].cargo);
 	printf("Digite o salario:");
 	scanf("%f",&adm[i].sala);
 }

 void mostra(cadastro s[],int op,float porc, int i){
 	if(op==4){
 		printf("\n\n\nTitulacao: %s\n",s[i].titu);
	 }
 	if(op==5){
 		printf("\n\nCargo:%s\n",s[i].cargo);
	}
 	printf("Nome: %s\n",s[i].nome);
 	printf("Prontuario: %d\n",s[i].pront);
 	printf("Salario:R$ %.2f\n",s[i].sala);
 	printf("Salario reajustado:R$ %.2f\n\n\n\n\n\n\n",((s[i].sala*porc)+s[i].sala));
 }

 main(){

	int op,sai=1;

	do{

	printf("-----Menu------\n");
	printf("1-Cadastro de professores\n2-Cadastrar Funcionarios Administrativos\n3-Porcentagem de Reajuste\n4-Relatorios de Professores\n5-Relatorios de Funcionario\n6-Sair\n\n");
	printf("Digite a opcao desejada:");
	scanf("%d",&op);


	switch(op){
	case 1:
		for(int i=0; i< 3;i++)
		cadastroProf(i);
	break;
	case 2:
		for(int i=0; i< 3;i++)
		cadastroAdm(i);
	break;
	case 3:	
		float porc;
		printf("Digite a porcentagem de aumento:");
		scanf("%f",&porc);
		porc= porc/100;
	break;
	case 4:
		for(int i=0; i< 3;i++)
		mostra(prof,op,porc, i);
	break;
	case 5:
		for(int i=0; i< 3;i++)
		mostra(adm,op,porc, i);
	break;
	case 6:
		sai = 0;
		printf("Aperte enter para sair");
		system("cls");
		
	break;
	default:printf("\nopcao invalida\n\n");
	break;
	system("cls");
}
}while(sai!=0);
	}


