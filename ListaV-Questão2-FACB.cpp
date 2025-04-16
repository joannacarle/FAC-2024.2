/* QUESTÃO 02:
Desenvolver um programa que calcule a
soma dos números de 1 a N, sendo N um
número inteiro fornecido pelo usuário.*/

#include <stdio.h>
int main(){
	int n, i, soma;
	
	printf("Digite um numero: ");
	scanf("%d", &n);
	
	for (i=1; i<=n; i++){
		soma += i;
	}
	
	printf("A soma dos numeros de 1 ate %d e de: %d", n, soma);
}
