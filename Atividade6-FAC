/*Desenvolver uma função que, dado um número inteiro n, determine o seu maior algarismo, assim como o menor.
Nota: apresentar a main chamando a função implementada.*/

#include <stdio.h>

int maiorAlg (int num, int *maior, int *menor){
	
	*maior=0;
	*menor=9;
	

	int alg;
   while (num > 0){
   	alg = num % 10;
   	if (alg > *maior){
   		*maior= alg;
	   }
	if (alg < *menor){
		*menor = alg;
	}   
   	num /= 10;
   }
}


int main (){
	int n, maior, menor; 
	
	printf ("Digite um numero: ");
	scanf("%d", &n);
	
	maiorAlg (n, &maior, &menor);
	
	printf("Maior algarismo: %d ", maior);
	printf ("Menor algarismo: %d",menor);
	
}
