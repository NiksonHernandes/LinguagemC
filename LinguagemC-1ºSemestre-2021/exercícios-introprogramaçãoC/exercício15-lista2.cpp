#include <stdio.h>
#include <math.h>

int main()
{

    /*O custo ao consumidor de um carro novo � a soma do pre�o de f�brica com o
    percentual de lucro do distribuidor e dos impostos aplicados ao pre�o de f�brica. Fa�a
    um programa que receba o pre�o de f�brica de um ve�culo, o percentual de lucro do
    distribuidor e o percentual de impostos, calcule e mostre:
    a) o valor correspondente ao lucro do distribuidor;
    b) o valor correspondente aos impostos;
    c) o pre�o final do ve�culo. */


    float precofabrica, perlucrodistribuidor, perlimposto, lucrodistr, valimposto, valorfinal;

    printf("Informe o valor do preco de fabrica do veiculo: > reakis < ");
    scanf("%f", &precofabrica);

    printf("\nInforme o percentual de lucro do distribuidor: ");
    scanf("%f", &perlucrodistribuidor);

    printf("\nInforme o percentual de impostos: ");
    scanf("%f", &perlimposto);

    lucrodistr = (perlucrodistribuidor/100) * precofabrica;
    printf("\nO lucro do destribuidor com base no valor de fabrica do veiculo eh: %3.2f reais\n", lucrodistr);

    valimposto = (perlimposto/100) * precofabrica;
    printf("\nO valor a ser pago pelos impostos do carro em relacao ao valor de fabrica do veiculo eh: %3.2f reais\n", valimposto);


   valorfinal = (precofabrica + perlucrodistribuidor) - perlimposto;
   printf("\nO valor final do veiculo, com o desconto de impostos eh: %3.2f reais\n", valorfinal);







    return 0;
}
