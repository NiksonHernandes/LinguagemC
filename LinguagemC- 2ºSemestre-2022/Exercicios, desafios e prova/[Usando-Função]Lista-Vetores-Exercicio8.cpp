#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

    /*PREENCHA UM VETOR COM 8 ELEMENTOS INTEIROS, MOSTRE O VETOR NA HORIZONTAL COM \T,
    CALCULE A MÉDIA DO VETOR, MOSTRE QUANTOS NUMEROS SÃO MÚLTIPLOS DE 5, QUANTOS SÃO
    MAIOR QUE 10 E MENORES QUE 30 E QUAL O MAIOR NÚMERO DO VETOR.*/


void entradada_dados(int vet[8], int i)
{
    //entrada de dados
    for(i=0; i<8; i++)
    {
        printf("Valor %i do vetor: ", i+1);
        scanf("%i", &vet[i]);
    }
}

void saida_dados(int vet[8], int i, int media, int mult_cinco, int maior_num, int maiores_10)
{

     printf("\nValores do vetor: \n");
    //saida de dados
    for(i=0; i<8; i++)
    {
        printf("%i \t", vet[i]);
        media = media + vet[i];

        //multiplos de 5:
        if(vet[i]%5 == 0)
        {
            mult_cinco ++;
        }

        //maiores que 10 e menores que 30:
        if(vet[i] >10 && vet[i] <30)
        {
            maiores_10 ++;
        }

        //maior numero do vetor
        if(vet[i] > maior_num)
        {
            maior_num = vet[i];
        }

    }

    //media:
    printf("\n\nA media eh: %i", media / 8);

    //multiplos de 5:
    printf("\n\nMultiplos de 5 eh: %i", mult_cinco);

    //maiores q 10:
    printf("\n\nMaior que 10 e menor que 30 eh: %i", maiores_10);

    //maior numero:
    printf("\n\nO maior numero digitado eh: %i\n\n", maior_num);

}

int main()
{
    int vet[8] = {};
    int media = 0, mult_cinco = 0, maior_num = 0, maiores_10 = 0;
    int i;

    //chama entradada de dados:
    entradada_dados(vet, i);
    //saida de dados:
    saida_dados(vet, i, media, mult_cinco, maior_num, maiores_10);

    return 0;
}
