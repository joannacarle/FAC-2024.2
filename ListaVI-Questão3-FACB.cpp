/* QUEST�O 03: Implementar um programa
que calcule o valor de baseexpoente, onde
base e expoente s�o n�meros inteiros
dados pelo usu�rio. */

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
