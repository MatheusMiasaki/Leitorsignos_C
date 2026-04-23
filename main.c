#include <stdio.h>
#include "lib.c"

int main() {
    int dia, mes;
    do {
        printf("Digite o dia do seu aniversário:\n ");
        scanf("%d", &dia);
        printf("Digite o mês do seu aniversário (0 para sair):\n ");
        scanf("%d", &mes);

        if (mes == 0) {
            break;
        }
        determinar_signo(dia, mes);
    } while (1);

    return 0;
}