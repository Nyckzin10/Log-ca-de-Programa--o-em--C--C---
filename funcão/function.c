#include <stdio.h>
#include <stdlib.h>

int quadrado(int valor){ // tem retorno
    valor = valor*valor;
    return valor;
}


void quadradoResulty(int valor){// não tem retorno
    valor = valor*valor;
    printf("\n\nQuadradoResulty:   %d\n\n", valor);    
}

int main ()//Aqui será  o resultado final !! 
{
    int valor, resultado;

    printf("\n\nDigite um numero: ");
    scanf("%d", %valor);

    resultado = quadrado(valor);  
    printf("\n\nQuadrado: %d\n\n", resultado);  

    quadradoResulty(valor);

    system("pause");
    return 0; 
}


