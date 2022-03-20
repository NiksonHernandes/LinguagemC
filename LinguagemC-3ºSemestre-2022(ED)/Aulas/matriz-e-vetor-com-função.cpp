#include <stdio.h>
#include <stdlib.h>

//função imprime com vetor
void imprime_vetor(int *v, int n){

    for(int i=0; i<n; i++){
        printf("Valor no indice: %i\n", v[i]);
    }
}

void imprime_vetor2(int v2[], int n){
    for(int i=0; i<n; i++){
        printf("Digite os valores: ");
        scanf("%i", &v2);
    }

}

//função imprime com matriz
void imprime_matriz(int m[][2], int n){

    int i, j;
    for(i=0; i<n; i++)
    {
        for(j=0; j<2; j++)
        {
            printf("%i ", m[i][j]);
        }
        printf("\n");
    }
}


int main(){

   /*função com vetor:*/

    int v[5] = {1,2,3,4,5};
    imprime_vetor(v, 5);

    int v2[5];
    imprime_vetor2(v2, 5);
    for(int i=0; i<5; i++){
        printf("Valor no indice: %i\n", v2[i]);
    }


    /*função com matriz:*/
    int mat[3][2] = {{1,2},{2,5},{7,8}};
    imprime_matriz(mat, 3); //3 é o indice inicial;

    return 0;
}
