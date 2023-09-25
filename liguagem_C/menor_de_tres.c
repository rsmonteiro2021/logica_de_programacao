#include <stdio.h>
#include <string.h>
#include <math.h>

void ler_texto(char *buffer, int lenght){
    fgets(buffer, lenght, stdin);
    strtok(buffer, "\n");
}

void limpar_entrada(){
    char c;
    while((c = getchar()) != '\n' && c != EOF) {}
}

int main(){
    int a, b, c;

    printf("MOSTRA O MENOR VALOR DE TRES\n");
    printf("Digite o primeiro valor inteiro: ");
    scanf("%d", &a);
    printf("Digite o segundo valor inteiro: ");
    scanf("%d", &b);
    printf("Digite o terceiro valor inteiro: ");
    scanf("%d", &c);

    if (a <= b && a <= c){
        printf("O menor valor eh %d", a);
    }
    else if (b <= a && b <= c){
        printf("O menor valor eh %d", b);
    }
    else {
        printf("O menor valor eh %d", c);
    }

    return 0;
}