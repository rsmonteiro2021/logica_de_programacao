/*
    A partir de uma quantidade de alunos e notas definidas, o programa calcula a média de cada aluno
    e informa se o mesmo foi aprovado dependendo das condição de aprovação.
*/
#include <stdio.h>
#include <string.h>
#include <math.h>

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
    double nota, total, media;
    char nome[50];
    
    printf("Qantos alunos foram avaliados?\n");
    scanf("%d", &x);
    printf("Quantas notas serão digitadas?\n");
    scanf("%d", &N);
    a = 1;
    total = 0;
    
    while(a <= x) {
        
        printf("Digite o nome do aluno:\n");
        limpar_texto();
        ler_texto(nome, 50);
        i = 1;
        
        while(i <= N) {
            printf("Digite a nota do aluno:\n");
            scanf("%lf", &nota);
            total = total + nota;
            i++;
        }
        
        media = total/N;
        
        if (media >= 7.0) {
            printf("O aluno %s teve media = %.2lf, portanto foi Aproavado.\n", nome, media);
        }
        else {
            printf("O aluno %s teve media = %.2lf, portanto foi Reproavado.\n", nome, media);
        }
        
        a++;
        total = 0;
    }

    return 0;
}