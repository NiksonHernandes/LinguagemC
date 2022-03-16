#include <stdio.h>
#include <stdlib.h>

int main(){

    /*char c;
    char *p;

    c = 'a';

    printf("O valor de c = %c, o endereco c = %p", c, &c);

    p = &c;

    printf("\n\no valor apotado por p = %c, o valor de p = %p, e endereco de p = %p\n", *p, p, &p);

    *p = 'b'; op de acesso

    printf("\n\no valor apotado por p = %c, o valor de p = %p, e endereco de p = %p\n", *p, p, &p);
    */
    //modo 2: Dinamicamente -> stdlib.h

    float *x;

    x =(float*)malloc(sizeof(float));
    if(x == NULL){
        printf("Sem memória");
    }else{
        *x = 10;
    }

    printf("\nValor de x = %.2f", *x);

    free(x);
        printf("\nValor de x = %.2f", *x);
    return 0;
}
