#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main()
{
    char caracter;

    printf("Digite uma caracter: ");
    scanf("%c" , &caracter);

    caracter=towupper(caracter);

    caracter=towlower(caracter);


    if(caracter=='b'){
        printf("\n\nDigitou a letra b!\n\n");
    }
    else{
        printf("\n\nDigitou outra caratere\n\n");
    }
    /*
    if(caracter=='b'){

        printf("\n\nDigitou a letra b!\n\n");

    }
    else{
        prinft("\n\nDigitou outrou caracter\n\n");
    }   
    */

    system("pause");
    return 0;
}





