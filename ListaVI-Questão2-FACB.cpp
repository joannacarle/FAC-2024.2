/* QUESTÃO 02: Pede-se o desenvolvimento
de um programa que leia n valores e
determine o maior e o menor elementos
do conjunto fornecido. */

#include <stdio.h>
#include <limits.h>

int main(){
	int n, i,valor, maior=INT_MIN, menor=INT_MAX ;
	
	printf("Digite um valor para determinar a quatidade de elementos: ");
	scanf("%d", &n);
	
	for(i=1;i<=n;i++){
		printf("Digite um valor: ");
		scanf("%d", &valor);
		
		if(valor>maior){
			maior=valor;
		} 
		
		if(valor<menor){
			menor=valor;
		}
	}
	
	printf("MAIOR NUMERO: %d", maior);
	printf("\nMENOR NUMERO: %d", menor);
}
