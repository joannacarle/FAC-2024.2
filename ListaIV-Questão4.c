/* QUEST�O 04: Fa�a um programa que leia
300 n�meros reais. Ao final, devem ser
exibidas as seguintes informa��es:
a) A quantidade de valores negativos
digitados;
b) A m�dia dos valores positivos. */

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
