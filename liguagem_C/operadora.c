/*
    Uma operadora de telefonia cobra R$ 50.00 por um plano básico que dá direito a 100 minutos de 
    telefone. Cada minuto que exceder a franquia de 100 minutos custa R$ 2.00. Fazer um programa 
    para ler a quantidade de minutos que uma pessoa consumiu, daí mostrar o valor a ser pago. 
*/

#include <stdio.h>
#include <string.h>
#include <math.h>

void ler_texto(char *buffer, int length) {
    fgets(buffer, length, stdin);
    strtok(buffer, "\n");
}

void limpar_entrada() {
    char c;
    while((c = getchar()) != "\n" && c != EOF) {}
}

int main() {
    double tempo_uso, plano_basico, valor_total;

    plano_basico = 50.00;

    printf("Digite quantos minutos foi utilizado:\n");
    scanf("%lf", &tempo_uso);

    if (tempo_uso <= 100) {
        valor_total = plano_basico;
        printf("Foram utilizados um total de %.1lf minutos.\n", tempo_uso);
        printf("Valor da fatura: R$%.2lf.\n", valor_total);
    }
    else {
        valor_total = plano_basico + ((tempo_uso - 100) * 2.00);
        printf("Foram utilizados um total de %lf minutos.\n", tempo_uso);
        printf("Valor da fatura: R$%.2lf.\n", valor_total);
    }
    
    return 0;
}