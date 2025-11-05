#include <stdio.h>

int main() {
    float valor_compra, valor_prestacao;

    printf("Digite o valor da compra: ");
    scanf("%f", &valor_compra);

    // Calcula o valor de cada prestação (5 vezes sem juros)
    valor_prestacao = valor_compra / 5;

    printf("\nO valor de cada uma das 5 prestacoes e: R$ %.2f\n", valor_prestacao);

    return 0;
}
