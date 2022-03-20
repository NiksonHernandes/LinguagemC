#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

#define N 3

typedef struct STRUCT_FILA{
    int dados[N];
    int fim;
}VAR_STRUCT_FILA;

void inicializar_fila(VAR_STRUCT_FILA *fila1){
    for(int i=0; i<N; i++){
        (*fila1).dados[i] = 0;
    }
    fila1->fim = 0;
}

void enfileira_elementos(VAR_STRUCT_FILA *fila1, int valor){
    if(fila1->fim == N){
        printf("Fila cheia\n");
        return;
    }else{
        fila1->dados[fila1->fim] = valor;
        (*fila1).fim ++;
    }
}

int desenfileira_elementos(VAR_STRUCT_FILA *fila1){
    int ram;
    if(fila1->fim == 0){
        printf("Fila vazia\n");
        return 0;

    }else{
        ram = fila1->dados[0];
        for(int i=0; i<fila1->fim; i++){
            fila1->dados[i] = fila1->dados[i+1];
        }
        fila1->fim --;
        return ram;
    }
}

void imprime_fila(VAR_STRUCT_FILA *fila1){
    printf("Imprimindo a fila:\n");
    for(int i=0; i<N; i++){
        printf("%i \n", fila1->dados[i]);
    }

}

int main(){

    VAR_STRUCT_FILA fila1;

    inicializar_fila(&fila1);
    enfileira_elementos(&fila1, 4);
    enfileira_elementos(&fila1, 6);
    enfileira_elementos(&fila1, 5);


    /*for(int i=0; i<N; i++){
        printf("Fila: %i\n", fila1.dados[i]);
    }
    printf("\n");

    desenfileira_elementos(&fila1);

     for(int i=0; i<N; i++){
        printf("Fila: %i\n", fila1.dados[i]);
    }*/

    imprime_fila(&fila1);
    desenfileira_elementos(&fila1);
     imprime_fila(&fila1);

    desenfileira_elementos(&fila1);
     imprime_fila(&fila1);

    return 0;
}
