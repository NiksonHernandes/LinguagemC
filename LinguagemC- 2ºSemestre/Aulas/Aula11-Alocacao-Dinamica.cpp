#include <stdio.h>
#include <stdlib.h>

void leia(int *v, int n){

    for(int i=0; i<n; i++)
    {
        printf("\nDigite o valor de %i: ", n);
        scanf("%i", &v[i]);
        printf("\nValor: %i", v[i]);

    }

}

int main()
{
    /*int *p = (int *)(malloc (sizeof(int)));
    *p = 5;

    printf("%i\n", *p);
    free(p);
    p = NULL;
    return 0;*/

    //CRIAR VETOR

    int n;
    printf("Tamanho da sequencia?");
    scanf("%i", &n);

    int *v = (int *)(malloc(n*sizeof(int))); //malloc retorna o valor, sempre retorna ponteiro, que é armazenado em int *
    leia(v, n);

    return 0;
}
