#include<stdio.h>

/* Construir um algoritmo que calcule o peso ideal
de uma pessoa, de acordo com o seu gênero e
altura, utilizando as seguintes fórmulas:
      para homens: (72.7*h)-58
      para mulheres: (62.1*h)-44.7 */
int main(){
	char genero;
	float altura, peso;
	
	printf ("Qual o seu genero? [H/M]: ");
	scanf ("%c", &genero);
	
	printf ("\nQual a sua altura?: ");
	scanf ("%f", &altura);

	if ((genero == 'H') || (genero == 'h'))
	{
		peso = (72.7*altura)-58;
	}
	else
	{
		peso = (62.1*altura)-44.7;
	}
	
	printf ("\nPeso ideal: %.1f kg", peso);
	
}     
