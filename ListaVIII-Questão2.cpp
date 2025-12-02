/* QUESTÃO 02:
Dados dois números inteiros A e B, fazer uma
função que determine o número de potências
de 2 existentes no intervalo definido pelos dois
valores, assim como a maior delas. */

#include <stdio.h> 

int potencias (int a, int b, int *quant, int *maior){
	int potencia = 1;
    *quant = 0;
	*maior = 0;
	
	while (potencia <= b){
		if (potencia >= a && potencia <= b){
			(*quant)++;
		}
		
		if (potencia > *maior){
			*maior = potencia;
		}
		
		potencia *=2;
	}
}

int main (){
	int A, B;
	int quantidade, MAIOR;
	
	printf("Insira o valor de A:");
    scanf("%d", &A);
    printf("Insira o valor de B:");
    scanf("%d", &B);

    potencias(A, B, &quantidade, &MAIOR);

    printf("Quantidade de potencias de 2 no intervalo: %d\n", quantidade);
    printf("Maior potencia de 2 no intervalo: %d", MAIOR);
}
