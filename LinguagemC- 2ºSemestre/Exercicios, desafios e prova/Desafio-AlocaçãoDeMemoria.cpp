#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
    //CRIE UM FUNÇÃO MERGE(V,N, W,M), QUE RECEBA DOIS VETORES DE INTEIROS ORDENADOS, V[N] E W[M],
    //E DEVOLVA UM VETOR DINÂMICO ORDENADO COM TODOS OS ITENS DE V E W;

//FUNÇÃO QUE MESCLA E ORDENA OS VETORES:
int mescla_ordena(int *v, int x, int *w, int y, int *c, int z)
{
    for(int i=0; i<x; i++){
        c[i] = v[i];
    }
    for(int j=0; j<y; j++){
        c[j+x] = w[j];
    }

    printf("\n--------- UNIAO DOS VETORES V E W NO VETOR C: ---------\n");
    for(int i=0; i<9; i++)
    {
         printf("\nuniao dos vetores na posicao[%i] do vetor c: %i", i, c[i]);//MOSTRA OS VETORES MESCLADOS
    }

     printf("\n\n--------- ORDENACAO DO VETOR C: ---------\n\n");
    //ORDENA O VETOR MESCALDO
    int copia;
    for(int i=0; i<z; i++)
    {
        for(int j=0; j<z; j++){
            if(c[i] > c[j]){
                copia = c[i];
                c[i] = c[j];
                c[j] = copia;
            }
        }
    }
}

//FUNÇÃO PRINCIPAL:
int main()
{
    int v[5] = {12, 39, 61, 75, 99};
    int w[4] = {28, 40, 55, 81};

    int *c = (int *) malloc(9 * sizeof(int));//CRIA O VETOR C DINAMICAMENTE
    mescla_ordena(v, 5, w, 4, c, 9);//CHAMA A FUNÇÃO

    //int *p = merge(v,5,w,4);

    //MONSTRA O VETOR C EM ORDEM:
    for(int i=9; i>0; i--){
        printf("Ordenados: %i\n", c[i-1]);
   }

    free(c);//LIMPA A MEMÓRIA NOVAMENTE
    c = NULL;
    printf("\n\n");
    system("pause");

    return 0;
}
