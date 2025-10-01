/* QUEST�O 05: Elabore um programa que
calcule a m�dia ponderada de n elementos.
Observa��o: na m�dia ponderada, cada
elemento possui um peso que representa a
sua contribui��o no c�lculo da m�dia final. */

#include <stdio.h>

int main(){
	int n, elemento, peso;
	float mediaPonderada=0, somaElementos=0, somaPeso=0;
	
	printf("Digite quantos elementos quer inserir: ");
	scanf("%d", &n);
	
	for (int i = 1; i<= n; i++){
		printf("Digite o elemento: ");
		scanf("%d", &elemento);
		
		printf("Digite o peso deste elemento: ");
		scanf("%d", &peso);	
		
		somaElementos += elemento * peso;
        somaPeso+= peso;
	}
	
	mediaPonderada = somaElementos / somaPeso;
	
	printf("A media ponderada � igual a: %.2f", mediaPonderada);
}
