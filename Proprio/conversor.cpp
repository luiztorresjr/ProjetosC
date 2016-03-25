/*
Klon Software 10-03-2014
Luiz Torres Junior
Software para conversão de unidade de distância V 1.0
*/

#include<stdio.h>
#include<stdlib.h>
/*
Unidade de massa
*/
#define kg_lb 2.205
#define kg_g 1000
#define lb_kg 0.454
#define t_kg 1000
/*
Unidade de comprimento
*/
#define m_ft 3.281
#define m_cm 100
#define m_in 39.37
#define ft_m 0.3048
#define ft_in 12
#define ft_cm 30.48
#define in_ft 0.0833
#define in_cm 2.54
/*
Unidade de volume
*/
#define ftcub_mcub 0.02832
#define ftcub_cmcub 0.002832
#define ftcub_incub	1728
#define ftcub_l	28.32
#define incub_cmcub	16.39
#define incub_l	0.01639
#define incub_mcub	0.00001639
#define incub_ftcub	0.000579
#define mcub_ftcub	35.31
#define mcub_incub	61023.76
#define mcub_l 1000
#define cmcub_ftcub 0.0000353
#define cmcub_incub	0.06102
/*
Unidade de Força
*/
#define lbf_n 4.480 
#define lbf_kgf 4480 
#define	n_lbf 0.2248
#define	n_kgf 0.1
#define kgf_n 10
#define w_cv 1.359
#define w_hp 1.341
#define cv_kw 0.7355
#define cv_hp 0.9863
#define cv_kgf 75
#define hp_cv 1.014
#define hp_kw 0.7457
/*
Unidade de pressão
*/
#define psi_pascal 6895
#define psi_kgfcm 0.07031
#define psi_bar 689.5
#define psi_ncm 0.6895
#define bar_kgfcm 1.0197
#define bar_pascal 100000
#define pascal_bar 0.00001
#define pascal_psi 0.0001450
#define pascal_kgfcm 0.00001020
#define pascal_nm 1
#define kgfcm_bar 0.980665
#define kgfcm_psi 14.22
void convMassa(){
	int o;
	float conv, valor;
	do{
		printf("Escolha a unidade :");
		printf("\n1-quilo para libra\n2-quilo para grama\n3-libra para quilo\n4-tonelada para quilo");
		printf("\nEntre com a opcao: ");
		scanf("%i", &o);
		system("cls");
		if(o>=1 && o<=4){
			printf("Entre com o valor para conversao: ");
			scanf("%f", &valor);	
		}
		switch(o){
			case 1: 
				conv = valor*kg_lb;
				printf("%.4f quilo eh tantas %.4f libras", valor, conv);
				break;
			case 2:			
				conv = valor*kg_g;
				printf("%.4f quilo eh tantas %.4f gramas", valor, conv);
				break;
			case 3:
				conv = valor*lb_kg;
				printf("%.4f libras eh tantos %.4f quilos", valor, conv);
				break;
			case 4:
				conv = valor*t_kg;
				printf("%.4f toneladas eh tantos %.4f quilos", valor, conv);
				break;
			default:
				printf("opcao invalida!!");
				break;
		}
	}while(o<1 && o>4);
}

