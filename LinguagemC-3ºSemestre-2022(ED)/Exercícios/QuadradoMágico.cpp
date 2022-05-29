#include <stdio.h>
#include <stdlib.h>
#include <locale.h> //necess�rio para usar setlocale

/*Realizar a atividade do quadrado m�gico.
----Nikson Miguel Hernandes Colhado - 0220482113025----*/

/*Implemente em jogo usando a linguagem C que reconhe�a se a
entrada de valores de uma matriz 9x9 representa um quadrado m�gico ou n�o.
Os valores ser�o somente de valores inteiros. Uma matriz de entrada �
considerada uma quadrado m�gico quando as seguintes regras:
A soma de cada linha � igual a soma de cada coluna que � igual a
Soma da diagonal principal e tamb�m � igual a soma da diagonal secund�ria.
Tamb�m n�o s�o aceitos valores repetidos entre os valores que ser�o digitados pelo usu�rio.
Em anexo � apresentado um dos poss�veis valores que expressam um quadrado m�gico,
entretanto n�o � poss�vel afirma que seria o �nico conjunto de valores poss�vel,
assim sendo, use-os somente para a valida��o do sistema .*/

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

     printf("\n----------Informa��es opcionais:---------");
    //soma diagonal principal
    for(i=0; i<n; i++){
        somaDPrinc += mat[i][i];
    }
    printf("\n\nSoma diagonal principal: %i", somaDPrinc);
    total = somaDPrinc;

    //soma diagonal secund�ria
    for(i=0; i<n; i++){
        somaDSec+= mat[i][n-i-1];
    }
    if(total != somaDSec){
        falha ++;
    }

    printf("\nSoma diagonal secund�ria: %i", somaDSec);
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
        printf("\n\nValores n�o se repetem");
    }

    printf("\n\n----------Resultado final:---------\n");
    if(falha == 0){
        printf("\nQuadrado m�gico!\n\n");
    }else{
        printf("\nQuadrado n�o m�gico!\n\n");
    }

    return 0;
}
