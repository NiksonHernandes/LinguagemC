#include <stdio.h>
#include <stdlib.h>

int main(){

    //ponteiros:
    int z = 34;
    int *ponteiro;

    printf("Valor de z: %i", z);
    printf("\nEndereço de memória do Z: %x", &z);

    ponteiro = &z;

    printf("\n\nValor alocado no ponteiro: %i", *ponteiro);
    printf("\nEndereço apontado pelo ponteiro: %x", ponteiro);
    printf("\nEndereço de memória do ponteiro: %x", &ponteiro);

    *ponteiro = 20; //alterando o valor do ponteiro, altera na variável tmb

    printf("\n\nValor de z: %i", z);
    printf("\n\n------------------\n\n");

    /*ALOCAÇÃO DINÂMICA:

    sizeof -> função que determina o nº de bytes p/ um determinado dado
        x = sizeof(int); // retorno 4

    malloc -> é uma função que aloca um espaço de memória e retorna um ponteiro do tipo
    void p/ o inicio do espaço de memoria alocada

    free -> libera o espaço de memória alocado.

    OBS. -->> o (float *) antes do malloc, é para converter o ponteiro p/ o tipo de dado
    desejado, como a função malloc retorna um ponteiro do tipo VOID, precisamos converter
    esse ponteiro p/ o tipo da nossa variável, no caso float;*/

    int *v; //tem q ser um ponteiro, pq ele retorna um ponteiro;
    int i, numero;

    printf("Digite o numero de componentes do vetor: ");
    scanf("%i", &numero);

    v = (int *)malloc(numero * sizeof(int));

    //armazena
    for(i = 0; i<numero; i++){
        printf("Digite os valores: ");
        scanf("%i", &v[i]);
    }

    //mostra
    for(i =0; i<numero; i++){
        printf("\nValores [%i]: %i", i, v[i]);
    }
    free(v);//limpa a memória dela


    return 0;
}
