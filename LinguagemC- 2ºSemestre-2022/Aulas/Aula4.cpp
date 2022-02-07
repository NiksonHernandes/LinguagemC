#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    /*
    int x, y, tam;
    char nome[30];

    printf("Informe o seu nome completo: ");
    gets(nome);

    tam = strlen(nome);
    printf("\nO nome invertido: ");
    for(x=tam-1; x>=0; x--)
    {
        printf("%c", nome[x]);
    }
    */

    //ESTRUTURA DE REPETIÇÃO

   /* int i = 1, x;

    printf("TABUADA COM WHILE \n\n");

    printf("Tabuada: ");
    scanf("%i", &x);

    while(i<=10)
    {
        printf("Tabuada [%i] vezes [%i] = %i\n", x, i, x*i);
        i++;
    }

    system("PAUSE");

    printf("\nTABUADA COM DO...WHILE\n\n");
    int j= 1, c, tab;

    printf("Tabuada 2: ");
    scanf("%i", &c);

    do //repita
    {
        tab = c * j;
        printf("Tabuada [%i] vezes [%i] = %i\n", c, j, tab);
        j++;

    } while(j <=10);//até que... (condição - verdade)

    system("PAUSE");

    printf("\nTABUADA COM FOR\n\n");

    int k, l, m;

    printf("Tabuada 3: ");
    scanf("%i", &l);

    for(k =1; k <=10; k++)
    {
         printf("Tabuada [%i] vezes [%i] = %i\n",k, l, k*l);
    }

    system("PAUSE");
    */

    //não quero q o numero seja repetido no vetor


    int vet[100] = {0}, i, num_dig =0, j;


    for(i = 0; i<100; i++)
    {

       printf("No indice [%i]: ", i);
       scanf("%i", &num_dig);


       for(j = 0; j<100; j++)
       {
           if(num_dig == vet[j])
           {
               printf("\nNao foi possivel indice [%i] digite o numero novamente: ", i);
               scanf("%i", &num_dig);
               j=0;
           }
       }

       vet[i] = num_dig;

    }


    return 0;

}
