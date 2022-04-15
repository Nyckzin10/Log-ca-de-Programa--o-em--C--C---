#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main()

{
    char Nome [100], user [100];



    printf("\n\nQual e o seu Nome Completo?\n\n"); //Sera inicializado á função no banco de dados
    gets(Nome);

    strcpy(user, Nome); //Ele pegara o primeiro resultado do nome e jogora no resultado final 

    printf("\n\nUser: %s\n\n", user); // Aqui será mostrado o valor do resultado da busca da string


    system("pause");
    return 0;


}
