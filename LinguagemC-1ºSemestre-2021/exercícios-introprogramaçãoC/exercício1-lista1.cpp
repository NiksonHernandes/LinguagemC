#include <stdio.h>

int main()
{
    //FAÇA UM PROGRAMA QUE RECEBA QUATRO NÚMEROS INTEIROS, CALCULE E MOSTRE A SOMA DESSES NÚMEROS:

    int n1, n2, soma;

    printf("Digite um numero: ");
    scanf("%i", &n1);

    printf("\nDigite outro numero: ");
    scanf("%i", &n2);

    soma = n1 + n2;

    printf("\nO resultado da soma eh: %i\n", soma);

    return 0;

}
