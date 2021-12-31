#include <stdio.h>

int main()
{
    /*FA�A UM PROGRAMA QUE RECEBA:
    O c�digo de um produto comprado, supondo que a digita��o do c�digo do produto
    seja sempre v�lida, isto �, um n�mero inteiro entre 1 e 10.
    O peso do produto em quilos.
    O c�digo do pa�s de origem, supondo que a digita��o do c�digo seja sempre v�lida,
    isto �, um n�mero inteiro entre 1 e 3.*/

    int codproduto, pais;
    float pesokilos, pesogramas, precototal, imposto;

    printf("Informe o codigo do produto (de 1 a 10): ");
    scanf("%i", &codproduto);

    printf("Informe o peso do produto em quilos: ");
    scanf("%f", &pesokilos);

    printf("Informe o codigo do pais (de 1 a 3): ");
    scanf("%i", &pais);

    //codigo do produto

    if(codproduto >=1 && codproduto <=4){
        //printf("\nPre�o por 10gramas");
        precototal = precototal + 10;

    }else if(codproduto >=5 && codproduto <=7){
       // printf("\nPeso 25gramas");
        precototal = precototal + 25;

    }else if(codproduto >=8 && codproduto <=10){
        //printf("\nPeso 35grams");
        precototal = precototal + 35;

    }else{
        printf("\nCodigo de produto invalido!\n");
        return 0;
    }

    //codigo do pais

    if(pais == 1){
       // printf("\nImposto 0%");
        imposto = imposto + 0;

    }else if(pais == 2){
        //printf("\nImposto 15%");
        imposto = imposto + 0.15;

    }else if(pais == 3){
        //printf("\nImposto 25%");
        imposto = imposto + 0.25;

    }else{
        printf("\nCodigo de pais invalido!\n");
        return 0;
    }

    // o peso do produto convertido em gramas;

    pesogramas = pesokilos * 1000;
    printf("\n\nPesogramas: %.2f gramas", pesogramas);

    //o pre�o total do produto comprado;

    precototal = precototal * pesogramas;
    printf("\nPreco total: R$ %.2f reais", precototal);

    /*o valor do imposto, sabendo que ele � cobrado sobre o pre�o total do produto
    comprado e depende do pa�s de origem*/

    imposto = precototal * imposto;
    printf("\nValor a ser pago pelo imposto: R$ %.2f reais", imposto);

    //o valor total, pre�o total do produto mais imposto

    printf("\n\nO valor total eh: R$ %.2f reais\n", precototal+imposto);


    getchar();
    return 0;
}
