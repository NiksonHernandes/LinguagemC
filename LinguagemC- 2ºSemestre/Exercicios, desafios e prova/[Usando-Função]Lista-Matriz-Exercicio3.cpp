#include <stdio.h>
#include <stdlib.h>

 /*FAÇA UM PROGRAMA QUE LEIA UMA MATRIZ 6X6, CONTE E ESCREVA QUANTOS VALORES
    SÃO MAIORES DO QUE 10;*/

    int mat[6][6];
    int i, j, maior_10 = 0;

void entrada_dados()
{
    //entrada de dados
    for(i=0; i<6; i++)
    {
        for(j=0; j<6; j++)
        {
            printf("Digite o valor de [%i][%i]: ", i, j);
            scanf("%i", &mat[i][j]);

            //comparação maior do que 10
            if(mat[i][j] >10)
            {
                maior_10 ++;
            }
        }
    }
}

void saida_dados()
{
     printf("\nMatriz principal:\n\n");
    //saida de dados da matriz
    for(i=0; i<6; i++)
    {
        for(j=0; j<6; j++)
        {
            printf("%i\t", mat[i][j]);
        }
        printf("\n");
    }

    //saida dos valores maiores do que 10
    printf("\nValores maiores do que 10: %i\n", maior_10);
}

int main()
{
   entrada_dados();
   saida_dados();

    return 0;
}
