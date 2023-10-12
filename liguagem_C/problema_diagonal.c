/******************************************************************************

Fazer um programa para ler um numero inteiro (N maximo igual a 10) e uma matriz quadrada de ordem N contendo
numeros inteiro. Em seguida, mostrar a diagonal principal e a quantidade de valores negativos da matriz.

*******************************************************************************/
#include <stdio.h>
#include <string.h>
#include <math.h>

void limpar_entrada(){
    char c;
    while ((c = getchar()) != '\n' && c != EOF){}
}

void ler_texto(char *buffer, int lenght){
    fgets(buffer, lenght, stdin);
    strtok(buffer, "\n");
}

int main()
{
    int n, negativos;
    
    printf("Digite a ordem da matriz: ");
    scanf("%d", &n);
    
    int matriz[n][n];
    
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            printf("Elemento [%d, %d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }
    
    printf("\nMatriz de Ordem %d:\n", n);
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }

    printf("Diagonal Principal:\n");
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            if (i == j){
                printf("%d ", matriz[i][j]);
            }
        }
    }
    
    negativos = 0;
    printf("\nQuantidade de Elementos Negativos\n");
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            if(matriz[i][j] < 0){
                negativos++;
                printf("Elemento [%d, %d] = %d\n", i, j, matriz[i][j]);
            }
        }
    }
    printf("Quantidade de elementos negativos %d", negativos);

    return 0;

   
}
