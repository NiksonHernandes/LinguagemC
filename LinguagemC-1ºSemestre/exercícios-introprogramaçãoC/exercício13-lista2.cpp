#include <stdio.h>
#include <math.h>

int main()
{
    /*Sabe-se que:
    p� = 12 polegadas
    1 jarda = 3 p�s
    1 milha = 1,760 jarda
    Fa�a um programa que receba uma medida em p�s, fa�a as convers�es a seguir
    e mostre os resultados.
    a) polegadas;
    b) jardas;
    c) milhas*/

    float polegadas, jarda, milha, medidaempes;

    printf("Digite a medida em pes: ");
    scanf("%f", &medidaempes);

    polegadas = 12 * medidaempes;
    printf("\nA medida em polegas eh: %f", polegadas);

    jarda = medidaempes * 0.333 ;
    printf("\nA medida em jardas eh: %f", jarda);

    milha = medidaempes * 0.000189;
    printf("\nA medida em milhas eh: %f\n", milha);



    return 0;
}