void convComp(){
int o;
	float conv, valor;
	do{
		printf("Escolha a unidade :");
		printf("\n1-metro para pes\n2-metro para centimetro\n3-metro para polegada\n4-pes para metro");
		printf("\n5-pes para polegada\n6-pes para centimetro\n7-polegada para pes\n8-polegada para centimentro");
		printf("\nEntre com a opcao: ");
		scanf("%i", &o);
		system("cls");
		if(o>=1 && o<=8){
			printf("Entre com o valor para conversao: ");
			scanf("%f", &valor);	
		}
		switch(o){
		case 1: 
				conv = valor*m_ft;
				printf("%.4f metros eh tantos %.4f pes", valor, conv);
				break;
			case 2:			
				conv = valor*m_cm;
				printf("%.4f metros eh tantos %.4f centimetros", valor, conv);
				break;
			case 3:
				conv = valor*m_in;
				printf("%.4f metros eh tantas %.4f polegadas", valor, conv);
				break;
			case 4:
				conv = valor*ft_m;
				printf("%.4f pes eh tantos %.4f metros", valor, conv);
				break;
			case 5:
				conv = valor*ft_in;
				printf("%.4f pes eh tantas %.4f polegadas", valor, conv);
				break;
			case 6:
				conv = valor*ft_cm;
				printf("%.4f pes eh tantos %.4f centimetros", valor, conv);
				break;
			case 7:
				conv = valor*in_ft;
				printf("%.4f polegadas eh tantos %.4f pes", valor, conv);
				break;
			case 8:
				conv = valor*in_cm;
				printf("%.4f polegadas eh tantos %.4f centimetros", valor, conv);
				break;
			default:
				printf("opcao invalida!!");
				break;
		}
	}while(o<1 && o>8);
}

void convVol(){
int o;
	float conv, valor;
	do{
		printf("Escolha a unidade :");
		printf("\n1-pes cubicos para metros cubicos\n2-pes cubicos para centimetros cubicos\n3-pes cubicos para polegadas cubicas");
		printf("\n4-pes cubicos para litros\n5-polegadas cubicas para centimetros cubicos\n6-polegadas cubicas para litros");
		printf("\n7-polegadas cubicas para metros cubicos\n8-polegada cubicas para pes cubicos\n9-metros cubico para pes cubicos");
		printf("\n10-metros cubicos para polegadas cubicas\n11-metros cubicos para litros\n12-centimentros cubicos para pes cubicos");
		printf("\n13-centimentros cubicos para polegadas cubicas");
		printf("\nEntre com a opcao: ");
		scanf("%i", &o);
		system("cls");
		if(o>=1 && o<=13){
			printf("Entre com o valor para conversao: ");
			scanf("%f", &valor);	
		}
		switch(o){
		case 1: 
				conv = valor*ftcub_mcub;
				printf("%.4f pes cubicos eh tantos %.4f metros cubicos", valor, conv);
				break;
			case 2:			
				conv = valor*ftcub_cmcub;
				printf("%.4f pes cubicos eh tantos %.4f centimetros cubicos", valor, conv);
				break;
			case 3:
				conv = valor*ftcub_incub;
				printf("%.4f pes cubicos eh tantas %.4f polegadas cubicos", valor, conv);
				break;
			case 4:
				conv = valor*ftcub_l;
				printf("%.4f pes cubicos eh tantos %.4f litros", valor, conv);
				break;
			case 5:
				conv = valor*incub_cmcub;
				printf("%.4f polegadas cubicas eh tantos %.4f centimetros cubicos", valor, conv);
				break;
			case 6:
				conv = valor*incub_l;
				printf("%.4f polegadas cubicas eh tantos %.4f litros", valor, conv);
				break;
			case 7:				
				conv = valor*incub_mcub;
				printf("%.4f polegadas cubicas eh tantos %.4f metros cubicos", valor, conv);
				break;
			case 8:
				conv = valor*incub_cmcub;
				printf("%.4f polegadas cubicas eh tantos %.4f pes cubicos", valor, conv);
				break;
			case 9:				
				conv = valor*mcub_ftcub;
				printf("%.4f metros cubicas eh tantos %.4f pes cubicos", valor, conv);
				break;
			case 10:
				conv = valor*mcub_incub;
				printf("%.4f metros cubicas eh tantas %.4f polegadas cubicas", valor, conv);
				break;
			case 11:
				conv = valor*mcub_l;
				printf("%.4f metros cubicas eh tantos %.4f litros", valor, conv);
				break;
			case 12:
				conv = valor*cmcub_ftcub;
				printf("%.4f centimetros cubicas eh tantos %.4f pes cubicos", valor, conv);
				break;
			case 13:
				conv = valor*cmcub_incub;
				printf("%.4f centimetros cubicas eh tantas %.4f polegadas cubicas", valor, conv);
				break;
			default:
				printf("opcao invalida!!");
				break;
		}
	}while(o<1 && o>13);
}

