#include <stdio.h>
#include <stdlib.h>
#include <locale.h> //necessário para usar setlocale

int comparacao(int *v, int x, int *minimo, int *maximo)
{
     for(int i=0; i<x; i++){
        if(v[i] > *maximo)
            *maximo = v[i];

        if(v[i] < *minimo)
            *minimo = v[i];
    }
}

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int v[5] = {26, 55, 89, 14, 77};
    int minimo = 999, maximo = 0;

    comparacao(v, 5, &minimo, &maximo);

    printf("Vetor = {26, 55, 89, 14, 77}; \n\n");
    printf("Mínimo: %i\n", minimo);
    printf("Máximo: %i\n", maximo);

    return 0;
}

