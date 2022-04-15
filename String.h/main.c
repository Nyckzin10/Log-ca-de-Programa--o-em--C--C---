#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main (){
 
    char Name[100],  lastname[100];
    /*
    char nome[10];
    printf("Digite o seu nome:  ");
    scanf("%c", &nome);
    */

    printf("Enter you name: ");
    gets(Name);
    setbuf(stdin, NULL);
    printf("Enter you lastname: ");
    gets(lastname);
    //nome e sobrenome tem 16 char 
    //strcmp é inlcusão da variação das classes 
    //strcasecmp ele é a mesma verificação das variaveis, so que tanto faz se está em MAISCULA ou MINISCULA
    if(strcasecmp(Name, lastname) ==0 ){
        printf("\n\nSame frist and lastname\n\n");
    }
    else{
        printf("\n\nValid Name and Surname\n\n");
    }

    system("pause");
    return 0; 

}


