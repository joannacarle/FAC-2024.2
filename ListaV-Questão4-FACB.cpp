/*QUESTÃO 04:
Implementar um programa que exiba os N
primeiros termos de uma PA (Progressão
Aritmética) com primeiro termo a1 e razão
r.*/

#include <stdio.h>

int main (){
	int a1, r, n, i, termo;
	
	printf("Digite o primeiro termo da PA: ");
	scanf("%d", &a1);
	
	printf("Digite a razao da PA: ");
	scanf("%d", &r);
	
	printf("Digite a quantidade de termos da PA: ");
	scanf("%d", &n);
	
	printf("Os primeiros termos da razao sao:\n");
	
	for(i=0; i< n; i++){
		termo=a1+i*r;
		printf("%d\n", termo);
	}
}
