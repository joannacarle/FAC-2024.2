/* QUEST�O 01: Fa�a um programa que leia um
n�mero inteiro positivo N e exiba todos os
m�ltiplos de Y inferiores a N, onde N e Y s�o
fornecidos pelo usu�rio.*/ 

#include <stdio.h>

int main (){
	int N,Y;
	
	printf("Digite um numero inteiro N: ");
	scanf("%d", &N);
	
	printf("Digite um numero inteiro Y: ");
	scanf("%d", &Y);
	
	printf("==== Multiplos de %d menores que %d ====\n", Y, N);
	
	for (int i=1; i<N; i++){
		if (i%Y==0){
			printf("%d\n", i);
		}
	}
}
