/* QUEST�O 03:
Fazer um programa que exiba todos os
divisores de um n�mero fornecido pelo
usu�rio.*/

#include <stdio.h>

int main (){
	int n, i;
	
	printf("Digite um numero: ");
	scanf("%d", &n);
	
	printf("Os divisores de %d sao:\n ",n);
	for (i=1; i<=n; i++){
		if(n % i == 0){
			printf("%d\n ", i);
		}
	}
}
