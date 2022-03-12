#include <stdio.h>
#include <stdlib.h>
#include <locale.h> //necessário para usar setlocale

/*Solicito que implemente usando a linguagem C um sistema que permite
a entrada de até 1000 valores pelo usuário. Todas as entradas devem ser unitárias
e o usuário poderá ordenar de forma crescente quando desejar, após ter no mínimo
6 elementos inseridos.*/


int main(){

    int v[1000];
    int i, j, copia;
    int repeticaoVetor;
    char repetirPrograma, realizarOrdenacao;

    setlocale(LC_ALL, "Portuguese");//Deixar tudo em pt-br

    do{
        printf("Quantos números deseja digitar?: ");
        scanf("%i", &repeticaoVetor);

         printf("\n-----Valores do vetor:-----\n");
         //Entrada de dados do vetor
        for(i = 0; i < repeticaoVetor; i++){
            printf("Digite os valores do vetor: ");
            scanf("%i", &v[i]);
        }

        printf("\n-----Vetor formatado:-----\n");
        //Exibição do vetor
        for(i = 0; i < repeticaoVetor; i++){
            printf("Indice [%i]: %i \n", i, v[i]);

        }

        printf("\nDeseja realizar a ordenação?(S/N): ");
        scanf("%s", &realizarOrdenacao);

        if((realizarOrdenacao == 'S' || realizarOrdenacao == 's') && (repeticaoVetor >=6)){
            //Ordenação
            for(i=0; i<repeticaoVetor; i++)
            {
                for(int j=0; j<repeticaoVetor; j++){
                    if(v[i] > v[j]){
                        copia = v[i];
                        v[i] = v[j];
                        v[j] = copia;
                    }
                }
            }

             //MONSTRA O VETOR C EM ORDEM:
            for(int k=repeticaoVetor; k>0; k--){
                printf("Ordenados: %i\n", v[k-1]);
            }

        }else if(realizarOrdenacao != 'S'){
            printf("\nOpção -> Sem ordenação OU Dado inserido incorreto!\n");

        }else if(repeticaoVetor < 6){
            printf("\nSeu vetor deveter no mínimo 6 elementos inseridos. Tente novamente!");
        }

        printf("\n----------\n");
        //Repetir programa
        printf("\nDeseja realizar outra operação?(S/N): ");
        scanf("%s", &repetirPrograma);
        system("cls");

    }while((repetirPrograma == 's') || (repetirPrograma == 'S'));


    return 0;
}
