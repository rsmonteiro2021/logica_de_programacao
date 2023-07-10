/*
    Fazer um programa para calcular o troco no processo de pagamento de um produto de uma mercearia.
    O programa deve ler o preço unitário do produto, a quantidade de unidades compradas deste produto,
    e o valor em dinheiro dado pelo cliente. Seu programa deve mostrar o valor do troco a ser devolvido
    ao cliente. Se o dinheiro dado pelo cliente não for suficiente, mostrar uma mensagem informando o
    valor restante
*/

#include <stdio.h>
#include <string.h>
#include <math.h>

void ler_texto(char *buffer, int length) {
   fgets(buffer, length, stdin);
   strtok(buffer, "\n");
}

void limpar_entrada() {
    char c;
    while((c = getchar()) != '\n' && c != EOF) {}
}

int main() {
    double pagamento, troco, preco_unitario, restante, total;
    int quantidade;

    printf("Digite o preco do produto desejado:\n");
    scanf("%lf", &preco_unitario);
    printf("Digite a quantidade:\n");
    scanf("%d", &quantidade);

    total = quantidade * preco_unitario;

    printf("Valor pago pelo cliente:\n");
    scanf("%lf", &pagamento);

    if (pagamento >= total) {
        troco = pagamento - total;
        printf("O troco sera no valor de R$%.2lf.", troco);
    }
    else {
        restante = total - pagamento;
        printf("Pagamento insuficiente, faltam R$%.2lf.", restante);
    }
    
    return 0;
}