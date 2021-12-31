#include <stdio.h>

int main()
{
    //FAÇA UM PROGRAMA QUE RECEBA 3 NOTAS, CALCULE E MOSTRE A MÉDIA ARITMÉTICA:

    int nota1, nota2, nota3;
    float media;

    printf("Digite a primeira nota: ");
    scanf("%i", &nota1);

    printf("\nDigite a segunda nota: ");
    scanf("%i", &nota2);

    printf("\nDigite a terceira nota: ");
    scanf("%i", &nota3);

    media = (nota1+nota2+nota3)/3;
    printf("\nA media das notas eh: %3.2f\n", media);

    return 0;
}
