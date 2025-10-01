/* QUESTÃO 04: Faça um programa que leia
300 números reais. Ao final, devem ser
exibidas as seguintes informações:
a) A quantidade de valores negativos
digitados;
b) A média dos valores positivos. */

#include <stdio.h>

int main(){
	int numero;
	float mediaPositivo;
	int quantNegativo=0, quantPositivo=0, somaPositivo;
	
   for(int i = 1; i <= 300; i++){
        printf("Digite um numero: ");
        scanf("%f", &numero);
        
        if(numero < 0){
            quantNegativo++;
        } else {
            quantPositivo++;
            somaPositivo += numero;
        }
    }
	
	mediaPositivo = somaPositivo/quantPositivo;
	
	printf("Quantidade de valores negativos: %d", quantNegativo);
	printf("Media dos valores positivos: %.2f", mediaPositivo);
}
