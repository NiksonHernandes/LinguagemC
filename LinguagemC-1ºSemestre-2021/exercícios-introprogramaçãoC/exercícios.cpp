#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>


int main()
{
    /*
    //int n1 = 10;
    //float n2 = 12.2;

    //printf( "%d\n%3.2f", n1, n2 );

    //int x = 10;
    //printf("%i\n", x);

    //float ff = 123.33;
    //printf("%3.2f\n", ff);

    //int n1, n2, soma;
    //n1 = 15;
    //n2 = 20;

    //soma = n1 + n2;

    //printf("O resultado da soma eh:%i", soma);

//UTILIZANDO O SCANF:

    //int n1, n2, soma;

    //printf("Por favor, digite um valor:");
    //scanf("%i", &n1); printf("%i\n", n1);

    //printf("Digite outro n�mero:"); scanf("%i", &n2); printf("%i\n", n2);

    //soma = n1 + n2;

    //printf("O resultado da soma eh: %i\n", soma);

//TOMADADA DE DECIS�ES:

    //char c;
    //printf("Digite um caracter em letra min�scula:");
    //scanf ("%c", &c);

    //if( c >= 'a')
    //{
    //    printf("\nSegue o que voce digitou em mai�sculo: > %c < \n", toupper(c));
    //}

//TOMADAD DE DECIS�ES P2 E OPERADORES L�GICOS:

    /*int i=10;

    if(i==5)//comara��o
    {
        printf("TRUE");

    }else{

        printf("FALSE");


    }*/


/*int main(void)
{
   char cLetra;

   cLetra = getchar(); /* embora a fun��o retorne um int, pode-se atribuir para um char devido a convers�o autom�tica da linguagem

   printf("Letra digitada %c\n", cLetra);
   printf("Na tabela ASCII %d\n", cLetra);*/


    int i;
    int vetor[8];



    for(i=0; i<8; i++)
    {
       printf("Informe os valores do vetor: ");
       scanf("%i", &vetor[i]);
    }


    //inverso do vetor:

    for(i=7; i>=0; i--)
    {

        printf("%i \n", vetor[i]);
    }









   return 0;
}













   //\\getchar();
//return 0;

