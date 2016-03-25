/*
Teste do ideone
12-01-2013 campinas
Luiz Torres Junior
programa 70
*/
 
#include <stdio.h>
#include <stdlib.h>
 
struct formulario
{
	char RA[10];
	char nome[50];
	char rua[50];
	int numero;
	char bairro[20];
	char cidade[30];
	char estado[2];
	char cep[13];
};
 
struct formulario aluno;
main()
{
	printf("RA: "); scanf("%s",&aluno.RA);
	printf("Nome: ");fflush(stdin);gets(aluno.nome);
	printf("\n  Endereco  \n");
	printf("Rua: "); scanf("%s",&aluno.rua);
	printf("Numero: ");fflush(stdin); scanf("%i",&aluno.numero);
	printf("Bairro: ");fflush(stdin); gets(aluno.bairro);
	printf("Cidade: ");fflush(stdin); gets(aluno.cidade);
	printf("Estado: ");fflush(stdin); scanf("%s",&aluno.estado);
	printf("CEP: ");fflush(stdin); scanf("%s",&aluno.cep);
	printf("\n\n");
	system("pause");
}
 	

