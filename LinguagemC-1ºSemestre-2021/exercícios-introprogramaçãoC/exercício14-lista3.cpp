#include <stdio.h>

int main()
{
    /* Fa�a um programa que receba o sal�rio inicial de um funcion�rio, calcule e mostre
    o novo sal�rio,acrescido de bonifica��o e de aux�lio escola.*/

    int salinicial, salnovo;


    printf("Informe o salario inicial: ");
    scanf("%i", &salinicial);

    if(salinicial <= 500){
        printf("\nSalario com Bonificacao de 5%%: %.2f\n", (0.05 * salinicial) + salinicial);
        salnovo = salinicial + (0.05 * salinicial);


    }else if(salinicial > 500 && salinicial <=1200){
        printf("\nSalario com Bonificacao de 12%%: %.2f\n", (0.12 * salinicial) + salinicial);
        salnovo = salinicial + (0.12 * salinicial);

    }else{
         printf("\nSEM BONIFICACAO\n");
         salnovo = salnovo + 0;
    }

    //AUXILIO ESCOLA

    if (salinicial <=600){
        printf("Auxilio escolar de 150 reais");
        salnovo = salnovo + 150;

    }else{
        printf("Auxilio escolar de 100 reais\n");
        salnovo = salnovo + 100;
    }

    printf("\n\nSEU SALARIO NOVO EH: %i\n", salnovo);




    getchar();
    return 0;
}
