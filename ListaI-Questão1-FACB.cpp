#include <stdio.h>

/*QUEST�O 01:
O custo ao consumidor de um carro novo � a
soma do custo de f�brica com a porcentagem
do distribuidor e dos impostos (aplicados ao
custo de f�brica). Desenvolver um algoritmo
que calcule o custo ao consumidor de
determinado carro.

custo do consumidor = custo de f�brica + porcentagem do distribuidor*custo de f�brica + porcentagem dos impostos * custo fab.

*/

int main (){
	float custoConsumidor, custoFabrica, percDistribuidor, percImposto;
	
	//1- descobrir o custo de f�brica
	printf("Qual o custo de fabrica?: ");
	scanf("%f", &custoFabrica);
	
	//2- descobrir as porcentagens
	printf("Qual o percentual do distribuidor?: ");
	scanf("%f", &percDistribuidor);
	
	printf("Qual o percentual dos imppostos?: ");
	scanf("%f", &percImposto);
	
	//3-calcular o valor da venda
	custoConsumidor = custoFabrica + (custoFabrica*percDistribuidor/100) + (custoFabrica*percImposto/100);
	
	//4- Exibir
	printf("O custo ao consumidor eh de %.2f", custoConsumidor);
	
	
	
}
