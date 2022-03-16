#include <stdio.h>
#include <stdlib.h>

int main(){

    int tam;
    int *p;

    printf("Digite o tam do vetor: ");
    scanf("%i", &tam);

    p = (int*)malloc(tam*sizeof(tam));

    if(p == NULL){
        printf("Sem memória");
    }else{
        for(int i = 0; i<tam; i++){
            printf("\nValor de [i]: ", i);
            scanf("%i", &p[i]);

        }

    }

    free(p);

    return 0;
}
