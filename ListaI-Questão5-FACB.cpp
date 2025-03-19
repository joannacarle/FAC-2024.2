/* 
Questão 5

Escrever um algoritmo que, dada uma quantia
em reais, calcule o menor número possível de
notas/moedas (100, 50, 20, 10, 5, 2 e 1) em que
o valor pode ser decomposto. */

#include <stdio.h>

int main (){
	int valor, quantidade; //quanridade é o numero de notas/moedas
	
	printf("Digite um valor: ");
	scanf("%d", &valor);
	
	if(valor < 0){
		printf("Insira um valor valido");
		return 0;
	} 
	
	quantidade = valor/100;
	if (quantidade > 0){
		printf("Notas de 100: %d\n", quantidade);
		valor %= 100;
	}
	
	quantidade = valor/50;
	if(quantidade > 0){
		printf("Notas de 50: %d\n", quantidade);
		valor %= 50;
	}
	
	quantidade = valor/20;
	if(quantidade > 0){
		printf("Notas de 20: %d\n", quantidade);
		valor %= 20;
	}
	
	quantidade = valor/10;
	if(quantidade > 0){
		printf("Notas de 10: %d\n", quantidade);
		valor %= 10;
	}
	
	quantidade = valor/5;
	if(quantidade > 0){
		printf("Notas de 5: %d\n", quantidade);
		valor %= 5;
	}
	
	quantidade = valor/2;
	if(quantidade > 0){
		printf("Notas de 2: %d\n", quantidade);
		valor %= 2;
	}
	
	quantidade = valor/1;
	if(quantidade > 0){
		printf("Moedas de 1: %d\n", quantidade);
		valor %= 1;
	}
}
