/*
Programa que faz o somatório de numeros impares compreendido entre dois numeros inteiros.
*/

#include <stdio.h>
#include <string.h>
#include <math.h>

void ler_texto(char *buffer, int lenght){
    fgets(buffer, lenght, stdin);
    strtok(buffer, "\n");
}

void limpar_entrada(){
    char c;
    while((c=getchar()) != '\n' && c != EOF){}
}

int main(){
    int x, y, soma, troca;

    printf("Digite dois numeros inteiros em qualquer ordem:\n");
    scanf("%d %d", &x, &y);
    soma = 0;

    if (x > y){
        troca = x;
        x = y;
        y = troca;
    }

    for (int i = x + 1; i < y; i++){
        if(i % 2 != 0){
            soma = soma + i;
        }
    }
    printf("A soma dos numeros inteiros compreendidos entre %d e %d eh %d", x, y, soma);

    return 0;
}