/* QUESTÃO 01:
Desenvolver uma função que, dado um número
inteiro n, exiba todos os números existentes no
intervalo definido por a e b (a < b), exceto
aqueles que forem múltiplos de n.*/

#include <stdio.h>

int exibirNumeros (int a, int b, int n){
	for (int i = a; i <=b; i++){
		if (i%n!=0){
			printf("\n%d", i);
		}
	}
}

int main (){
	int num, A, B;
	
	printf("Digite um numero: \n");
	scanf("%d", &num);
	
	printf("Digite o intervalo (o primeiro numero precisa ser menor que o segundo): \n");
	scanf("%d%d", &A, &B);
	
	exibirNumeros(A, B, num);
}
