#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
struct estante{
	char titulo[100],autor[100];
	int paginaAtual, paginaTotal;
}; 
estante livro[10];

void texto(char texto[250]){
	
}

void cadastroLivro(int i){
	
	printf("Digite o Titulo do Livro %d : ",(i+1));
 	scanf("%s",&livro[i].titulo);
 	printf("Digite o Autor de %s:",livro[i].titulo);
 	scanf("%s",&livro[i].autor);
 	printf("Digite o numero de paginas lidas:");
 	scanf("%d",&livro[i].paginaAtual); 	
 	printf("Digite o total de paginas:");
 	scanf("%d",&livro[i].paginaTotal);
 	
}

void mostra(estante e[], int i){
	
	printf("\n\n\nTitulo do Livro: %s\n",e[i].titulo);
 	printf("Autor do Livro: %s\n",e[i].autor);
 	printf("Paginas lidas: %d\n",e[i].paginaAtual);
 	printf("Total de paginas:R$ %d\n",e[i].paginaTotal);
 	printf("Porcentagem lida:R$ %.2f\n\n\n\n\n\n\n",((e[i].paginaAtual/e[i].paginaTotal)*100));
 	
 }
 
int main(){
	int op,sai = 1, j;
	do{
		printf("-----Menu------\n");
		printf("1-Cadastro de Livros\n2-Consulta de Livros\n3-Sair\n\n");
		printf("Digite a opcao desejada:");
		scanf("%d",&op);		
		switch(op){			
			case 1:	
				j = j+1;			
				for(int i = 0; i <= 2; i++)
					cadastroLivro(i);				
			break;
			
			case 2:
				for(int i = 0; i <= 2; i++)
					mostra(livro, i);
			break;
			
			case 3:
				sai=op;
				printf("Aperte enter para sair");
				system("cls");		
			break;
			
			default:
				printf("\nopcao invalida\n\n");
				system("cls");
			break;			
		}
		
	}while(sai!=3);
}
