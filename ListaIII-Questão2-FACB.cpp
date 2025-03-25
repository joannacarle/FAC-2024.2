/* Construir um programa que permita ao usuário
calcular a área de uma figura geométrica. Para
isto, o usuário deverá escolher a figura desejada
([C]írculo, [R]etângulo, [Q]uadrado ou
[T]riângulo) e fornecer as informações
necessárias para que a área desta figura possa
ser calculada.
Notas:
1. Fórmulas para o cálculo das áreas:
a. círculo = p.raio2

, onde p = 3.14159;

b. Aretângulo = base.altura;
c. Aquadrado = lado2
;
d. Atriângulo = (base.altura)/2.
2. Caso o usuário escolha uma opção inválida,
uma mensagem de erro deve ser exibida e a
execução do programa terminada. */

#include <stdio.h>

int main (){
	char opcao;
	float raio, base, altura, lado, area;
	
	printf("Escolha uma figura geometrica:\n[C]- Circulo\n[R]- Retangulo\n[Q]-Quadrado\n[T]-Triangulo\n");
	printf("Digite a opcao escolhida: ");
	scanf(" %c", &opcao);
	
	if (opcao == 'c' || opcao == 'C'){
		printf("Insira o raio do circulo: ");
		scanf("%f", &raio);
		
		area = 3.14159 *raio * raio;
		
		printf("A area do circulo e igual a %.2f", area);
		
	}
	
	if(opcao == 'r' || opcao == 'R'){
		printf("Digite a base: ");
		scanf("%f", &base);
		
		printf("Digite a altura: ");
		scanf("%f", &altura);
		
		area = base * altura;
		
		printf("A area do retangulo e igual a %.2f", area);
	}
	
	if(opcao == 'q' || opcao == 'Q'){
		printf("Digite o lado: ");
		scanf("%f", &lado);
		
		area = lado * lado;
		
		printf("A area do quadrado e igual a %.2f", area);
	}
	
	if(opcao == 't' || opcao == 'T'){
		printf("Digite a base: ");
		scanf("%f", &base);
		
		printf("Digite a altura: ");
		scanf("%f", &altura);
		
		area = (base * altura)/2;
		
		printf("A area do triangulo e igual a %.2f", area);
	}
	
	
	
	
}


