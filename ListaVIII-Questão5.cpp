/*QUESTÃO 05:
Fazer uma função que exiba a tabuada de
potências de um número n, no intervalo de 1 a
9. Se o número não estiver neste intervalo, o
código 0 deve ser retornado; caso contrário,
retorna-se 1. */

#include <stdio.h>

int exibirTabuada(int num){
	int i,j;
	int resultado;
	
	if (num < 1 || num > 9){
		return 0;
	}
	
	for (i= 1; i<=9; i++){
		resultado = 1;
		
		for(j=1; j<= i; j++){
			resultado*=num;
		}
		
		printf("%d ^ %d = %d\n", num, i, resultado);
	}
	
	return 1;
}

int main (){
	int num;
	
	printf("Digite um numero: ");
	scanf("%d", &num);
	
	exibirTabuada(num);
}
