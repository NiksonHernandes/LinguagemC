#include <stdio.h>
#include <math.h>

int main()
{
    /*FA�A UM PROGRAMA QUE RECEBA O SAL�RIO DE UM FUNCION�RIO, CALCULE E MOSTRE SUA SAL�RIO A RECEBER,
    SABENDO-SE QUE O FUNCION�RIO TEM GRATIFICA��O DE R$50 E PAGA IMPOSTO DE 10% SOBRE O SAL�RIO BASE.*/

    float salarioatual, salarioareceber, salarioimposto;

    printf("Digite seu salario atual: ");
    scanf("%f", &salarioatual);

    salarioimposto = ((0.1 * salarioatual));
    printf("\nValor com desconto de 10%% de imposto sobre o salario base: %3.2f reais\n", abs (salarioimposto));

    salarioareceber = (salarioatual + 50)- salarioimposto;
    printf("\nSalario a receber, acrescimo de R$50 e desconto do imposto: %3.2f reais\n", salarioareceber);

    return 0;

}
