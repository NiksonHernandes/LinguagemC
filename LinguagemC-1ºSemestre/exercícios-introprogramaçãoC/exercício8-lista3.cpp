#include <stdio.h>
#include <math.h>

int main()
{

    // Fa�a um programa que mostre o menu de op��es a seguir, receba a op��o do
    //usu�rio e os dados necess�rios para executar cada opera��o.
    /*Menu de op��es:
    1. Somar dois n�meros.
    2. Raiz quadrada de um n�mero.
    Digite a op��o desejada:*/

    float n1, n2;
    int op;

    printf("MENU DE OPCOES:");
    printf("\n1 - Somar dos numeros.");
    printf("\n2 - Raiz quadrada de um numero.");

    printf("\n\nDigite aqui sua opcao: ");
    scanf("%i", &op);

    switch(op){

    case 1:
        printf("\n---SOMA ENTRE DOIS NUMEROS---");
        printf("\n\nDigite um numero: ");
        scanf("%f", &n1);
        printf("Digite outro numero: ");
        scanf("%f", &n2);

        printf("\nA soma de %.1f e %.1f eh: %.1f\n", n1, n2, n1+n2);

        break;

    case 2:
        printf("\n---RAIZ QUADRADA DE UM NUMERO---");
        printf("\n\nDigite um numero: ");
        scanf("%f", &n1);

        printf("\nA raiz quadrada de %.1f eh: %.1f\n ", n1, sqrt(n1));
        break;
    default:
        printf("\nOpcao invalida!\n");

    }


    getchar ();
    return 0;
}
