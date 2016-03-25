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
	printf("Nome: "); gets(aluno.nome);
	printf("  Endereço  ");
	printf("Rua: "); scanf("%s",&aluno.rua);
	printf("Numero: "); scanf("%i",&aluno.numero);
	printf("Bairro: "); gets(aluno.bairro);
	printf("Cidade: "); gets(aluno.cidade);
	printf("Estado: "); scanf("%s",&aluno.estado);
	printf("CEP: "); scanf("%s",&aluno.cep);
}
