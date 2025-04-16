/*QUESTÃO 05:
Criar um programa que exiba os N
primeiros termos da seguinte série:
1,2,4,8,16,32,...*/

#include <stdio.h> 

int main (){
	int n, i,termo=1;
	
	printf("Digite a quantidade de termos que deseja exibir: ");
    scanf("%d", &n);
    
    printf("Os termos da serie sao:\n");
    
    for(i=0; i < n; i++){
    	termo = termo *2;
    	printf("%d\n", termo);
	}
}
