#include <stdio.h>

int main() {
    float custo, preco_convite;
    float qtd_minima, qtd_lucro;

    printf("Digite o custo do espetaculo: ");
    scanf("%f", &custo);

    printf("Digite o preco do convite: ");
    scanf("%f", &preco_convite);

    // Quantidade mínima de convites para cobrir o custo
    qtd_minima = custo / preco_convite;

    // Quantidade de convites para ter lucro de 23%
    qtd_lucro = (custo * 1.23) / preco_convite;

    printf("\nQuantidade minima de convites para cobrir o custo: %.0f", qtd_minima);
    printf("\nQuantidade de convites para ter lucro de 23%%: %.0f\n", qtd_lucro);

    return 0;
}
