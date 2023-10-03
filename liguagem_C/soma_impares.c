/******************************************************************************

O programa permite somar os números ímpares compreendidos dentro de um intervalo
aberto.

*******************************************************************************/
#include <stdio.h>
#include <string.h>
#include <math.h>

void ler_texto(char *buffer, int length){
    fgets(buffer, length, stdin);
    strtok(buffer, "\n");
}

void limpar_entrada(){
    char c;
    while((c=getchar()) != 'n'&& c != EOF){}
}

int main(){
    int x, y, soma;
    soma = 0;
    
    printf("Digite um numero inteiro: \n");
    scanf("%d", &x);
    printf("Digite outro numero: \n");
    scanf("%d", &y);
    
    if (x < y){
        while (x < y){
            if (x % 2 == 0){
                x++;
                if(x < y){
                    soma = soma + x;
                }
                x++;
            }
            else{
                x = x + 2;
                if (x < y){
                    soma = soma + x;
                }
                x++;
            }
        }
        printf("SOMA = %d", soma);
    }
    else{
        while (y < x){
            if (y % 2 == 0){
                y++;
                if (y < x){
                    soma = soma + y;
                }
                y++;
            }
            else{
                y = y + 2;
                if (y < x){
                    soma = soma + y;
                }
                y++;
            }
        }
        printf("SOMA = %d", soma);
    }

    return 0;
}
