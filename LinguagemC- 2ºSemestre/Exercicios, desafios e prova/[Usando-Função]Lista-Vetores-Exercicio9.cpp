#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

    /*PREENCHA UM VETOR COM 3 NOMES E MOSTRE QUANTAS LETAS A E E TEM NOS 3 NOMES
    MOSTRAR QUANTAS A E E POSSUEM;*/

    char nome[3][30];
    int letraA = 0, letraE = 0;
    int i, j, x = 0;

void entrada_dados()
{

     for(int i=0; i<3; i++)
    {
        setbuf(stdin, NULL); //LIMPA O TECLADO
        printf("Infome o nome %i: ", i+1);
        gets(nome[i]);
    }

}

void processamento()
{
    for(i=0; i<3; i++)
    {
        printf("\nO nome %i eh: %s",i+1, nome[i]);
        //conta os caracteres digitados
        x = strlen(nome[i]);

        for(j=0; j<x; j++)
        {
            if(nome[i][j] == 'a' || nome[i][j] == 'A')
            {
                letraA ++;
            }
            if(nome[i][j] == 'e' || nome[i][j] == 'E')
            {
                letraE ++;
            }
        }
    }
}

void saida_dados()
{
    printf("\n\nQuantidade de letras A: %i", letraA);
    printf("\nQuantidade de letras E: %i\n", letraE);
}


int main()
{

    entrada_dados();
    processamento ();
    saida_dados();

    return 0;

}
