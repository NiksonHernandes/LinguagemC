//abrindo, gravando e fechando arquivos
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>//para usar o GETCH() -> para pausar a tela
#include <windows.h>//para usar o beep

int main(){

    FILE *ponteiro_arquivo; //cria variável ponteiro para o arquivo
    char palavra[30];
    int *i = 0;

    //abrindo o arquivo como tipo de abertura W;
    ponteiro_arquivo = fopen("C:\\users\\Acer\\OneDrive\\Área de Trabalho\\arquivo_palavra[%i].txt", "a", *i); //fopen -> para abrir um arquivo, caso ele n exista é criado
    // w -> é um formato para gravação de dados, sobrescreve o que estava no arquivo;
    // a -> ele adiciona um novo txt ao em vez de sobreescrevar
    // r -> Permissão de abertura somente para leitura. É necessário que o arquivo já esteja presente no disco.

    i ++;
/*
"r" Texto Leitura. Arquivo deve existir.
"w" Texto Escrita. Cria arquivo se não houver. Apaga o anterior se ele existir.
"a" Texto Escrita. Os dados serão adicionados no fim do arquivo ("append").
*/
    //testando se o arquivo foi realmente criado
    if(ponteiro_arquivo == NULL){
        printf("Erro ao abrir arquivo!");
        return 1;
    }else{
        printf("Escreva uma palavra para ser gravada: ");
        fgets(palavra, 30, stdin);

        //usando fprintf para armazenar a string no arquivo txt
        fprintf(ponteiro_arquivo, "%s", palavra);
        //nome da variável ponteiro do arquivo, tipo do arquivo que esta sendo gravado, de qual variável ele vem

        //usando fclose para fechar o arquivo txt
        fclose(ponteiro_arquivo);

        printf("Aqui vai um apito\a\a\a\a\a"); // o "\a" faz um som de apito
        Beep(1000,1500); //faz um som com uma frequenca de 1000 Hertz e com tempo d 1500 milisegundos d duraçao.
        printf("Dados gravados com sucesso!");

    }
    getch();
    return 0;
}
