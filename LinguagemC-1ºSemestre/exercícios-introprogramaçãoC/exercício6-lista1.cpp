#include <stdio.h>

int main()
{
    /*FA�A UM PROGRAMA QUE RECEBA O SAL�RIO BASE DE UM FUNCION�RIO, CALCULE E MOSTRE O SAL�RIO A RECEBER,
    SABENDO-SE QUE O FUNCION�RIO TEM GRATIFICA��O DE 5% SOBRE O SAL�RIO BASE E PAGA IMPOSTO DE 7%    TAMB�M
    SOBRE O SAL�RIO BASE.*/

    float salariobase, salarioareceber, gratificacao,imposto, salariogratificacao, salarioimposto;


    printf("Digite o salario base: ");
    scanf("%f", &salariobase);


    salariogratificacao = salariobase * 0.05;
    printf("\nGratificacao de 5%% sobre o salario base: %.2f\n", salariogratificacao);

    salarioimposto =  0.07 * salariobase ;
    printf("\nImposto de 7%% sobre o salario base: %.2f\n   ", salarioimposto);

   salarioareceber = (salariobase + salariogratificacao)-salarioimposto;
   printf("\nSalario a receber: %.2f\n", salarioareceber);

    return 0;
}

