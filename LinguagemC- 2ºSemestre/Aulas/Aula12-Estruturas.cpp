#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
//BRINCANDO COM STRUCT

typedef struct
{
    int dia;
    int mes;
    int ano;

}Data; //nome da 'variável' que armazena a struct

typedef struct
{
    int codigo;
    char nome[21];
    float salario;
    Data nascimento;

}Cadastro;

void altera_salario(float *g)
{
    *g += 100;
    printf("\n        Aumento de 100 no salario!");

}

int main(){

    Cadastro ficha; //nomeando um variável para o tipo Cadastro

    //entrada de dados:
    printf("\n--------- CADASTRO --------\n\n");
    printf("Codigo..............: ");
    scanf("%i", &ficha.codigo);setbuf(stdin, NULL);//limpa buffer
    printf("Nome................: ");
    fgets(ficha.nome, 20, stdin); setbuf(stdin, NULL);//limpa buffer
    printf("Salario.............: ");
    scanf("%f", &ficha.salario);setbuf(stdin, NULL);
    printf("Data de nascimento..: ");
    scanf("%i/%i/%i",   &ficha.nascimento.dia,
                        &ficha.nascimento.mes,
                        &ficha.nascimento.ano);setbuf(stdin, NULL);

    //função que altera salário:
    altera_salario(&ficha.salario);

    //saida de dados:
    printf("\n\n--------- FICHA --------\n\n");
    printf("\nCodigo: %i \nNome: %sSalario: %.2f \nData nascimento:  %02i/%02i/%i\n",
           ficha.codigo, ficha.nome, ficha.salario, ficha.nascimento.dia, ficha.nascimento.mes,
           ficha.nascimento.ano);


    return 0;
}
