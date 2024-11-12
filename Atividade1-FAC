/*
*   Pede-se o desenvolvimento de um programa que leia dois valores inteiros no intervalo de 1 a 999. Caso um deles
*   não esteja nesta faixa, uma mensagem de erro deverá ser apresentada ao usuário e a execução do programa
*   finalizada. Caso contrário, o programa deverá exibir a diferença entre os maiores algarismos dos dois números.
*   Exemplo:
*   n1 = 281
*   n2 = 64
*   Resposta: diferença igual a 2, consistindo em 8 (maior algarismo de n1) menos 6 (maior
*   algarismo de n2).
*/

#include <stdio.h>

int main(){
	int n1, n2, m1=0, m2=0;
	
	printf ("Insira o valor de n1: ");
	scanf ("%d", &n1);
	
	printf ("\nInsira o valor de n2: ");
	scanf("%d", &n2);
	
	if((n1<1 || n1>999 )||( n2<1 || n2>999)){
	 printf ("Erro. o numero precisa ser entre 1 e 999");
	}else {
		for (int i = 0;i<3;i++){
			//fazendo a fatoração
			if(n1%10>m1){
				m1=n1%10;
			}
		n1/=10;
		}
		for(int i=0; i<3; i++){
		if(n2%10>m2){
				m2=n2%10;
			}
		n2/=10;	
		}
		printf("\nA diferenca e igual a: %d", m1 - m2);
	}
}
			}
		n2/=10;	
		}
		printf("\nA diferenca e igual a: %d", m1 - m2);
	}
}
