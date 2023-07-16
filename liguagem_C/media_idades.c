/******************************************************************************

Welcome.
Roberto dos Santos Monteiro
15 de Julho de 2023
O programa solicita informações de nome e idade de duas pessoas e informa a média de idades
das duas pessoas.

*******************************************************************************/
#include <stdio.h>
#include <string.h>
#include <math.h>

void ler_texto (char *buffer, int length) {
    fgets(buffer, length, stdin);
    strtok(buffer,"\n");
}

void limpar_texto() {
    char c;
    while ((c = getchar()) != '\n' && c != EOF) {}
}

int main() {
    int age1, age2;
    float media;
    char name1[50], name2[50];
    
    printf("Mostra a media das idades de duas pessoas:\n");
    printf("Digite o nome e a idade da primeira pessoa:\n");
    printf("NOME: ");
    ler_texto(name1, 50);
    printf("Idade: ");
    scanf("%d", &age1);
    
    printf("Digite o nome e a idade da segunda pessoa:\n");
    printf("NOME: ");
    limpar_texto();
    ler_texto(name2, 50);
    printf("IDADE: ");
    scanf("%d", &age2);
    
    media = (age1 + age2)/2;
    
    printf("A média entre as idades de %s e de %s é %.1f.", name1, name2, media);

    return 0;
}