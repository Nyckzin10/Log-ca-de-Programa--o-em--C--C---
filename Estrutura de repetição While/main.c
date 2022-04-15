#include <stdio.h>
#include <stdlib.h>


int main ()

{
    int Valor, soma=0;

    do{
        printf("\nDigite um valor -1 para sair\n");
        scanf("%d", &Valor);
        if(Valor!=-1)
        soma = soma + Valor; //Soma+=Valor; 
    }while(Valor!=-1);
    printf("Soma %d\n", soma);


    system("pause");
    return 0;    

}   