void convForca(){
int o;
	float conv, valor;
	do{
		printf("Escolha a unidade :");
		printf("\n1-libra forca para newton\n2-libra forca para quilograma forca\n3-newton para libra forca");
		printf("\n4-newton para quilograma forca\n5-quilograma forca para newton\n6-watts para cavalo vapor");
		printf("\n7-watts para horse power\n8-cavalo vapor para quilowatts\n9-cavalo vapor para horse power");
		printf("\n10-cavalo vapor para quilograma forca\n11-horse power para cavalo vapor\n12-horse power para quilowatts");
		printf("\nEntre com a opcao: ");
		scanf("%i", &o);
		system("cls");
		if(o>=1 && o<=12){
			printf("Entre com o valor para conversao: ");
			scanf("%f", &valor);	
		}
		switch(o){
		case 1: 
				conv = valor*lbf_n;
				printf("%.4f libras forca eh tantos %.4f newtons", valor, conv);
				break;
			case 2:			
				conv = valor*lbf_kgf;
				printf("%.4f libras forca eh tantos %.4f quilogramas forca", valor, conv);
				break;
			case 3:
			conv = valor*n_lbf;
				printf("%.4f newtons eh tantas %.4f libras forca", valor, conv);
				break;
			case 4:
				conv = valor*n_kgf;
				printf("%.4f newtons eh tantos %.4f quilogramas forca", valor, conv);
				break;
			case 5:
				conv = valor*kgf_n;
				printf("%.4f quilogramas forca eh tantos %.4f newtons", valor, conv);
				break;
			case 6:
				conv = valor*w_cv;
				printf("%.4f watts eh tantos %.4f cavalos vapor", valor, conv);
				break;
			case 7:				
				conv = valor*w_hp;
				printf("%.4f watts eh tantos %.4f horse power", valor, conv);
				break;
			case 8:
				conv = valor*cv_kw;
				printf("%.4f cavalos vapor eh tantos %.4f quiloswatts", valor, conv);
				break;
			case 9:				
				conv = valor*cv_hp;
				printf("%.4f cavalos vapor eh tantos %.4f horse power", valor, conv);
				break;
			case 10:
				conv = valor*cv_kgf;
				printf("%.4f cavalos vapor eh tantos %.4f quilogramas forca", valor, conv);
				break;
			case 11:
				conv = valor*hp_cv;
				printf("%.4f horse power eh tantos %.4f cavalos vapor", valor, conv);
				break;
			case 12:
				conv = valor*hp_kw;
				printf("%.4f horse power eh tantos %.4f quilowatts", valor, conv);
				break;
			default:
				printf("opcao invalida!!");
				break;
		}
	}while((o < 1) && (o > 12));	
}

