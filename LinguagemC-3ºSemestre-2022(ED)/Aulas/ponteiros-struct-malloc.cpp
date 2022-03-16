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

    return 0;
}
