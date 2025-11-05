#include <stdio.h>

int main() {
    float preco_custo, percentual, preco_venda;

    printf("Digite o preco de custo do produto: ");
    scanf("%f", &preco_custo);

    printf("Digite o percentual de acrescimo (ex: 20 para 20%%): ");
    scanf("%f", &percentual);

    // Converte o percentual em decimal e aplica o acréscimo
    preco_venda = preco_custo + (preco_custo * (percentual / 100));

    printf("\nO preco de venda do produto e: R$ %.2f\n", preco_venda);

    return 0;
}
