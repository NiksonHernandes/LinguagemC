#include <stdio.h>
#include <stdlib.h>

void inicio(){
    printf("---------INICIO---------\n\n");
}

void fim(){
    printf("\n\n---------FIM---------\n\n");
}

typedef struct PESSOA{
    int ra; //dado do usuário
    PESSOA *prox;//ponteiro tem q ser do msm tipo da struct, mesmo tipo de quem ele aponta, por isso é Pessoa
};//SE DECLARAR AQUI ELE VIRA UM TIPO DE VARIÁVEL

/* MESMA COISA DO QUE:
typedef struct PESSOA{
    int ra = 10; //dado do usuário
    PESSOA*prox;//ponteiro tem q ser do msm tipo da struct, mesmo tipo de quem ele aponta, por isso é Pessoa
}var_pessoa;//SE DECLARAR AQUI ELE VIRA UM TIPO DE VARIÁVEL*/



int main(){

    PESSOA *fim, *novo, *inicio=NULL;
    char op;
    int i = 0;

    do{
        printf("\n1-> inserir\n2-> listar\n3-> remover\n4-> esvaziar\n5-> sair\n\n");
        op = getchar();
        fflush(stdin); //limpar o buffer

        switch(op){
            case '1': //inserir
                novo = (PESSOA*)malloc(sizeof(PESSOA));
                if(novo == NULL){//tratativa de erro
                    printf("SEM ESPACO DE MEMORIA");
                    exit(1);

                }else{
                    printf("\nDigite o RA: ");
                    scanf("%i", &(*novo).ra);
                    fflush(stdin); //limpar o buffer

                    novo->prox = NULL;

                    if(inicio == NULL){
                        inicio = novo;

                    }else{
                        fim->prox = novo;
                    }
                    fim = novo;
                }
            break;
            case '2'://listagem

                if(inicio == NULL){
                    printf("\nFILA VAZIA");
                }else{
                    novo = inicio;
                    while(novo != NULL){
                        printf("RA: %i\n", novo->ra);
                        novo = (*novo).prox;
                    }

                }

            break;
        }

        i++;

    }while(i<=5);

    return 0;
}
