#include <stdio.h>



/// irei coloca o escopo global do cod em C//C++  


int main ()

{
    float numero1, numero2; //solicitação do primeiro vetor com o segundo vetor
    char operacao; // solicitação do operador da calculadora para realizar o resultado dos vetores


    do{
        printf("\t\tCalculadora em linguagem de programacao em c/c++\n\n");  //aqui o titulo da minha calculadora


        printf("Operadores disponiveis\n"); //operadores disponiveis dentro da calculadora
        printf(" '+' : soma\n"); //soma 
        printf(" '-' : subtracao\n"); //subtração 
        printf(" '*' : multiplicacao\n"); //multiplicacão
        printf(" '/' : dvisao\n"); //divisão 
        printf(" '%%' :  resto da divisa\n"); //o resto da operação 

        //exemplos para o user que for usar á calculadora :D 
        printf("\nDigite uma a expressao de uma forma: numero1 + numero2"); //exemplos da operacão e a forma
        scanf("%f", numero1); //O usuario vai coloca o primeiro número para inicializar a operação 
        printf("\nExemplos: 1+1 , 2+2, 3.1*2.5\n"); //conjunção do calculo 
        scnaf("%c", operacao); // seria o vetor da operação congruentes para á junção dos fatoes
        printf("\nPara sair da operacao digite: 0 0 0 \n"); //e a forma de sair da operação 
        scanf("%f", numero2); // o segundo número para finalizar a operação 

        // comando cls ou clear para windows ou linux (O comando será feito para apaga os dados do terminal..)!
        system("cls || clear");


        /*laco de repeticão com switch/case/default/break*/

        switch (operacao)
        {
            case '+':
                    printf("%f\n\n", numero1 + numero2); //operacão em case para soma dos 2 vetores 
                    break;

            case '-':
                    printf("%f\n\n", numero1 - numero2); //operação em case para subtração dos 2 vetores 
                    break;

            case '*':
                    printf("%f\n\n", numero1 * numero2); // operação em case para multiplicação em 2 vetores 
                    break;

            case '/':
                    if(numero2 != 0){ //operação em relacionados em iguais para diferentes (!=)
                        printf("%f\n\n", numero1 / numero2); // so previsto da calculadora 
                    }
                    else{
                        printf("Não exite divisao por numero 0\n\n");// se o usuario coloca o número 0 não acontecera nada pois não exite divsão em 0
                    }
                    break;  

            case '%':
                    printf("%d\n\n", (int)numero1 % (int)numero2); // em porcentagem no case usamos o (int)informando a maquina para que seja um numero inteiro para não quebra o códico
                    break;            
            default:
                    if(numero1!=0 && operacao!='0' && numero2!=0){
                        printf("\n\nOperador invalido\n\n");
                    }
                    else{
                        printf("\n\nFechando a calculadora!\n\n");
                    }
                    /*
                    No default coloquei um parametro em if e else, para que o primeiro vetor não seja igual a 0, 
                    nem os segundo vetor seja igual a 0! nisso se isso acontecer ele fechar a calculadora 
                    printando no terminal 
                    */


        }while(numero1!= 0 && operacao!= '0' && numero2!=0);


    }

    
}



