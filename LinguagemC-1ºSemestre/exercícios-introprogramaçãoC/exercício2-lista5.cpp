#include <stdio.h>
#include <stdlib.h>
#include<locale.h> /* Para utilizarmos a fun��o setlocale que faz o printf() mostrar caracteres da l�ngua Portuguesa como �, �, �*/

int main()
{
    /*  Fa�a um programa que carregue um vetor com sete n�meros inteiros, calcule e mostre:
    � Os n�meros m�ltiplos de 2
    � Os n�meros m�ltiplos de 3
    � Os n�meros m�ltiplos de 2 e 3 (ao mesmo tempo)*/

    int i, x=0, y=0, z=0, vet[7];
    int vet_2[7], vet_3[7], vet_2_3[7];

    printf("Informe um numero: \n");
    for(i=0; i<7; i++)
    {
        scanf("%i", &vet[i]);
    }


    for(i=0; i<7; i++)
    {
        if(vet[i]%2 == 0)
        {

            vet_2[x] = vet[i];
            x++;

        }else if(vet[i]%3 == 0)
        {
            printf("\nMultiplo de 3\n");
            vet_3[y] = vet[i];
            y++;



        }else if(vet[i]%2 ==0 && vet[i]%3 == 0)
        {
            printf("\nMultiplo de 2 e 3 ao meso tempo\n");
            vet_2_3[z] = vet[i];
            z++;

        }

    }


        printf("\nMultiplos de 2:");

        for(i=0; i<x; i++)
        {
            printf("\n %i ", vet_2[i]);
        }



    return 0;
}
