/* QUEST�O 01: Fa�a um programa que leia
um n�mero inteiro x e, em seguida, solicite
ao usu�rio outros 50 valores inteiros. Ao
final, o programa deve exibir o total de
m�ltiplos de x fornecidos. */

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
