/*
Fazer um programa para ler dois números inteiros M e N (máximo = 10). Em seguida, ler  uma matriz
de M linhas e N colunas contendo números reais. Gerar um vetor de modo que cada elemento do vetor
seja a soma dos elementos da linha correspondente da matriz. Mostrar o vetor gerado.
*/

#include <stdio.h>
#include <string.h>
#include <math.h>

void limmpar_entrada(){
    char c;
    while ((c=getchar()) != '\n' && c != EOF){}
}

void ler_texto(char *buffer, int length){
    fgets(buffer, length, stdin);
    strtok(buffer, "\n");
}

int main(){
    int M, N;
    
    printf("Digite o número de linhas e de colunas da matriz: \n");
    scanf("%d %d", &M, &N);

    double matriz[M][N], vet[M];

    for (int i = 0; i < M; i++){
        for (int j = 0; j < N; j++){
            printf("Digite o elemento [%d %d]\n", i, j);
            scanf("%lf", &matriz[i][j]);
        }
    }

    printf("MATRIZ DIGITADA:\n");
    for (int i = 0; i < M; i++){
        for (int j = 0; j < N; j++){
            printf("%.2lf ", matriz[i][j]);
        }
        printf("\n");
    }

    for (int i = 0; i < M; i++){
        for (int j = 0; j < N; j++){
            vet[i] = matriz[i][j] + matriz[i][j + 1]
            printf("%.2lf ", matriz[i][j]);
        }
        printf("\n");
    }

    return 0;
}