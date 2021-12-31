#include <stdio.h>

int main()
{

    /* Fa�a um programa que apresente o menu a seguir, permita ao usu�rio escolher
    a op��o desejada, receba os dados necess�rios para executar a opera��o e mostre
    o resultado. Verifique a possibilidade de op��o inv�lida e n�o se preocupe com
    restri��es, como sal�rio negativo.*/

    int op;
    float salario;

    printf("MENU DE OPCOES:");
    printf("\n1 - Imposto;");
    printf("\n2 - Novo Salario;");
    printf("\n3 - Classificacao;");

    printf("\n\nInfome a opcao desejada: ");
    scanf("%i", &op);

    switch(op)
    {
        //Na op��o 1: receber o sal�rio de um funcion�rio, calcular e mostrar o valor do
        //imposto usando as regras a seguir.

        case 1:
            printf("\n---OPCAO IMPOSTO---");

            printf("\n\nInforme o seu salario: ");
            scanf("%f", &salario);

            if(salario <500){
                printf("\n5%% de imposto sobre o salario");
                printf("\nValor a ser pago de imposto: R$ %.2f reais\n", 0.05 * salario);

            }else if(salario >=500 && salario <=850){
                printf("\n10%% de imposto sobre o salario");
                printf("\nValor a ser pago de imposto: R$ %.2f reais\n", 0.1 * salario);

            }else {
                printf("\n15%% de imposto sobre o salario");
                printf("\nValor a ser pago de imposto: R$ %.2f reais\n", 0.15 * salario);
            }
        break;

        //Na op��o 2: receber o sal�rio de um funcion�rio, calcular e mostrar o valor do novo
        //sal�rio, usando as regras a seguir.

        case 2:
            printf("\n---OPCAO NOVO SALARIO---");

            printf("\n\nInfome o seu salario: ");
            scanf("%f", &salario);

            if(salario > 1500){
                printf("\nO seu novo salario eh: R$ %.2f reais\n", salario + 25);

            }else if(salario >=750 && salario <= 1500){
                printf("\nO seu novo salario eh: R$ %.2f reais\n", salario + 50);

            }else if(salario >=450 && salario <750){
                printf("\nO seu novo salario eh: R$ %.2f reais\n", salario + 75);

            }else {
                printf("\nO seu novo salario eh: R$ %.2f reais\n", salario +100);
            }
        break;

        //Na op��o 3: receber o sal�rio de um funcion�rio e mostrar sua classifica��o usando
        //a tabela a seguir.

        case 3:
            printf("\n---OPCAO CLASSIFICACAO---");

            printf("\n\nInfome o seu salario: ");
            scanf("%f", &salario);

            if(salario <=700){
                printf("\nVoce eh MAL REMUNERADO!! :( \n");

            }else{
                printf("\nVoce eh BEM REMUNERADO!! :) \n");
            }

        break;

        default:
            printf("\nOpcao invalida!");

    }


    getchar();
    return 0;
}
