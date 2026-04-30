#include <stdio.h>
#include "lib.c"

int main() {
    int dia, mes;
    int continua = 0;

    do {
        printf("Digite o dia do seu aniversário:\n ");
        scanf("%d", &dia);
        printf("Digite o mês do seu aniversário:\n ");
        scanf("%d", &mes);
        //Se usuário digitar 0 ele quebra a estrutura de repetição.
        if( data_valida(dia, mes)){
           determinar_signo(dia, mes);
        }
        else{
            printf("Data Inválida.\n\n");
        }   
        printf("(0 - Sair || 1 - Continuar)\n\n");
        scanf("%d",&continua);

    } while(continua); // Repetir até que o usuário escolha sair.

    return 0;
}