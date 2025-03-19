#include <stdio.h>

/*QUESTÃO 01:
O custo ao consumidor de um carro novo é a
soma do custo de fábrica com a porcentagem
do distribuidor e dos impostos (aplicados ao
custo de fábrica). Desenvolver um algoritmo
que calcule o custo ao consumidor de
determinado carro.

custo do consumidor = custo de fábrica + porcentagem do distribuidor*custo de fábrica + porcentagem dos impostos * custo fab.

*/

int main (){
	float custoConsumidor, custoFabrica, percDistribuidor, percImposto;
	
	//1- descobrir o custo de fábrica
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
