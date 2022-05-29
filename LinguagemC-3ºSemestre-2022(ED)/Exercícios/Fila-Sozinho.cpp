#include <stdlib.h>
#include <stdio.h>

typedef struct LISTA{ //nó LISTA
    int dado;
    struct LISTA *prox;
}LISTA;

int main()
{
    struct LISTA *novo, *aux, *fim, *inicio = NULL, *aux2;
    int op, x;

    do{
        printf("\n1-> Inserir no inicio\n2-> Listar\n3-> Inserir no final\n4-> Remover do inicio\n5-> Remover do Final\n6-> Sair\n7-> Inserir no meio\nOperação: ");
        scanf("%i", &op);

        switch(op){
            case 1: //inserir no inicio
                novo = (LISTA*) malloc(sizeof(LISTA));
                fflush(stdin); //limpar o buffer
                setbuf(stdin, NULL);
                if(novo == NULL){
                    printf("\tErro de alocação\n\n");
                    exit(1);
                }else{
                    printf("\nDigite o valor para inserir no inicio: ");
                    scanf("%i", &novo->dado);
                    novo->prox = NULL;
                    if(inicio == NULL){
                        inicio = novo;
                        fim = novo;
                    }else{
                        aux = novo;
                        aux->prox = inicio;
                        inicio = aux;
                    }
                    printf("\n\tDADO INSERIDO NO INICIO (%i)", novo->dado);
                }
            break;

            case 2: //listar
                if(inicio == NULL){
                    printf("\tFILA VAZIA\n\n");
                }else{
                    aux = inicio;

                    while(aux != NULL){
                        printf("%i ", aux->dado);
                        aux = aux->prox;
                    }
                    printf("\n\n");
                }
            break;

            case 3://inserir no final
                if(inicio == NULL){
                    printf("\tFILA VAZIA\n\n");

                }else{
                    novo = (LISTA*)malloc(sizeof(LISTA));
                    fflush(stdin); //limpar o buffer
                    if(novo == NULL){
                        printf("\tErro de alocação\n\n");
                        exit(1);
                    }else{
                        printf("\nDigite o valor para inserir no fim: ");
                        scanf("%i", &novo->dado);
                        aux = novo;
                        fim->prox = aux;
                        aux->prox = NULL;
                        fim=aux;
                    }
                    printf("\n\tDADO INSERIDO NO FIM (%i)", novo->dado);
                }
            break;

            case 4://remover do incio
            if(inicio == NULL){
                printf("\nNão foi possível remover! Lista vazia. \n");
            }else{
                aux = inicio;
                inicio = aux->prox;
                printf("\n\tElemento (%i) removido do inicio\n", aux->dado);
                free(aux);
            }
            break;

            case 5: //remover do final
            if(inicio == fim){
                printf("\nErro ao remover! Contém apenas um elemento na lista\n");
            }else{
                aux = inicio;
                while(aux->prox != fim){
                    aux = aux->prox;
                }
                //printf("\n\tUltimo: [%i] Penultimo: [%i]\n", fim->dado, aux->dado);
                fim = aux;
                aux = aux->prox;
                printf("\n\tElemento (%i) removido do final\n", aux->dado);
                free(aux);
                fim->prox = NULL;
            }
            break;

            case 6: //sair
                printf("\n\tFinalizando...\n");
            break;

            case 7:
                if(inicio == NULL){
                    printf("\tFILA VAZIA\n\n");
                }else{
                    aux = inicio;
                    printf("\nLISTA  DE DADOS NA LISTA: \n");
                    while(aux != NULL){
                        printf("%i ", aux->dado);
                        aux = aux->prox;
                    }
                    printf("\n");

                    printf("\nDeseja inserir DEPOIS de qual valor: ");
                    scanf("%i", &x);
                    fflush(stdin); //limpar o buffer
                    if(x == fim->dado){
                        printf("\nNão é possível inserir no final da lista!\n");
                    }else{
                        aux = inicio;
                        while(aux->dado != x){
                            aux = aux->prox;
                        }
                        printf("\tValor de aux [%i]\n", aux->dado);

                        novo = (LISTA*) malloc(sizeof(LISTA));
                        fflush(stdin); //limpar o buffer
                        setbuf(stdin, NULL);
                        if(novo == NULL){
                            printf("\tErro de alocação\n\n");
                            exit(1);
                        }else{
                            printf("\nDigite o valor a ser inserido depois do [%i]: ", aux->dado);
                            scanf("%i", &novo->dado);
                            novo->prox = aux->prox;
                            aux->prox = novo;

                            printf("\n\tDado [%i] inserido", novo->dado);
                        }
                    }
                }
            break;
        }
    }while(op != 6);

    return 0;
}





