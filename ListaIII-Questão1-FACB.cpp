/*QUESTÃO 01:
Faça um programa que, dadas duas datas (cada
qual com dia, mês e ano) fornecidas pelo
usuário, determine qual delas é a mais recente.*/

#include <stdio.h>

int main() {
	int dia, mes, ano;
	int dia2, mes2, ano2;
	
	printf("Digite o dia, mes e ano: ");
	scanf("%d %d %d", &dia, &mes, &ano);
		
	printf("Digite novamente: ");
	scanf("%d %d %d", &dia2, &mes2, &ano2);
	
	//comparando datas
	
	if (ano > ano2){
		printf("A data mais recente eh %d/%d/%d", dia, mes, ano);
	} else if(ano < ano2){
		printf("A data mais recente eh %d/%d/%d", dia2, mes2, ano2);
	} 
	
	else { //comparar os meses
		if(mes > mes2){
		    printf("A data mais recente eh %d/%d/%d", dia, mes, ano);
		} else if(mes < mes2){
			printf("A data mais recente eh %d/%d/%d", dia2, mes2, ano2);
		} 
		
		else { //comparar os dias
			if(dia > dia2 ){
				printf("A data mais recente eh %d/%d/%d", dia, mes, ano);
			} else if(dia < dia2){
				printf("A data mais recente eh %d/%d/%d", dia2, mes2, ano2);
			} 
			
			else {
				printf("As datas sao iguais!");
			}
		}
	}

}
