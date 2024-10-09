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
