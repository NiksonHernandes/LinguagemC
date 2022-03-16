#include <stdio.h>
#include <stdlib.h>

/*void mostra(int p[]){

    for(int i=0; i<4; i++){
        printf("V[%i] = %i\n", i+1, p[i]);
    }
}*/

int main(){

    int v[4];
    int i = 0, copia = 0;
    char continua;

   do{
        for(i=0; i<4; i++){
            printf("Digite os valores do seu vetor [%i]: ", i+1);
            scanf("%i", &v[i]);
        }

        printf("\n-----\n");

        for(i=0; i<4; i++){
            printf("V[%i] = %i\n", i+1, v[i]);
        }

        for(i=0; i<4; i++){
            for(int j=0; j<4; j++){
                if(v[i] < v[j]){
                    copia = v[i];
                    v[i] = v[j];
                    v[j] = copia;
                }
            }
        }
        printf("\n-----\n");

        for(int k=0; k<4; k++){
            printf("V[%i] = %i\n", k+1, v[k]);
        }

        printf("\nDeseja executar novamente?(S/N): ");
        scanf("%s", &continua);
        printf("\n--------------------\n\n");

   }while(continua == 'S' || continua == 's');

    return 0;
}
