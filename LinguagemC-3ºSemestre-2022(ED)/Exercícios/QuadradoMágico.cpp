#include <stdio.h>
#include <stdlib.h>
#include <locale.h> //necessário para usar setlocale

/*Realizar a atividade do quadrado mágico.
----Nikson Miguel Hernandes Colhado - 0220482113025----*/

/*Implemente em jogo usando a linguagem C que reconheça se a
entrada de valores de uma matriz 9x9 representa um quadrado mágico ou não.
Os valores serão somente de valores inteiros. Uma matriz de entrada é
considerada uma quadrado mágico quando as seguintes regras:
A soma de cada linha é igual a soma de cada coluna que é igual a
Soma da diagonal principal e também é igual a soma da diagonal secundária.
Também não são aceitos valores repetidos entre os valores que serão digitados pelo usuário.
Em anexo é apresentado um dos possíveis valores que expressam um quadrado mágico,
entretanto não é possível afirma que seria o único conjunto de valores possível,
assim sendo, use-os somente para a validação do sistema .*/

int main()
{
    int n;
    printf("Qual o tamanho da matriz quadrada?: ");
    scanf("%i", &n);
    printf("\n");

    int i, j;
    int mat[n][n];
    int somaLin[n], somaCol[n], somaDPrinc = 0, somaDSec = 0;
    int total = 0, falha = 0, valTeste, repete = 0;

    setlocale(LC_ALL, "Portuguese");//Deixar tudo em pt-br

    //entrada da matriz
    for(i=0; i<n; i++){
        for(j=0; j<n; j++){
            printf("Digite os valores: ");
            scanf("%i", &mat[i][j]);
        }
    }

    printf("\n----------Matriz---------\n\n");
    //saida da matriz
    for(i=0; i<n; i++){
        for(j=0; j<n; j++){
            printf("Vet [%i][%i]: %i ", i, j, mat[i][j]);
        }
        printf("\n");
    }

     printf("\n----------Informações opcionais:---------");
    //soma diagonal principal
    for(i=0; i<n; i++){
        somaDPrinc += mat[i][i];
    }
    printf("\n\nSoma diagonal principal: %i", somaDPrinc);
    total = somaDPrinc;

    //soma diagonal secundária
    for(i=0; i<n; i++){
        somaDSec+= mat[i][n-i-1];
    }
    if(total != somaDSec){
        falha ++;
    }

    printf("\nSoma diagonal secundária: %i", somaDSec);
    //soma das linhas
    for(i=0; i<n; i++){
        somaLin[i] = 0;
        for(j=0; j<n; j++){
            somaLin[i] += mat[i][j];
        }
        if(total != somaLin[i]){
            falha ++;
        }
    }
    for(i=0; i<n; i++){
        printf("\n\nSoma da linha[%i]: %i",i, somaLin[i]);
    }

    //soma das colunas
    for(j=0; j<n; j++){
        somaCol[j] = 0;
        for(i=0; i<n; i++){
            somaCol[j] += mat[i][j];
        }
        if(total != somaCol[j]){
            falha ++;
        }
    }
    for(i=0; i<n; i++){
        printf("\n\nSoma da coluna[%i]: %i",i, somaCol[i]);
    }

    //valores repetidos
    for(int k=0; k<n; k++){
        for(int w=0; w<n; w++){
            valTeste = mat[k][w];
            for(i=0; i<n; i++){
                for(j=0; j<n; j++){
                    if(mat[i][j] == valTeste){
                        repete ++;
                    }
                }
            }
        }
    }

    //printf("\nRepetido: %i\n", repete);
    if(repete > (n * n)){
        printf("\n\nValores se repetem");
        falha ++;
    }else{
        printf("\n\nValores não se repetem");
    }

    printf("\n\n----------Resultado final:---------\n");
    if(falha == 0){
        printf("\nQuadrado mágico!\n\n");
    }else{
        printf("\nQuadrado não mágico!\n\n");
    }

    return 0;
}
