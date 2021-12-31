#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
//#include "C:\Users\Acer\OneDrive\Área de Trabalho\LinguagemC- 2ºSemestre\Aulas_Linguagem_em_C\Bilioteca-Aula13\biblioteca-teste.h"
//ou
#include "Bilioteca-Aula13\biblioteca-teste.h"


int main()
{
    //CRIANDO BIBLIOTECAS
    setlocale(LC_ALL, "Portuguese");

    int valor1 =20 , valor2 =10;

    printf("\nO valor da soma de %i + %i é %i\n", valor1, valor2, soma(&valor1, &valor2));


    return 0;
}
