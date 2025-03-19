/*QUESTÃO 06:
Fazer um algoritmo que determine a ordem de
uma data (dia e mês) no ano.
Exemplos:
01/01 - 1o dia do ano
03/02 - 34o dia do ano*/

#include <stdio.h>

int main(){
	int dia, mes, diasTotais=0;
	
	int diasMeses[12]= {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
	
	printf("Insira o dia: ");
	scanf("%d", &dia);
	printf("Insira o mes: ");
	scanf("%d", &mes);
	
	if (mes < 1 || mes > 12 ||dia < 1 || dia > diasMeses[mes - 1]){
		printf("Data invalida!");
		return 1;
	}
	
	//soma dos meses anteriores
	int i;
	for (i=0;i< mes -1; i++){ //i inicia no 0, depois percorre por todos os meses anteriores ao selecionado, para então adicionar o incremento
		diasTotais += diasMeses[i]; // 
	}
	
	//soma do dia selecionado
	diasTotais += dia;
	
	printf("A data %02d/%02d corresponde ao %do dia do ano.\n", dia, mes, diasTotais);

    return 0;
}
