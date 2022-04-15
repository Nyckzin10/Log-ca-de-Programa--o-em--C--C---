#include <stdio.h>
#include <stdlib.h>

int main ()
{
    enum semana{dom, seg, ter, quar, quin, sext, sab};

    int diasemana=sab;

    if(diasemana==seg || diasemana==dom)
    {
        printf("\n\nDia de folga\n\n");
    }
    else{
        printf("\n\nDia de Trabalho\n\n");
    }

    system("pause");
    return 0;
}

