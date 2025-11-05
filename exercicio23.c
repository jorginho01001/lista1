#include <stdio.h>

int main() {
    float valor_produto, novo_valor;

    printf("Digite o valor do produto: ");
    scanf("%f", &valor_produto);

    // Calcula o novo valor com 9% de desconto
    novo_valor = valor_produto - (valor_produto * 0.09);

    printf("\nValor original: R$ %.2f", valor_produto);
    printf("\nValor com 9%% de desconto: R$ %.2f\n", novo_valor);

    return 0;
}
