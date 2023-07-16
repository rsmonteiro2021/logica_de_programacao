#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <locale.h>

void ler_texto(char *buffer, int length) {
    fgets(buffer, length, stdin);
    strtok(buffer, "\n");
}
void limpar_texto() {
    char c;
    while((c = getchar()) != 'n' && c != EOF) {}
}

int main() {
    int x, y, n, i;

    setlocale(LC_ALL, "Portuguese");

    printf("SOLICITA UMA QUANTIDADE N DE DUPLAS NUMÉRICAS E INFORMA SE A ORDEM DECLARADA É CRESCENTE OU DECRESCENTE\n");
    printf("Digite quantos pares numéricos deseja analisar: ");
    scanf("%d", &n);
    i = 1;

    printf("Digite dois números: \n");
    scanf("%d", &x);
    scanf("%d", &y);
    if (x > y) {
        printf("DECRESCENTE\n");
    }
    else if (x < y) {
        printf("CRESCENTE\n");
    }
    else {
        printf("OS NÚMEROS SÃO IGUAIS\n");
    }

    while(i <= n-1) {
        printf("Digite outros dois números: \n");
        scanf("%d", &x);
        scanf("%d", &y);
        if (x > y) {
            printf("DECRESCENTE\n");
        }
        else if (x < y) {
            printf("CRESCENTE\n");
        }
        else {
            printf("OS NÚMEROS SÃO IGUAIS\n");
        }
        i++;
    }

    return 0;
}