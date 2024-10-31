/*
	FAETERJ-Rio
	Fundamentos de Algoritmos de Computa��o - FAC - Turma A
	Data: 30/10/2024
	
	Lista de Exerc�cios VIII (Fun��es):
	
	QUEST�O 06:
	Implementar uma fun��o que, dado um n�mero inteiro N, 
	exiba uma sequ�ncia de n�meros como as ilustradas nos 
	exemplos a seguir:

	Exemplo 1:  N = 3
 		(1 2) (1 3) (2 1) (2 3) (3 1) (3 2)

	Exemplo 2:  N = 5
 		(1 2) (1 3) (1 4) (1 5) (2 1) (2 3) (2 4) (2 5) (3 1) 
		(3 2) (3 4) (3 5) (4 1) (4 2) (4 3) (4 5) (5 1) (5 2) 
		(5 3) (5 4)
*/

#include <stdio.h>

//fun��o para definir os pares
void exibirPares (int n)//o tipo de retorno � inteiro; o valor n � o parametro de uma fun��o
{
	// declarando as variaveis; i representa o primeiro valor e j representa o segundo valor
	int i, j; 
	
	for (i=1; i<= n; i++)//varia quando j � igual a n
	{
		for (j=1; j<=n; j++)//varia at� atingir o valor de n
		{
			//os dois elementos precisam ser distintos
			if (i!= j)
			{
				printf ("(%d %d) ", i, j);
			}
		}
	}
}

//fun��o principal
void main (){
	int numero;
	//solicitando o valor
	printf("Digite um numero: ");
	scanf("%d", &numero);
	
	//chamando a fun��o
	exibirPares(numero); //utiliza os valores coletados na fun��o principal. o valor 'numero' � copiado para 'n'
}
