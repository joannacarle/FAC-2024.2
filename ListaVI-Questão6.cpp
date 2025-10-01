/* QUEST�O 06: Fa�a um programa que leia
200 n�meros inteiros. Ao final, exibir:
a) O maior n�mero fornecido, de
ordem par (isto �, o maior dentre o
segundo, quarto, sexto, oitavo, etc
valores fornecidos).
b) A m�dia dos valores pares. */

#include <stdio.h>
#define INTEIROS 4
#include <limits.h>

int main (){
	int num ;
	int maior=INT_MIN;
	int somaPares=0, quantidadePares=0;
	float mediaPares=0;
	
	for(int i =0; i <= INTEIROS; i++){
		printf("Insira um numero inteiro: ");
		scanf("%d", &num );
		
		if (i %2==0){
			if (num > maior ){
				maior = num;
			}
		}
		
		if (num%2==0){
			somaPares += num;
			quantidadePares++;
		}
	}
	
	mediaPares = (float)somaPares/quantidadePares;
	
	printf("O maior numero par eh: %d", maior);
	printf("\nA media dos numeros pares eh: %.2f", mediaPares);
}
