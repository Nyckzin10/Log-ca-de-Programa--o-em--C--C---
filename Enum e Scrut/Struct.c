#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main ()

{
    struct TipoAluno{
        int Nota;
        char Nome[30];
    };

    struct TipoAluno Alunos[2];

    Alunos[0].Nota=10;
    strcpy(Alunos[0].Nome, "Hedris");

    Alunos[1].Nota=5;
    strcpy(Alunos[1].Nome, "Gorila");

    int i;
    for(i=0;i<2;i++){
        printf("Alunos: %s - Nota: %d\n", Alunos[i].Nome, Alunos[i].Nota);
    }


    system("pause");
    return 0;
    
}