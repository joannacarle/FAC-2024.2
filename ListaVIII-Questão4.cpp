/*QUESTÃO 04:
A função logarítmica é complementar à
potenciação. Ou seja, uma vez que 3
4 = 81,
podemos então afirmar que log381 = 4.
Generalizando, temos que:
baseexpoente = pot ? logbasepot = expoente
Com base nessa descrição, pede-se o
desenvolvimento de uma função que, dados a e
b, calcule o valor de logab.
Nota: a sua solução deverá apresentar um valor
inteiro que, na verdade, será a solução aproximada
do logaritmo. */

#include <stdio.h>

int valorLog(int a, int b){
	int expoente = 0;
	int potencia = 1;
	
	while (potencia < b){
		potencia *= a;
		expoente++;
	}
}

int main (){
	int a, b;
	int expoente;
	
	printf("Digite o valor da base: ");
	scanf("%d", &a);
	
	printf("Digite o valor da potencia: ");
	scanf("%d", &b);
	
	expoente = valorLog(a, b);
	
	printf("O resultado e: %d", expoente);
	
}
