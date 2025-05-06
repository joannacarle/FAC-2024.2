/* QUESTÃO 01: Faça um programa que leia
um número inteiro x e, em seguida, solicite
ao usuário outros 50 valores inteiros. Ao
final, o programa deve exibir o total de
múltiplos de x fornecidos. */

#include <stdio.h>

int main (){
	int x, i, n, cont=0;
	
	printf("Digite um numero inteiro x: ");
	scanf("%d", &x);
	
	for(i=1;i<=5; i++){
		printf("Digite um numero: ");
		scanf("%d", &n);
		
		if(n%x==0){
			cont++;
		}
	}
	
	printf("Foram digitados %d multiplos de %d",cont, x );
}
