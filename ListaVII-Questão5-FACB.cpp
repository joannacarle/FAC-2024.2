#include <stdio.h>

int main (){
	int idade;
	int mais50=0, contAltura=0;
	float altura, peso;
	float somaAltura=0, maiorPeso=0;
	char continuar;
	
	do {
		printf("Digite sua idade:\n");
		scanf("%d", &idade);
		
		printf("Digite sua altura:\n");
		scanf("%f", &altura);
		
		printf("Digite seu peso:\n");
		scanf("%f", &peso);
		
		//quantidade de pessoas com mais de 50 anos
		if(idade>50){
			mais50++;
		}
		
		//media de altura de pessoas com mais de 80kg;
		if(peso>80){
			somaAltura += altura;
			contAltura ++;
		}
		
		//maior peso entre pessoas acima de 1.65 de altura e com idade inferior a 30 anos
		if(idade<30 && altura>1.65){
			if(peso>maiorPeso){
				maiorPeso = peso;
			}
		}
		
		//pergunta ao usuario se ele quer continuar
		printf("Deseja continuar? (s/n): \n");
		scanf(" %c", &continuar);
	} while (continuar == 's' || continuar == 's');
	
	
	//exibindo resultados
	printf("Pessoas com mais de 50 anos %d\n", mais50);
	printf("Média de altura das pessoas com mais de 80kg: %.2f\n", somaAltura / contAltura);
	printf("Maior peso entre pessoas com menos de 30 anos e mais de 1.65m: %.2f kg\n", maiorPeso);
	
}
