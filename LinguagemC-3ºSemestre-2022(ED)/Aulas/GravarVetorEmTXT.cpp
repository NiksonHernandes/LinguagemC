#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>

#define N 5

int main(){

    FILE *ponteiro_vetor, *ponteiro_matriz;
    int vetor[N], matriz[2][2];

    ponteiro_vetor = fopen("C:\\users\\Acer\\OneDrive\\Área de Trabalho\\arquivo_vetor.txt", "w");
    ponteiro_matriz = fopen("C:\\users\\Acer\\OneDrive\\Área de Trabalho\\arquivo_matriz.txt", "w");

    if(ponteiro_vetor == NULL || ponteiro_matriz == NULL){
        printf("Erro ao abrir arquivo!");
        return 1;

    }else{
        //dados vetor
        for(int i=0; i<N; i++){
            printf("Valor do vetor em [%i]: ", i+1);
            scanf("%i", &vetor[i]);

            fprintf(ponteiro_vetor, "%i\n", vetor[i]);//gravação no txt
        }

        fclose(ponteiro_vetor);
        printf("Dados do Vetor gravados com sucesso!\n\n");

        //dados matriz
        for(int linha=0; linha<2; linha++){
            for(int coluna=0; coluna<2; coluna++){
                printf("Valor da matriz em [%i][%i]: ", linha, coluna);
                scanf("%i", &matriz[linha][coluna]);
                fprintf(ponteiro_matriz, "%i\n", matriz[linha][coluna]);//gravação no txt
            }
        }
        fclose(ponteiro_matriz);
        printf("Dados da Matriz gravados com sucesso!\n\n");

    }
    getch();
    return 0;
}
