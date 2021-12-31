#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

void troca (int *i, int *j)
{
    int *temp;

    temp = i;
    i = j;
    j = temp;

    printf("x: %i, y: %i", *i, *j);


}

int main()
{
/*
    int x, y, *p;
    y = 0;
    p = &y;
    x = *p;
    x = 4;
    (*p)++;
    --x;
    (*p) += x;

    printf("%i %i %i", x, y, *p);*/

    /*int x, *p;
    x = 100;
    p = &x;
    printf("Valor de p: %d \n", *p);*/
    int x=10, y=11;
    troca(&x, &y);

    //
    char *a, *b;
    a = "uva";
    b = "abacate";

    if (*a < *b)
        printf ("\n\n %s vem antes de %s no dicionario", a, b);
    else
        printf ("\n\n %s vem depois de %s no dicionario", a, b);

    return 0;
}
