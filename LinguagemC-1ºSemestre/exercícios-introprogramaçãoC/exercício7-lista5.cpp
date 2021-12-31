#include <stdio.h>
#include <stdlib.h>

int main()
{
    //. Faça um programa que leia um vetor de 15 posições de números inteiros. Exibe quantos
    //e quais destes números são primos.

    int i;
    int vet[5], n, primos, n_primos, vet_2[5], o =0;

    for(i=0; i<5; i++)
    {
        printf("Digite um valor: ");
        scanf("%i", &vet[i]);

        for(n=1; n<=vet[i]; n++)
        {
           //printf("ola\n");

            if(vet[i]%n == 0)
            {
                primos ++;
            }

        }

        if(primos == 2)
        {
            //printf("\n eh primos!");
            vet_2[o] = vet[i];
            o++;
        }

        primos = 0;

    }

    /*for(i=0; i<5; i++)
    {
       printf("\n indice [%i], valor: %i", i, vet[i]);

    }*/

    printf("\nA quantidade de primos: %i\n", o);
     for(i=0; i<o; i++)
    {
         printf("\nOs numeros primos sao [%i]: %i", i, vet_2[i]);
    }


   //primo = divisivel por 1 e por ele msm.


    return 0;

}
