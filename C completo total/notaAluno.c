/*
15-09-2014 programa 327
programa para contar espa�o
*/
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

// um banco de dados simples para nota de alunos.

#define CLASSES 3
#define GRADES 30

int grade[CLASSES][GRADES];

void enter_grades(void);
int get_grade(int num);
void disp_grades(int g[][GRADES]);

int main(void)
{
	char ch, str[80];
	
	for(;;)
	{
		do{
			printf("(D)igitar notas\n");
			printf("(M)ostrar notas\n");
			printf("(S)air\n");
			gets(str);
			ch = toupper(*str);
		}while(ch!='D' && ch!='M' && ch!='S');
		
		switch(ch){
			case 'D':
				enter_grades();
				break;
			case 'M':
				disp_grades(grade);
				break;
			case 'S':
				exit(0);
		}
	}
}

//Diigita a nota dos alunos

void enter_grades(void)
{
	int t, i;
	
	for(t = 0; t < CLASSES; t++){
		printf("Turma # %d:\n", t+1);
		for(i = 0; i < GRADES; ++i)
			grade [t][i] = get_grade(i);
	}
}

//Le uma nota

get_grade(int num)
{
	char s[80];
	
	printf("Digite a nota do aluno # %d:\n", num+1);
	gets(s);
	return(atoi(s));
}

//Mostra as notas 
void disp_grades(int g[][GRADES])
{
	int t, i;
	
	
	for(t = 0; t < CLASSES; t++){
		printf("Turma # %d:\n", t+1);
		for(i = 0; i < GRADES; ++i)
			printf("Aluno #%d eh %d\n", i+1, g[t][i]);
	}
}
