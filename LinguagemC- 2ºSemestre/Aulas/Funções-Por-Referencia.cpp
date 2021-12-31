#include <stdio.h>
#include <stdlib.h>

//passagem de função por referencia sem retorno:

//vetor
void imprime_vetor(int *n, int m)
{
    int i;
    for(i=0; i<m; i++)
    {
        printf("%i \n", n[i]);
    }
}

//matriz
void imprime_matriz(int mat[][2], int x)
{
    int i, j;
    for(i=0; i<x; i++)
    {
        for(j=0; j<2; j++)
        {
            printf("%i \n", mat[i][j]);
        }
    }
}

int main()
{
    /*Na chamada da função, usa-se apenas o nome do array, e sem o operador '&';*/

    int v[5] = {1,2,3,4,5};
    imprime_vetor(v,5);

    int mat[3][2] = {{1,2},{2,5},{7,8}};
    imprime_matriz(mat, 3);

    return 0;
}
