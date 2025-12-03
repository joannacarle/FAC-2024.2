/* QUESTÃO 01:
Desenvolver uma função que determine o
número de ocorrências de um número inteiro x
em um vetor A. */

#include <stdio.h>

int ocorrencias(int vetA[], int x, int tamanho){
	int cont=0;
	
	for (int i=0; i < tamanho; i++){
		if (vetA[i]==x){
			cont++;
		}
	}
	
	return cont;
}

int main (){
	int tam, x;
	
	printf ("Digite o tamanho do vetor: ");
	scanf("%d", &tam);
	
	int A[tam];
	
	for (int i = 0; i < tam; i++) {
        printf("A[%d]: ", i);
        scanf("%d", &A[i]);
    }

    printf("Digite o numero que deseja contar: ");
    scanf("%d", &x);

    int resultado = ocorrencias(A, x, tam);

    printf("O numero %d aparece %d vezes no vetor.\n", x, resultado);

    return 0;
}
