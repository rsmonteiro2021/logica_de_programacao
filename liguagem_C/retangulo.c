#include <stdio.h>
#include <math.h>
#include <string.h>

void ler_texto(*buffer, int length){
    fgets(buffer, lenght, stdin);
    strtok(buffer, "\n");
}

void limpar_entrada(){
    char c;
    while((c = getchar()) != '\n' && c != EOF){} 
}

int main(){
    double b, h, area, perimetro, diagonal;

    printf("RETANGULO\n");
    printf("\n");
    printf("Digite a Base do retangulo:\n");
    scanf("%lf", &b);
    printf("Digite a Altura do retangulo:\n");
    scanf("%lf", &h);

    area = b * h;
    perimetro = 2*b + 2*h;
    diagonal = sqrt(pow(b, 2) + pow(h, 2));

    printf("DADOS DO RETANGULO:\n")
    printf("Base do Retangulo: %.2lf\n", b);
    printf("Altura do Retangulo: %.2lf\n", h);
    printf("Area do Retangulo: %.2lf\n", area);
    printf("Perimetro do Retangulo: %.2lf\n", perimetro);
    printf("Diagonal do Retangulo: %.2lf\n", diagonal);


    return 0;
}
