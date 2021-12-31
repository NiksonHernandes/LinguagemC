#include <stdio.h>

int main()
{
    /*Pedro comprou um saco de ra��o com peso em quilos. Ele possui dois gatos, para
    os quais fornece a quantidade de ra��o em gramas. A quantidade di�ria de ra��o
    fornecida para cada gato � sempre a mesma. Fa�a um programa que receba o peso
    do saco de ra��o e a quantidade de ra��o fornecida para cada gato, calcule e mostre
    quanto restar� de ra��o no saco ap�s cinco dias.*/

    float pesoracao, porcaogato, restou, cincodias;

    printf("Informe o peso do saco de racao em KG: ");
    scanf("%f", &pesoracao);

    printf("Informe a quantidade de racao para cada gato em GRAMAS: ");
    scanf("%f", &porcaogato);

    restou = (pesoracao * 1000) - porcaogato;
    printf("\nRestou no saco em KG: %.0f KG", restou);

    cincodias = (pesoracao * 1000) - (porcaogato * 5);
    printf("\nApos 5 dias, restara %.0f KG de racao no saco!\n", cincodias);

    getchar();
    return 0;
}
