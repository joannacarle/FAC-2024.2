/* QUEST�O 02:
Implementar uma fun��o que converta
determinada temperatura em graus Celsius
para graus Fahrenheit.*/

#include <stdio.h>

float conversao (float c);

int main(){
	float celsius, fahrenheit;
	
	printf("Digite a temperatura em Celsius: ");
	scanf("%f", &celsius);
	
	fahrenheit = conversao (celsius);
	
	printf("A conversao de %.1f em  fahrenheit � %.1f",celsius, fahrenheit);
}

float conversao (float c){
	float temp;
	
	temp=(1.8 * c)+32;
	
	return temp;
}
