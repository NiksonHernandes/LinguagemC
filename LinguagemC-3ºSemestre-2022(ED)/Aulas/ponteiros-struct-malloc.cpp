#include <stdio.h>
#include <stdlib.h>

int main(){

    //ponteiros:
    int z = 34;
    int *ponteiro;

    printf("Valor de z: %i", z);
    printf("\nEndere�o de mem�ria do Z: %x", &z);

    ponteiro = &z;

    printf("\n\nValor alocado no ponteiro: %i", *ponteiro);
    printf("\nEndere�o apontado pelo ponteiro: %x", ponteiro);
    printf("\nEndere�o de mem�ria do ponteiro: %x", &ponteiro);

    *ponteiro = 20; //alterando o valor do ponteiro, altera na vari�vel tmb

    printf("\n\nValor de z: %i", z);
    printf("\n\n------------------\n\n");

    /*ALOCA��O DIN�MICA:

    sizeof -> fun��o que determina o n� de bytes p/ um determinado dado
        x = sizeof(int); // retorno 4

    malloc -> � uma fun��o que aloca um espa�o de mem�ria e retorna um ponteiro do tipo
    void p/ o inicio do espa�o de memoria alocada

    free -> libera o espa�o de mem�ria alocado.

    OBS. -->> o (float *) antes do malloc, � para converter o ponteiro p/ o tipo de dado
    desejado, como a fun��o malloc retorna um ponteiro do tipo VOID, precisamos converter
    esse ponteiro p/ o tipo da nossa vari�vel, no caso float;*/

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
    free(v);//limpa a mem�ria dela


    return 0;
}
