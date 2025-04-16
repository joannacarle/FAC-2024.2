/*QUESTÃO 07:
Desenvolver um programa no qual o
usuário entre com vários números inteiros
e positivos e imprima o produto dos
números ímpares e a soma dos números
pares.*/

#include <stdio.h>

int main (){
	int n=-1;
	int produto =1;
	int soma= 0;
	
	printf("Digite os numeros (digite 0 para parar): \n");
	
	while(n != 0){
		scanf("%d", &n);
		
		if(n>0){
			if(n%2==0){
				soma+=n;
			} else {
				produto*= n;
			}
		}
	}
	
	printf("Soma dos pares: %d\n", soma);
	printf("Produto dos impares: %d", produto);
}
