#include <stdio.h>
#include <math.h>

int main()
{
    /*Fa�a um programa que receba um n�mero real, encontre e mostre:
    a) a parte inteira desse n�mero;
    b) a parte fracion�ria desse n�mero;
    c) o arredondamento desse n�mero.*/

    float n1, partefracionada, arredondamento, fracionada;

    printf("Digite um numero: ");
    scanf ("%f", &n1);


    printf("\nA parte inteira eh: %.3f", ceil(n1) );

    partefracionada = modf(n1,&fracionada);
    printf("\nA parte fracionada eh: %.3f", fracionada );

    printf("\nO arredondamento eh: %.3f", ceil(n1));












    getchar();
    return 0;

}
