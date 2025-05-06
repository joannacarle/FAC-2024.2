/* QUESTÃO 03: Implementar um programa
que calcule o valor de baseexpoente, onde
base e expoente são números inteiros
dados pelo usuário. */

#include <stdio.h>

int main (){
	int i, base, expoente, resultado=1;
	
	printf("BASE: ");
	scanf("%d", &base);
	
	
	printf("EXPOENTE: ");
	scanf("%d", &expoente);
	
	if(expoente<0){
		printf("valor invalido");
	}
	
	for(i=1; i<=expoente; i++){
		resultado*=base;
	}
	
	printf("%d elevado a %d e igual a %d", base, expoente, resultado);
}
