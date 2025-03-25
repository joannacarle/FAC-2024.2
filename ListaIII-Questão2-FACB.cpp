/* Construir um programa que permita ao usu�rio
calcular a �rea de uma figura geom�trica. Para
isto, o usu�rio dever� escolher a figura desejada
([C]�rculo, [R]et�ngulo, [Q]uadrado ou
[T]ri�ngulo) e fornecer as informa��es
necess�rias para que a �rea desta figura possa
ser calculada.
Notas:
1. F�rmulas para o c�lculo das �reas:
a. c�rculo = p.raio2

, onde p = 3.14159;

b. Aret�ngulo = base.altura;
c. Aquadrado = lado2
;
d. Atri�ngulo = (base.altura)/2.
2. Caso o usu�rio escolha uma op��o inv�lida,
uma mensagem de erro deve ser exibida e a
execu��o do programa terminada. */

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


