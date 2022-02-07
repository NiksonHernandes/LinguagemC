#include <stdio.h>
#include <stdlib.h>


/*int main()
{

    system("color 1");

    //printf("Ola mundo\n\n");
    puts (" Ola \"mundo\"\n\n");

    system("PAUSE"); //break point

    //system("halt"); //caso o usuário digitar 2 o sistema finalizará
    //system("reboot"); /*se o usuário tiver digitado 1 o sistema irá reiniciar*
    //system("cls"); //limpa, da um clear
    system("color 9");


    return 0;
}
*/
	
int calculo (int n1, int n2)
{
	float media;
	
	media = (n1+n2)/2;
	
	return media; 
}

int main()
{
	int n1 = 0, n2 = 0;
	float media = 0;
	
	printf("Informe um numero: ");
	scanf("%i", &n1);
	
	printf("Informe outro numero: ");
	scanf("%i", &n2);
	
	media  = calculo (n1, n2);
	
	printf("Media eh: %f", media);
		
	return 0;
	

}
