#include <stdio.h>
#include <stdlib.h>
#include <locale.h> //necessário para usar setlocale

int main()
{
    setlocale(LC_ALL, "Portuguese");

    printf("Olá, meu nome é lol");

}