/*
    Fazer um programa para ler as medidas da largura e comprimento de um terreno retangular com 
    uma casa decimal, bem como o valor do metro quadrado do terreno com duas casas decimais. Em 
    seguida, o programa deve mostrar o valor da área do terreno, bem como o valor do preço do 
    terreno, ambos com duas casas decimais.
*/

#include <stdio.h>
#include <string.h>
#include <math.h>

int main() {

    double comprimento, largura, area, preco_unitario, preco_total;

    printf("Calcula o preco de um terreno retangular/quadrado com base nas medidas.\n");
    printf("\n");

    printf("Digite a medida do comprimento do terreno:\n");
    scanf("%lf", &comprimento);

    printf("Digite a media da largura do terreno:\n");
    scanf("%lf", &largura);

    printf("Digite o preco unitario(por m2) do terreno:\n");
    scanf("%lf", &preco_unitario);

    area = (largura * comprimento);
    preco_total = (area * preco_unitario);
    
    printf("AREA DO TERRENO: %.2lf metros quadrados.\nPRECO TOTAL DO TERRENO: R$%.2lf.", area, preco_total);

    return 0;
}