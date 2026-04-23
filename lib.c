#include <stdio.h>
#include <stdlib.h>

int data (int dia, int mes){
    if (dia>=21 && dia <=30 && mes==1 || dia <=19 && mes ==2){
    return (system("xdg-open /home/aluno/Documentos/trabalhoc/html/01.html"));
    }
}

// no mes 1 tem que ser de 21 a 31 e no mes 2 ate dia 19 