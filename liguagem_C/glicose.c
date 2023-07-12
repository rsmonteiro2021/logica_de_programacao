/*
    Fazer um programa para ler a quantidade de glicose no sangue de uma pessoa e depois mostrar na tela a
    classificação desta glicose de acordo com a tabela de referência ao lado.
    Normal - até 100 mg/dl
    Elevado - Maior que 100 até 140 mg/dl
    Diabetes - maior que 140 mg/dl
*/

#include <stdio.h>
#include <string.h>

void ler_texto(char *buffer, int length) {
    fgets(buffer, length, stdin);
    strtok(buffer, "\n");
}

void limpar_entrada() {
    char c;
    while((c = getchar()) != "\n" && c != EOF) {}
}

int main() {

    double medida;
    char classificacao;

    printf("CLASSIFICA O NIVEL DE DIABETES\n");
    printf("\n");
    printf("Digite o nivel de glicose mmedida no sangue\n");
    scanf("%lf", &medida);

    if (medida <= 100) {
        printf("Medida: %.2lf\n", medida);
        printf("Classificacao: Normal");
    }
    else if (medida > 100 && medida <= 140) {
        printf("Medida: %.2lf\n", medida);
        printf("Classificacao: Elevado");
    }
    else {
        printf("Medida: %.2lf\n", medida);
        printf("Classificacao: Diabetes");
    }

    return 0;
}