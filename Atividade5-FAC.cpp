/* Fazer uma função que, dados dois números inteiros num1 e num2, determine se num2 é 
uma potência de num1.*/ 

#include <stdio.h>

int exibirPotencia (int base, int num){

    if (base <= 1 || num <= 0) 
        return 0;
    
    int resultado = 1;
    while (resultado < num) {
        result *= base;
    }
    
    return resultado == num;
}

int main (){
	int num1, num2;
	
	printf("Digite um numero para base: ");
	scanf("%d", &num1);
	printf("Digite um numero para potencia: ");
	scanf("%d", &num2);
	
	if (exibirPotencia(num1, num2)){
		printf ("%d e uma potencia de %d", num2, num1);
	} else {
		printf ("%d e uma potencia de %d", num2, num1);
	}
}
