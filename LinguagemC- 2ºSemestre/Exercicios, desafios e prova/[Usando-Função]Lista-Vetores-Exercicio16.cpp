#include <stdio.h>
#include <stdlib.h>

    /*PREENCHER UM VETOR COM OS NUMEROS 10 A 20, E DEPOIS MOSTRAR OS ELEMENTOS
        PARES DO VETOR DE TR�S PARA FRENTE. TAMB�M MOSTRAR OS NUMERO �MPARES */

        int vet[11], vet2[10], vet3[10];
        int i = 0, x = 0, cont_par = -1, cont_impar=0;
        int j = 0, y;
        int n = 0;

void determinando_10(){

    //determinando de 10 ate 20
    for(i=0; i<11; i++)
    {

        vet[i] = x + 10;
        x++;

    }

}

void comparando()
{
    //compara��o de par e impar
        for(i=0; i<11; i++)
        {
            printf("%i\n", vet[i]);

            if(vet[i]%2 == 0)
            {
                vet2[j] = vet[i];
                j++;
                cont_par++;

            }else if(vet[i]%2 != 0)
            {
                vet3[n] = vet[i];
                n++;
                cont_impar++;

            }

        }
}

void saida_dados()
{
    //invertendo os numeros pares;
        for(y=cont_par; y>=0; y--)
        {
            printf("\nos valores pares sao: %i", vet2[y]);
        }

        //numeros impares
        for(i=0; i<cont_impar; i++)
        {
            printf("\nos valores impares sao: %i", vet3[i]);
        }

}

int main()
{
        determinando_10();
        comparando();
        saida_dados();

        printf("\n ");


    return 0;
}
