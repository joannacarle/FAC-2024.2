/* QUESTÃO 04: Faça um programa que leia
um número inteiro N e informe se o mesmo
é ou não primo.
Nota: um número é dito primo quando for
divisível apenas por 1 e por ele mesmo.*/




#include <stdio.h>

int main (){
	int i, num, resultado = 0;
	
	printf("Digite um numero: ");
	scanf("%d", &num);
	
	for (i=2; i<= num / 2; i++){
		if (num % i==0){
			resultado++;
		} 
	}
	
	if (resultado == 0){
		printf("%d eh um numero primo", num);
	} else {
		printf("%d nao eh um numero primo", num);
	}
}
