/* QUESTÃO 06:
Desenvolver uma função que, dado um número
inteiro N, calcule o valor do seguinte
somatório:
*/ 

#include <stdio.h>

float somatorio (int n){
	int potencia;
	int fatorial;
	float soma = 1;
	
	for (int i = 1; i<= n; i++){
		potencia = 1;
		
		for(int j = 1 ; j <=i; j++){
			potencia*=(n-i);
		}
		
		fatorial = 1;
		
		for (int x = 1; x <=i ; x++){
			fatorial *= x;
		}
		
		soma+= (float)potencia/fatorial;
	
	}
	
	return soma;
}

int main(){
	int n;
	float somatoria;
	
	printf("Digite um numero: ");
	scanf("%d", &n);
	
	somatoria = somatorio(n);
	
	printf("O valor do somatorio e: %.2f", somatoria);
	
}
