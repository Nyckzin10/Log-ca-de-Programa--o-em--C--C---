#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>



int imprime (int inicio, int limite){
    if(incio < limite){
        printf("%d", inicio);
        imprime(inicio+1, limite);
    }

}


int main ()
{
    int inicio, limite, i;

    inicio=10;
    limite=21;
    printf("\n\nImpressão Interativa\n");// é quando você usa um for ou while
    for(i=inicio; i<limite; i++){
        printf("\n%d", i);
    }
    printf("\n\nImpressão Rercusiva\n\n");
    imprime(inicio, limite);     // 10 até 20 no incio de ordem cresente !!
    printf("\n\n");

    system("pause");
    return 0;
}




