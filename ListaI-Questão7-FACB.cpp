/*QUEST�O 07:
Escreva um algoritmo para calcular o sal�rio
semanal de uma pessoa, determinado pelas
condi��es que seguem: se o n�mero de horas
trabalhado for inferior ou igual a 40, a pessoa
recebe x reais por hora; caso contr�rio, a
pessoa recebe um adicional de 50% para cada
hora trabalhada acima das 40 iniciais.*/

#include <stdio.h>

int main (){
	float horas, salario, valorHora;
	
	printf("Insira o valor por hora: ");
	scanf("%f", &valorHora);
	
	printf("Insira as horas trabalhadas: ");
	scanf("%f", &horas);
	
	
	if (horas <= 40){
		salario = valorHora*horas;
		printf("Seu salario e %d", salario);
	} else {
		salario = (valorHora*40) + ((horas - 40)*(valorHora*50/100));
	}
	
	printf("Seu salario e %.2f", salario);
	
	
}
