/*
    A partir de uma quantidade de alunos e notas definidas, o programa calcula a média de cada aluno
    e informa se o mesmo foi aprovado dependendo das condição de aprovação.
*/
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <locale.h>

void ler_texto(char *buffer, int length) {
    fgets(buffer, length, stdin);
    strtok(buffer, "\n");
}

void limpar_texto() {
    char c;
    while((c = getchar()) != '\n' && c != EOF) {}
}

int main() {
    int x, N, i, a;
    double nota, total, media, condicao;
    char nome[50];

    setlocale(LC_ALL, "Portuguese");
    
    printf("Qantos alunos foram avaliados?\n");
    scanf("%d", &x);
    printf("Quantas notas serão digitadas?\n");
    scanf("%d", &N);
    printf("Digite a menor media para aprovacao:\n");
    scanf("%lf", &condicao);
    total = 0;
    
    for(a = 1; a <= x; a++) {
        
        printf("Digite o nome do %dº aluno:\n", a);
        limpar_texto();
        ler_texto(nome, 50);
        i = 1;
        
        while(i <= N) {
            printf("Digite a %iª nota do aluno:\n");
            scanf("%lf", &nota);
            total = total + nota;
            i++;
        }
        
        media = total/N;
        
        if (media >= condicao) {
            printf("O aluno %s teve media = %.2lf, portanto foi Aproavado.\n", nome, media);
        }
        else {
            printf("O aluno %s teve media = %.2lf, portanto foi Reproavado.\n", nome, media);
        }
        
        total = 0;
    }

    return 0;
}