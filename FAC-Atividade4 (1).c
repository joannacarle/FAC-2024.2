#include <stdio.h>

void main() {
    int entrevistados, cargo, idade;
    char escolaridade;
    int i;
    int total_professores = 0, doutores_mestres = 0, especialistas = 0, count_fund_incompleto = 0, idade_fund_incompleto = 0;

    printf("Quantas pessoas serao entrevitadas?: ");
    scanf("%d", &entrevistados);

    for (i = 0; i < entrevistados; i++) {
        printf("\nEntrevistado %d:\n", i + 1);

        printf("Informe seu cargo e digite 1 para professor e 2 para funcionario: ");
        scanf("%d", &cargo);

        printf("\nInforme a idade: ");
        scanf("%d", &idade);

        printf(" I - Fundamental incompleto\n F - Fundamental completo\n E - Ensino medio\n G - Graduacaoo\n P - Especializacao\n D - Doutorado\n Informe sua escolaridade:  ");
        fflush(stdin);
        scanf("%c", &escolaridade);
        scanf("%c", &escolaridade);
        // escolaridade = toupper(escolaridade);

        if (cargo == 1); {
            total_professores++;
            if (escolaridade == 'M' || escolaridade == 'D' || escolaridade == 'm' || escolaridade == 'd') {
                doutores_mestres++;
            }
        }

        if (escolaridade == 'P' || escolaridade == 'p') {
            especialistas++;
        }

        if (escolaridade == 'I' || escolaridade == 'i') {
            idade_fund_incompleto += idade;
            count_fund_incompleto++;
        }
    }

    printf("Percentual de professores que são mestres ou doutores: %.2f", (float)doutores_mestres / total_professores);
    printf("\nQuantidade de Especialistas: %d", especialistas);
    printf("\nMédia de idade dos que não possuem o ensino fundamental completo: %.2f", (float)idade_fund_incompleto / count_fund_incompleto);
}
