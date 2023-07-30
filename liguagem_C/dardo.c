/*
    No arremesso de dardo, o atleta tem três chances para lançar o dardo à maior distância que conseguir.
    Você deve criar um programa para, dadas as medidas das três tentativas de lançamento, informar qual
    foi a maior.
*/

#include <stdio.h>
#include <string.h>

void ler_texto(char *buffer, int length) {
    fgets(buffer, length, stdin);
    strtok(buffer, "\n");
}

void limpar_entrada(){
    char c;
    while((c = getchar()) != '\n' && c != EOF) {}
}

int main() {

    double distancia1, distancia2, distancia3;

    printf("Compara tres distancias de lancamento de um dardo\n");
    printf("\n");
    printf("Digite as distancias:\n");
    scanf("%lf", &distancia1);
    scanf("%lf", &distancia2);
    scanf("%lf", &distancia3);

    if (distancia1 >= distancia2 && distancia1 >= distancia3) {
        printf("MAIOR DISTANCIA: %.2lf\n", distancia1);
    }
    else if (distancia2 >= distancia1 && distancia2 >= distancia3) {
        printf("MAIOR DISTANCIA: %.2lf\n", distancia2);
    }
    else {
        printf("MAIOR DISTANCIA: %.2lf\n", distancia3);
    }

    return 0;
}