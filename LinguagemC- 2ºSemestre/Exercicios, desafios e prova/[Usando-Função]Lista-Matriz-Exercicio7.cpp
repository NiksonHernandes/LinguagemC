#include <stdio.h>

/*PREENCHA UMA MATRIZ 3X3, CAPTURE A PRIMEIRA MATRIZ CRIADA E ENCONTRE A
    QUANTIDADE DE N�MEROS PARES E A QUANTIDADE DE �MPARES*/

    int mat[3][3];
    int i, j, par = 0, impar = 0;

void entrada_dados()
{
    //entrada de dados da matriz
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            printf("Valor da linha[%i] e coluna[%i]: ", i, j);
            scanf("%i", &mat[i][j]);

            if(mat[i][j]%2 == 0)
            {
                par ++;
            }else
            {
                impar ++;
            }
        }
    }

}
void saida_dados()
{
    printf("\nMatriz principal:\n\n");
    //saida de dados da matriz
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            printf("%i\t", mat[i][j]);

        }
        printf("\n");
    }

    printf("\nQuantidade de numeros pares: %i\n", par);
    printf("\nQuantidade de numeros impares: %i\n", impar);

}
int main()
{

    entrada_dados();
    saida_dados();

    return 0;
}
