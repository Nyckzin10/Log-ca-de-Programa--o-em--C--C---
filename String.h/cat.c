#include <stdio.h>
#include <stdlib.h>
#include <string.h>



int main ()

{

    /*
    char nome1 [100] , nome2 [100];

    printf("\n\nDigite o seu nome ?\n\n");
    gets(nome1);
    printf("\n\nO Vetor Nome tem %d\n\n", strlen(nome1));

    printf("\n\nDigite o seu sobrenome\n\n");
    gets(nome2);
    printf("\n\nO Vetor Sobrenome tem %d\n\n", strlen(nome2));
    */

    char nome1 [20], nome2 [20];
    printf("\n\nDigite o seu nome ?\n\n");
    gets(nome1);
    setbuf(stdin, NULL);
    printf("\n\nDigite o seu Sobrenome\n\n");
    gets(nome2);
    strcat(nome1, " ");
    strcat(nome1, nome2);
    printf("\n\nNome Completo %s\n\n", nome1);

    system("pause");
    return 0;

}



