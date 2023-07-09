/*
Fazer um programa para ler os três coeficientes de uma equação do segundo grau. Usando a fórmula 
de Baskara, calcular e mostrar os valores das raízes x1 e x2 da equação com quatro casas decimais, 
conforme exemplo. Se a equação não possuir raízes reais, mostrar uma mensagem.
*/

#include <stdio.h>]
#include <string.h>
#include <math.h>

void write_text (char *buffer, int length) {
    fgets(buffer, length, stdin);
    strtok(buffer, "\n");
}

void clear_int() {
    char c;
    while ((c =  getchar ()) != "\n" && c != EOF) {}
}

int main () {
    double a, b, c, x1, x2, bascara;

    printf("CALCULA AS RAIZES DE UMA FUNCAO DO SEGUNDO GRAU\n");
    printf("Digite o coeficiente angular da equacao do segundo grau:\n");
    scanf("%lf", &a);
    printf("Digite o coeficiente linear da equacao do segundo grau:\n");
    scanf("%lf", &b);
    printf("Digite o coeficiente independente da equacao do segundo grau:\n");
    scanf("%lf", &c);

    bascara = pow(b, 2) - (4 * a * c);

    if (bascara >= 0 && a != 0) {
        x1 = (-b + sqrt(bascara))/(2*a);
        x2 = (-b - sqrt(bascara))/(2*a);
        printf("x1 = %.2lf\n", x1);
        printf("x2 = %.2lf\n", x2);
    }
    
    else {
        printf("A equacao nao possui raizes reais\n");
    }

}