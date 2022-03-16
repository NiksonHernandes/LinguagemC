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

    return 0;
}
