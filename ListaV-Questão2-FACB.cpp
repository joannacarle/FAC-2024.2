/* QUEST�O 02:
Desenvolver um programa que calcule a
soma dos n�meros de 1 a N, sendo N um
n�mero inteiro fornecido pelo usu�rio.*/

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
