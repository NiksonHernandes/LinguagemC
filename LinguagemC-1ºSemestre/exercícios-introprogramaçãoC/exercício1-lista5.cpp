#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Fa�a um programa que l� 10 notas e exiba quantas s�o maiores que 7.

    int i, maiorsete = 0;
    float nota[11];

    for(i=1; i<=10; i++)
    {
        printf("Informe a nota do aluno %i: ", i);
        scanf("%f", &nota[i]);
        printf("\n");

        if(nota[i]>7)
        {
            maiorsete = maiorsete + 1;
        }else
        {
            maiorsete = maiorsete + 0;
        }
    }

    printf("\nA quantidade de notas superior a 7 eh: %i", maiorsete);



    return 0;
}
