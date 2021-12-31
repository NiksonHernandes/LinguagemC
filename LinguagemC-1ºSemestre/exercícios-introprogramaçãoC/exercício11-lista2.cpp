#include <stdio.h>
#include <math.h>

int main()
{
    /*Fa�a um programa que receba um n�mero positivo e maior que zero, calcule e mostre:
    a) o n�mero digitado ao quadrado;
    b) o n�mero digitado ao cubo;
    c) a raiz quadrada do n�mero digitado;
    d) a raiz c�bica do n�mero digitado.*/

    int num1, quadrado, cubo;
    float raizquadrada, raizcubica;

    printf("Digite um numero positivo e diferente de zero: ");
    scanf("%i", &num1);

    if(num1 > 0){

        quadrado = pow (num1, 2);
        cubo = pow (num1, 3);
        raizquadrada = sqrt (num1);
        raizcubica = cbrt (num1);

        printf("\nO quadrado eh: %i\n", quadrado);//a
        printf("\nO cubo eh: %i\n", cubo);//b
        printf("\nA raiz quadrada eh (aproximadamente): %.3f\n", raizquadrada);//c
        printf("\nA raiz cubica eh (aproximadamente): %.3f\n", raizcubica);//d

    } else {

        printf("\nValor invalido, tente novamente :( \n");

    }


    return 0;
}
