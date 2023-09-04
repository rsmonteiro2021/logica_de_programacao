
#include <stdio.h>
#include <string.h>
#include <math.h>

void ler_texto (char *buffer, int length) {
    fgets(buffer, length, stdin);
    strtok(buffer, "\n");
}

void limpar_entrada() {
    char c;
    while((c = getchar()) != '\n' && c != EOF) {}
}

int main() {
    int escala;
    double tc, tf;

    printf("QUAL ESCALA DESEJA CONVERTER - celsio (digite 1) ou fahrenheit (digite 2)?\n");
    scanf("%d", &escala);

    while(escala > 2 || escala < 1) {
        printf("ERROR: Verifique a opcao digitada:\n");
        printf("QUAL ESCALA DESEJA CONVERTER - celsio (digite 1) ou fahrenheit (digite 2)?\n");
        scanf("%d", &escala);
    }

    if(escala == 2) {
        printf("CONVERTE A TEMPERATURA DE FAHRENHEIT PARA CELSIO\n");
        printf("Digite a temperatura em Fahrenheit: ");
        scanf("%lf", &tf);

        tc = (5.0/9.0)*(tf-32);

        printf("%.2lfF = %.2lfC", tf, tc);
    }
    else {
        printf("CONVERTE A TEMPERATURA DE CELSIO PARA FAHRENHEIT\n");
        printf("Digite a temperatura em Celsio: ");
        scanf("%lf", &tc);

        tf = (tc * 9/5)+32;

        printf("%.2lfC = %.2fF", tc, tf);
    }

    return 0;
}

