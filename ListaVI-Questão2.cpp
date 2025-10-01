/* QUESTÃO 02: Pede-se o desenvolvimento
de um programa que leia n valores e
determine o maior e o menor elementos
do conjunto fornecido. */

#include <stdio.h>

#include <stdio.h>

int main (){
	int n, valor;
	int maior=-999, menor=999;
	
	printf("Insira um numero inteiro n: ");
	scanf("%d", &n);
	
	
	for(int i=1; i <= n; i++){
		printf("Insira outros valores para formar o conjunto: ");
		scanf("%d", &valor);
		
		if(valor > maior){
			maior = valor;
		} 
		
		if (valor < menor){
			menor = valor;
		}
	}
	
    printf("Maior elemento: %d", maior);
    printf("\nMenor elemento: %d", menor);
}


