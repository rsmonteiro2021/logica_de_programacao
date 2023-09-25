//Ler um número inteiro N, daí mostrar na tela a tabuada de N para 1 a 10, conforme exemplo.//
#include <stdio.h>
#include <math.h>
#include <string.h>

void ler_texto(char *buffer, int lenght){
    fgets(buffer, lenght, stdin);
    strtok(buffer, "\n");
}

void limpar_entrada(){
    char c;
    while((c = fgetchar()) != 'n' && c != EOF){}
}

int main(){
    int a, b, c;

    printf("Tabuada de Multiplicar\n");
    printf("\n");
    printf("Digite o valor do multiplicando: \n");
    scanf("%d", &a);

    b = 1;
    
    while (b <= 10){
        c = a * b;
        printf("%d x %d = %d\n", a, b, c);
        b++;
    }

    return 0;
}
