#include <stdio.h>
#include <stdlib.h>

void exercicio_1()
{
    //FAÇA UM ALGORITMO QUE LEIA 10 NUMEROS E OS COLOQUE EM UM VETOR.
    //AO FINAL, APRESENTE NA TELA OS VALORES ARMAZENADOS NAS POSIÇÕES PARES.

    int vet[10], i, j=0;

    for(i=0; i<10; i++)
    {
        printf("Digite o valor do vetor: ");
        scanf("%i", &vet[i]);
    }

   /* for(i=0; i<10; i++)
    {
        if(i%2 == 0)
        {
            while(j<1)
                {
                    printf("\nNo indice [%i] temos o valor: %i", i, vet[i]);
                    j ++;

                }
                j=0;

        }
    }*/

    //segunda forma de fazer:

    for(i=0; i<10; i+=2)
    {
        printf("\nNo indice [%i] temos o valor: %i", i, vet[i]);
    }

}



void exercicio_2()
{
    //desenvolva um algoritmo que inicialize um vetor de 15 elementos
    //com os valores 3,6,9,12 .. 45 e, ao final, imprima o vetor no formato de tabela

    int vet[16], i;

    /*for(i=1; i<=15;i++)
    {
        vet[i] = i*3;
        printf("\nNa posicao [%i] elemento %i", i, vet[i]);
    }*/
//outra opção:

    for(i=0; i<15; i++)
    {
        vet[i] = (i+1) * 3;
        printf("\nNa posicao [%i] elemento %i", i, vet[i]);
    }


}



void exercicio_3a ()
{
    //Leia um vetor com 20 posições;
    //a-Permita que o usuário consulte o valor amazenado a partir de um indice;

    int vet[5], i;
    int num_escolhido;

    for(i=0; i<5; i++)
    {
        printf("Digite um valor no indice [%i]: ", i);
        scanf("%i", &vet[i]);
    }

    printf("\nEscolha o indice a ser analisado: ");
    scanf("%i", &num_escolhido);

    if(num_escolhido >= 5)
    {
        printf("\nInforme um indice invalido!\n");

    }else{
        printf("\nO numero no indice [%i] eh: %i", num_escolhido, vet[num_escolhido]);
    }

}



void exercicio_3b()
{

    /*b- Permita que o usuário consulte pelo índice quantos valores precisar. Pare a consulta
    apenas quando um valor de índice inválido for fornecido(menor que zero e maior ou igual a 20)*/

    int vet[5], i;
    int num_escolhido;

    for(i=0; i<5; i++)
    {
        printf("Digite um valor no indice [%i]: ", i);
        scanf("%i", &vet[i]);
    }


    do{


        printf("\nEscolha o indice a ser analisado: ");
        scanf("%i", &num_escolhido);

        if((num_escolhido >=0) && (num_escolhido <=5)) //para tirar a ultima repetição!
           {
               printf("\nO numero no indice [%i] eh: %i", num_escolhido, vet[num_escolhido]);
           }



    }while((num_escolhido >=0) && (num_escolhido <=5));

    printf("\nINDICE INVALIDO!");

    //outra forma:

   /* printf("\nEscolha o indice a ser analisado: ");
    scanf("%i", &num_escolhido);

    while((num_escolhido >= 0) && (num_escolhido <=5))
    {

        printf("\nO numero no indice [%i] eh: %i", num_escolhido, vet[num_escolhido]);

        printf("\nEscolha o indice a ser analisado: ");
        scanf("%i", &num_escolhido);

    }

    printf("\nVALOR DE INDICE INVALIDO!!\n");*/

}


void exercicio_3c()
{
    /*leia um inteiro n do usuário e o busque no vetor, ao final, diga
    se ele existe ou não existe no vetor e quantas vezes ele foi achado*/


    int vet[5], i;
    int num_escolhido, num_buscar, achou = 0, existe = 0;

    for(i=0; i<5; i++)
    {
        printf("Digite um valor no indice [%i]: ", i);
        scanf("%i", &vet[i]);
    }


    do{


        printf("\n\nEscolha o indice a ser analisado: ");
        scanf("%i", &num_escolhido);

        if((num_escolhido >=0) && (num_escolhido <5)) //para tirar a ultima repetição!
           {
               printf("O numero no indice [%i] eh: %i", num_escolhido, vet[num_escolhido]);

           }else{

                break;
           }

        printf("\n\nDigite um numero do vetor: ");
        scanf("%i", &num_buscar);

        for(i = 0; i<5; i++)
        {
            if(num_buscar == vet[i])
            {
                //printf("\nO valor existe no vetor no indice [%i]!\n", i);
                achou = 1;
                existe = existe + 1;
            }
        }


        if(achou == 1)
        {
            printf("\nO valor existe no vetor!\n");


        }else{
            printf("\nO valor nao existe no vetor\n");
        }

        printf("\nExistem %i destes numeros!\n", existe);
        existe = 0;
    }while((num_escolhido >=0) && (num_escolhido <5));

    printf("\nINDICE INVALIDO!");

}










int main(void)
{
    //exercicio_1();
    //exercicio_2();
    //exercicio_3a();
    //exercicio_3b();
    exercicio_3c();


    return 0;
}
