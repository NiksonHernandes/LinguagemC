#include <stdio.h>
#include <stdlib.h>
#include <locale.h> //necess�rio para usar setlocale

    /*PREENCHER UM VETOR COM 8 N�MEROS INTEIROS, SOLICITAR UM NUMERO NO TECLADO
    PROCURAR SE EXISTE NO VETOR, SE EXISTIR, IMPRIMIR EM QUAL POSI��O DO VETOR ESTA,
    CASO N�O EXISTA, IMPRIMIR QUE N�O EXISTE*/

    int vet[8], num_digitado, i, x;
    char repetir;

void vetor ()
{

    //entrada de dados
    for(i=0; i<8; i++){

        printf("Digite os valor do vetor [%i]: ", i);
        scanf("%i", &vet[i]);

    }

}

void numeroDig()
{
        printf("\nDigite um numero: ");
        scanf("%i", &num_digitado);

        for(i=0; i<8; i++)
        {
            if(num_digitado == vet[i]){
                printf("\nO n�mero %i est� na posi��o: %i\n", num_digitado, i);

            }else{
                 x = x +1;
            }
        }

        if(x == 8){
            printf("\nO valor %i, n�o existe no vetor!\n", num_digitado);
        }

}


int main()
{
    setlocale(LC_ALL, "Portuguese");

    do{

        vetor();
        numeroDig();
        printf("\nContinuar? (s/n): ");
        scanf("%s", &repetir);
        system("cls");

    }while( (repetir == 's') || (repetir == 'S'));


    return 0;
}
