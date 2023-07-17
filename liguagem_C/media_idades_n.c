/*
    Faça um programa para ler um número indeterminado de dados, contendo cada um, a idade de um 
    indivíduo. O último dado, que não entrará nos cálculos, contém um valor de idade negativa.
    Calcular e imprimir a idade média deste grupo de indivíduos. Se for entrado um valor negativo
    na primeira vez, mostrar a mensagem "IMPOSSIVEL CALCULAR". 
*/

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
    int n, i, age, total;
    double media;
    char name[50];
    i = 1;
    
    printf("Qual será a quantidade de idades que serão digitadas: ");
    scanf("%d", &n);
    printf("\nOBSERVACAO: A última idade digitada deverá ser um valor negativo!!!\n");
    
    printf("Digite o nome e a idade da pessoa:\n");
    printf("NOME: ");
    ler_texto(name, 50);
    limpar_texto();
    printf("Idade: ");
    scanf("%d", &age);
    total = age;
    
    if (age < 0) {
        printf("IMPOSSÍVEL CALCULAR!");
    }
    else {
        while (i <= n-1) {
        printf("Digite o nome e a idade da outra pessoa:\n");
        printf("NOME: ");
        limpar_texto();
        ler_texto(name, 50);
        printf("Idade: ");
        scanf("%d", &age);
        
        if (age > 0) {
            total = total + age;
        }
        else {
            total = total;
        }
        
        media = (double)total/(n-1);
        i++;
    }
    printf("A média entre as idades é %.2lf.", media);
    }
   
    return 0;
}