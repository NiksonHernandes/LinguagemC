#include <stdlib.h>
#include <stdio.h>
#include<conio.h>

typedef struct LISTA{
    int ra;
    char nome[31];
    int telefone;
    struct LISTA *prox;
}LISTA;

int main()
{
    LISTA *novo, *aux, *fim, *inicio = NULL, *anterior;
    int op, x;
    char verExcluir;

    do{
        printf("\n1-> Inserir no INICIO\n2-> Inserir no FINAL\n3-> LISTAR\n4-> Remover do INICIO\n5-> Remover do FINAL\n6-> Inserir no MEIO\n8-> Remover do MEIO\n9-> SAIR\nOperacao: ");
        scanf("%i", &op); fflush(stdin); //limpar o buffer

        switch(op)
        {
            case 1: //INSERIR
                novo = (LISTA*) malloc(sizeof(LISTA));
                fflush(stdin); //limpar o buffer

                if(novo == NULL){
                    printf("\tErro de alocação\n\n");
                    exit(1);
                }else{
                    printf("\nDigite o NOME do aluno: ");
                    gets(novo->nome); fflush(stdin); //limpar o buffer
                    printf("Digite o RA do aluno: ");
                    scanf("%i", &novo->ra); fflush(stdin); //limpar o buffer
                    printf("Digite o TELEFONE do aluno: ");
                    scanf("%i", &novo->telefone); fflush(stdin); //limpar o buffer

                    novo->prox = NULL;
                    if(inicio == NULL){
                        inicio = novo;
                        fim = novo;
                    }else{
                        aux = novo;
                        aux->prox = inicio;
                        inicio = aux;
                    }
                    printf("\n\tAluno [%s] INSERIDO no INICIO do sistema\n", novo->nome);
                    printf("-------------------------#-------------------------\n");
                }
            break;

            case 2://INSERIR NO FINAL
                if(inicio == NULL){
                    printf("\nLISTA VAZIA\n");
                }else{
                    novo = (LISTA*) malloc(sizeof(LISTA));
                    fflush(stdin); //limpar o buffer

                    if(novo == NULL){
                        printf("\tErro de alocação\n\n");
                        exit(1);
                    }else{
                        printf("\nDigite o NOME do aluno: ");
                        gets(novo->nome); fflush(stdin); //limpar o buffer
                        printf("Digite o RA do aluno: ");
                        scanf("%i", &novo->ra); fflush(stdin); //limpar o buffer
                        printf("Digite o TELEFONE do aluno: ");
                        scanf("%i", &novo->telefone); fflush(stdin); //limpar o buffer

                        aux=novo;
                        fim->prox = aux;
                        aux->prox = NULL;
                        fim= aux;
                    }
                    printf("\n\tAluno [%s] INSERIDO no FINAL do sistema\n", novo->nome);
                    printf("-------------------------#-------------------------\n");
                }
            break;

            case 3: //LISTAR
                if(inicio == NULL){
                    printf("\tLISTA VAZIA\n");
                }else{
                    printf("\n-------------------------LISTA-------------------------\n");
                    aux = inicio;
                    while(aux != NULL){
                        printf("\nALUNO [%s]\n", aux->nome);
                        printf("RA [%i]\n", aux->ra);
                        printf("TELEFONE [%i]\n", aux->telefone);
                        aux = aux->prox;
                        printf("\n-------------------------[]-------------------------\n");
                    }
                }
            break;

            case 4: //REMOVER DO INICIO
                if(inicio == NULL){
                    printf("\nNao foi possivel remover! Lista vazia. \n");
                }else{
                    aux = inicio;
                    printf("\nDeseja remover o ALUNO [%s]?[S/N]: ", aux->nome);
                    scanf("%c", &verExcluir); fflush(stdin); //limpar o buffer

                    if(verExcluir == 'S' || verExcluir == 's'){
                        inicio = aux->prox;
                        printf("\n\tAluno [%s] REMOVIDO do INICIO do sistema\n", aux->nome);
                        printf("-------------------------#-------------------------\n");
                        free(aux);
                    }
                    printf("\n");
                }
            break;

            case 5: //REMOVER DO FINAL
                if(inicio == NULL){
                    printf("\nNao foi possivel remover! Lista vazia. \n");
                }else{
                    aux = inicio;
                    printf("\nDeseja remover o ALUNO [%s]?[S/N]: ", aux->nome);
                    scanf("%c", &verExcluir); fflush(stdin); //limpar o buffer

                    if(verExcluir == 'S' || verExcluir == 's'){
                        while(aux->prox !=fim){
                            aux = aux->prox;
                        }
                        fim = aux;
                        aux = aux ->prox;
                        printf("\n\tAluno [%s] REMOVIDO do INICIO do sistema\n", aux->nome);
                        printf("-------------------------#-------------------------\n");
                        free(aux);
                        fim->prox = NULL;
                    }
                    printf("\n");
                }
            break;

            case 6: //INSERIR NO MEIO
                if(inicio == NULL){
                    printf("\nFILA VAZIA\n");
                }else{
                    aux = inicio;
                    printf("\n---------LISTA DE DADOS---------\n");
                    while(aux != NULL){
                        printf("\nALUNO [%s]\n", aux->nome);
                        printf("RA [%i]\n", aux->ra);
                        printf("TELEFONE [%i]\n", aux->telefone);
                        aux = aux->prox;
                        printf("\n-------------------------[]-------------------------\n");
                    }
                    printf("\nDeseja inserir DEPOIS de qual RA: ");
                    scanf("%i", &x); fflush(stdin); //limpar o buffer

                    if(x == fim->ra){
                        printf("\t Nao eh possivel inserir no final da lista\n");
                    }else{
                        aux = inicio;
                        while(aux->ra != x){
                            aux = aux->prox;
                            if(aux->prox == NULL){
                                printf("\tDado digitado nao existe na lista! tente novamente.\n");
                            }
                        }
                        novo = (LISTA*) malloc(sizeof(LISTA));
                        fflush(stdin); //limpar o buffer
                        if(novo == NULL){
                            printf("\tErro de alocação\n\n");
                            exit(1);
                        }else{
                            printf("\nDigite o NOME do aluno: ");
                            gets(novo->nome); fflush(stdin); //limpar o buffer
                            printf("Digite o RA do aluno: ");
                            scanf("%i", &novo->ra); fflush(stdin); //limpar o buffer
                            printf("Digite o TELEFONE do aluno: ");
                            scanf("%i", &novo->telefone); fflush(stdin); //limpar o buffer
                            novo->prox = aux->prox;
                            aux->prox = novo;

                            printf("\n\tAluno [%s] INSERIDO no MEIO do sistema\n", novo->nome);
                            printf("-------------------------#-------------------------\n");
                        }
                    }
                }

            break;

            case 8: //REMOVER DO MEIO
                if(inicio == NULL){
                    printf("\nLista Vazia!\n");
                }else{
                    aux = inicio;
                    printf("\n---------LISTA DE DADOS---------\n");
                    while(aux != NULL){
                        printf("\nALUNO [%s]\n", aux->nome);
                        printf("RA [%i]\n", aux->ra);
                        printf("TELEFONE [%i]\n", aux->telefone);
                        aux = aux->prox;
                        printf("\n-------------------------[]-------------------------\n");
                    }
                    printf("\nDeseja remover qual RA: ");
                    scanf("%i", &x); fflush(stdin); //limpar o buffer
                    if(x == fim->ra){
                        printf("\t Nao eh possivel inserir no final da lista\n");
                    }else{
                        aux=inicio;
                        while(aux->prox->ra != x){
                            aux = aux->prox;
                            if(aux->prox == NULL){
                                printf("\nDado digitado nao existe na lista\n");
                            }
                        }
                        anterior = aux;
                        aux = aux->prox;
                        anterior->prox = aux->prox;
                        printf("\n\tAluno [%s] REMOVIDO do MEIO do sistema\n", aux->nome);
                        printf("-------------------------#-------------------------\n");
                        free(aux);
                    }
                }

            break;
            case 9: //SAIR
                printf("\nFinalizando...");
            break;
        }
    }while(op != 9);

    return 0;
}
