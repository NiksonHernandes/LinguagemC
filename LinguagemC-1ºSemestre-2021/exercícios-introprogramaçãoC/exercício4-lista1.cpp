#include <stdio.h>

int main()
{
    /*FA�A UM PROGRAMA QUE RECEBA O SAL�RIO DE UM FUNCION�RIO, CALCULE E MOSTRE O NOVO SAL�RIO,
    SABENDO-SE QUE SOFREU UM AUMENTO DE 25%.*/

    float salario,novosalario;

    printf("Digite o salario atual: ");
    scanf("%f", &salario);

    novosalario = salario * 1.25;

    printf("\nO salario novo, com aumento de 25%%, eh: %3.2f\n", novosalario);

    return 0;

}