void convPressao(){
	int o;
	float conv, valor;
	do{
		printf("Escolha a unidade :");
		printf("\n1-psi para pascal\n2-psi para quilograma forca por centimetro quadrado");
		printf("\n3-psi para bar\n4-psi para newton por centimetro quadrado");
		printf("\n5-bar para quilograma forca por centimetro quadrado\n6-bar para pascal");
		printf("\n7-pascal para bar\n8-pascal para psi\n9-pascal para quilograma forca por centimetro quadrado");
		printf("\n10-pascal para newton metro quadrado\n11-quilograma forca por centimetro quadrado para bar");
		printf("\n12-quilograma forca por centimetro quadrado para psi");
		printf("\nEntre com a opcao: ");
		scanf("%i", &o);
		system("cls");
		if(o>=1 && o<=12){
			printf("Entre com o valor para conversao: ");
			scanf("%f", &valor);	
		}
		switch(o){
		case 1: 
				conv = valor*psi_pascal;
				printf("%.4f psi eh tantos %.4f pascal", valor, conv);
				break;
			case 2:			
				conv = valor*psi_kgfcm;
				printf("%.4f psi eh tantos %.4f quilogramas forca por metro quadrado", valor, conv);
				break;
			case 3:
				conv = valor*psi_bar;
				printf("%.4f psi eh tantos %.4f bar", valor, conv);
				break;
			case 4:
				conv = valor*psi_ncm;
				printf("%.4f newtons eh tantos %.4f newton por centimetro quadrado", valor, conv);
				break;
			case 5:
				conv = valor*bar_kgfcm;
				printf("%.4f bar eh tantos %.4f quilogramas forca por centimetros quadrados", valor, conv);
				break;
			case 6:
				conv = valor*bar_pascal;
				printf("%.4f bar eh tantos %.4f pascal", valor, conv);
				break;
			case 7:				
				conv = valor*pascal_bar;
				printf("%.4f pascal eh tantos %.4f bar", valor, conv);
				break;
			case 8:
				conv = valor*pascal_psi;
				printf("%.4f pascal eh tantos %.4f psi", valor, conv);
				break;
			case 9:				
				conv = valor*pascal_kgfcm;
				printf("%.4f pascal eh tantos %.4f quilograma forca por centimetro quadrado", valor, conv);
				break;
			case 10:
				conv = valor*pascal_nm;
				printf("%.4f pascal eh tantos %.4f newton por metros quadrados", valor, conv);
				break;
			case 11:
				conv = valor*kgfcm_bar;
				printf("%.4f quilograma forca por centimetro quadrado eh tantos %.4f bar", valor, conv);
				break;
			case 12:
				conv = valor*kgfcm_psi;
				printf("%.4f quilograma forca por centimetro quadrado eh tantos %.4f psi", valor, conv);
				break;
			default:
				printf("opcao invalida!!");
				break;
		}
	}while((o < 1) && (o > 12));	
}

int main(){
	float valor=0;
	int op, ch=1;
	do{
		system("cls");
		printf("Escolha o tipo de conversaoh:\n1-Massa\n2-Comprimento\n3-Volume");
		printf("\n4-Forca\n5-Pressao");
		printf("\n6-Sair\nEntre Com a opcao: ");
		scanf("%i",&op);
		switch(op){
			case 1:
				do{
				system("cls");
				convMassa();
				printf("\n");
				system("pause");
				system("cls");
				printf("Converter novamente:\n1-Sim \n2-Naoh ");
				scanf("%i",&ch);
			}while(ch==1);
				break;
			case 2:
				do{
				system("cls");
				convComp();
				printf("\n");
				system("pause");
				system("cls");
				printf("Converter novamente:\n1-Sim \n2-Naoh ");
				scanf("%i",&ch);
			}while(ch==1);
				break;
			case 3:
				do{
				system("cls");
				convVol();
				printf("\n");
				system("pause");
				system("cls");
				printf("Converter novamente:\n1-Sim \n2-Naoh ");
				scanf("%i",&ch);
				}while(ch==1);
				break;
			case 4:
				do{
				system("cls");
				convForca();
				printf("\n");
				system("pause");
				system("cls");
				printf("Converter novamente:\n1-Sim \n2-Naoh ");
				scanf("%i",&ch);
			}while(ch==1);
				break;
			case 5:
				do{
				system("cls");
				convPressao();
				printf("\n");
				system("pause");
				system("cls");	
				printf("Converter novamente:\n1-Sim \n2-Naoh ");
				scanf("%i",&ch);
				}while(ch==1);
				break;
			case 6:
				system("cls");
				puts("Saindo");
				system("pause");
				break;	
		}
	}while(op != 6);
}

