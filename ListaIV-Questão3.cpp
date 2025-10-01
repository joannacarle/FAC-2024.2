/* QUESTÃO 03: Joãozinho investiu Q reais em
uma aplicação com rendimento fixo de R% ao
mês. Pede-se a implementação de um
programa que calcule o valor (e exiba-o)
disponível na conta de Joãozinho após A anos
de investimento.*/

#include <stdio.h>

int main(){
	float valorInvestido, rendimento, valorDisponivel;
	int anosInvestimento, meses;
	
	printf("Qual o valor investido?: ");
	scanf("%f", &valorInvestido);
	
	printf("Qual a porcentagem do rendimento?: ");
	scanf("%f", &rendimento);
	
	printf("Quantos anos o valor ficara rendendo?: ");
	scanf("%d", &anosInvestimento);
	
	meses = anosInvestimento*12;
	valorDisponivel = valorInvestido;
	
	for (int i = 1; i <=meses; i++){
		valorDisponivel+=valorInvestido*(rendimento/100);		
	}
	
	printf("Valor disponivel: %2.f", valorDisponivel);
}
