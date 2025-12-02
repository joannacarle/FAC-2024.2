/* QUESTÃO 03:
Fazer uma função leituraDados que permaneça
lendo valores reais até que o número 0 seja
digitado. Ao final, a função deve determinar a
quantidade de elementos fornecidos (excluindo
o 0) e o maior dentre eles. */

#include <stdio.h>
#include <limits.h>

int leituraDados (int *quant, int *maior){
	int num;
	*quant = 0;
	*maior = INT_MIN;
	
	while (1){
		printf("Digite um numero: ");
		scanf("%d", &num);
		
		if(num ==0){
			return 0;
		}else {
		    (*quant)++;
		} 
		
		if (num > *maior){
			*maior = num;
		}
		
	}	
}

int main (){
	int quantidade;
	int maior;
	
	leituraDados (&quantidade, &maior);
	
	printf("A quantidade de numeros digitados e: %d", quantidade);
	printf("O maior numero digitado e: %d",maior);
}
