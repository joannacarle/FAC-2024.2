/*
QUESTÃO 03: Implementar um programa
que calcule o valor de baseexpoente, onde
base e expoente são números inteiros
dados pelo usuário.
*/

#include <stdio.h>

int main (){
	int base, expoente;
	int resultado=1;
	
	printf("Digite o valor da base: ");
	scanf("%d", &base);
	printf("Digite o valor do expoente: ");
	scanf("%d", &expoente);
	
	for(int i=1; i<=expoente; i++){
		resultado *= base;
	}
	
	printf("%d elevado a %d e igual a %d", base, expoente, resultado);  
}
