/*
    fazer um programa para ler as duas notas que um aluno obteve no  primeiro e segundo semestre
    de uma disciplina anual. Em seguida, mostrar a  nota final que o aluno obteve (com uma casa decimal) no ano
    juntamente com um texto explicativo. Caso a nota final do aluno seja inferior a 60.0, mostrar a mensagem
    "REPROVADO".
*/

#include <stdio.h>
#include <string.h>

void limpar_entrada() {

    char c;
    while ((c = getchar ()) != '\n' && c != EOF) {}
}

void ler_texto(char *buffer, int length) {

    fgets(buffer, length, stdin);
    strtok(buffer, "\n");
}

int main () {

    double nota1, nota2, media;
    char nome[50];

    printf("Digite o nome do aluno:\n");
    ler_texto(nome, 50);
    printf("Digite a nota do primeiro semestre:\n");
    scanf("%lf", &nota1);
    printf("Digite a nota do segundo semestre:\n");
    scanf("%lf", &nota2);

    media = (nota1 + nota2)/2;

    if (media  < 60.0) {

        printf("O aluno %s teve media %.2f, portanto foi REPROVADO\n", nome, media);
    }
    else {
        printf("O aluno %s teve media %.2f, portanto foi APROVADO\n", nome, media);
    }

    return 0;
}
