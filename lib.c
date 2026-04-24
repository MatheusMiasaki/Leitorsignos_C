#include <stdio.h>
#include <stdlib.h>

// função para determinar signos e abrir o arquivo HTML
int determinar_signo(int dia, int mes) {
      // Mês tem que ser maior q 1 e menor q 12 || Dia tem que ser maior q 1 e menor q 12
    if (mes < 1 || mes > 12 || dia < 1 || dia > 31) {
        return printf("Data inválida, DIGITE NOVAMENTE!!\n");
    }

    // Validação de mês de acordo com os dias mes 2>29 dias 4,6,9,11 meses com 30 dias
    if ((mes == 2 && dia > 29) ||
        ((mes == 4 || mes == 6 || mes == 9 || mes == 11) && dia > 30)) {
        return printf("Data inválida, DIGITE NOVAMENTE!!\n");
    }

    // Áries: 21/03 a 20/04
    if ((mes == 3 && dia >= 21) || (mes == 4 && dia <= 20)) {
        return system("xdg-open ../html/aries.html");
    }
    // Touro: 21/04 a 20/05
    else if ((mes == 4 && dia >= 21) || (mes == 5 && dia <= 20)) {
        return system("xdg-open ../html/touro.html");
    }
    // Gêmeos: 21/05 a 20/06
    else if ((mes == 5 && dia >= 21) || (mes == 6 && dia <= 20)) {
        return system("xdg-open ../html/gemeos.html");
    }
    // Câncer: 21/06 a 21/07
    else if ((mes == 6 && dia >= 21) || (mes == 7 && dia <= 21)) {
        return system("xdg-open ../html/cancer.html");
    }
    // Leão: 22/07 a 22/08
    else if ((mes == 7 && dia >= 22) || (mes == 8 && dia <= 22)) {
        return system("xdg-open ../html/leao.html");
    }
    // Virgem: 23/08 a 22/09
    else if ((mes == 8 && dia >= 23) || (mes == 9 && dia <= 22)) {
        return system("xdg-open ../html/virgem.html");
    }
    // Libra: 23/09 a 22/10
    else if ((mes == 9 && dia >= 23) || (mes == 10 && dia <= 22)) {
        return system("xdg-open ../html/libra.html");
    }
    // Escorpião: 23/10 a 21/11
    else if ((mes == 10 && dia >= 23) || (mes == 11 && dia <= 21)) {
        return system("xdg-open ../html/escorpiao.html");
    }
    // Sagitário: 22/11 a 21/12
    else if ((mes == 11 && dia >= 22) || (mes == 12 && dia <= 21)) {
        return system("xdg-open ../html/sagitario.html");
    }
    // Capricórnio: 22/12 a 20/01
    else if ((mes == 12 && dia >= 22) || (mes == 1 && dia <= 20)) {
        return system("xdg-open ../html/capricornio.html");
    }
    // Aquário: 21/01 a 19/02.
    else if ((mes == 1 && dia >= 21) || (mes == 2 && dia <= 19)) {
        return system("xdg-open ../html/aquario.html");
    }
    // Peixes: 20/02 a 20/03
    else if ((mes == 2 && dia >= 20) || (mes == 3 && dia <= 20)) {
        return system("xdg-open ../html/peixes.html");
    } return (0);
}

