/* QUEST�O 01:
Desenvolver uma fun��o que exiba os m�ltiplos
de N compreendidos no intervalo definido por
A e B. */


#include <stdio.h>

//fun��es
void exibirMultiplos (int n, int a, int b){
	int i;
	
	for(i=a; i<=b; i++){
		if (i%n==0){
			printf("%d\n", i);
		}
	}
}

int main (){
	int A,B, N;
	
	printf("Digite um valor para N: ");
	scanf("%d", &N);
	
	printf("Digite um valor para A: ");
	scanf("%d", &A);
	
	printf("Digite um valor para B: ");
	scanf("%d", &B);
	
	exibirMultiplos(N, A, B);
}
