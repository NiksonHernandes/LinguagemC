#include <stdio.h>

int main()
{
    /*Fa�a um programa que receba o n�mero de horas trabalhadas e o valor do sal�rio
    m�nimo, calcule e mostre o sal�rio a receber, seguindo estas regras:
    a) a hora trabalhada vale a metade do sal�rio m�nimo.
    b) o sal�rio bruto equivale ao n�mero de horas trabalhadas multiplicado pelo valor da
    hora trabalhada.
    c) o imposto equivale a 3% do sal�rio bruto.
    d) o sal�rio a receber equivale ao sal�rio bruto menos o imposto.
    */

    float numhorastrab, salaminimo, salareceber, salabruto, horastrabvalor, imposto;

    printf("Digite o numero de horas trabalhadas: ");
    scanf("%f", &numhorastrab);

    printf("Digite o valor do Salario minimo: ");
    scanf("%f", &salaminimo);

    horastrabvalor = salaminimo /2;
    printf("Valor da hora trabalhada: %2.2f\n", horastrabvalor);

    salabruto = horastrabvalor * numhorastrab;
    printf("O Salario bruto eh: %2.2f\n", salabruto);

    imposto = salabruto * 0.03;
    printf("Imposto de 3%%: %2.2f\n", imposto);

    salareceber = salabruto - imposto;
    printf("o Salario a receber eh: %2.2f reais\n", salareceber);











    return 0;

}
