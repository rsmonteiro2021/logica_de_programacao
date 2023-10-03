/*
Mostra os números negativos de uma vetor de tamanho N
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
    int N;

    printf("Digite quantos elementos tera o vetor:\n");
    scanf("%d", &N);

    int vet[N];

    for (int i = 0; i < N; i++){
        printf("Digite o elemento %d do vetor: ", i+1);
        scanf("%d", &vet[i]);
    }

    printf("ELEMENTOS NEGATIVOS DO VETOR N:\n");
    for (int i = 0; i < N; i++){
        if (vet[i] < 0){
            printf("Elemento %d = %d\n", i+1, vet[i]);
        }  
    }

    return 0;
}