/*QUESTÃO 07:
Escreva um algoritmo para calcular o salário
semanal de uma pessoa, determinado pelas
condições que seguem: se o número de horas
trabalhado for inferior ou igual a 40, a pessoa
recebe x reais por hora; caso contrário, a
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
