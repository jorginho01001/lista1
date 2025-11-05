#include <stdio.h>

int main() {
    int num_apartamentos;
    float valor_diaria, valor_promocional;
    float total_100, total_70, valor_desconto;

    printf("Digite o numero de apartamentos: ");
    scanf("%d", &num_apartamentos);

    printf("Digite o valor da diaria por apartamento: ");
    scanf("%f", &valor_diaria);

    // Calcula o valor com desconto de 25%
    valor_promocional = valor_diaria * 0.75;

    // Valor total caso 100% dos apartamentos forem ocupados
    total_100 = num_apartamentos * valor_promocional;

    // Valor total caso 70% dos apartamentos forem ocupados
    total_70 = total_100 * 0.70;

    // Valor que o hotel deixa de arrecadar com o desconto (se 100% ocupados)
    valor_desconto = (valor_diaria * num_apartamentos) - total_100;

    printf("\nValor promocional da diaria: R$ %.2f", valor_promocional);
    printf("\nValor total com 100%% de ocupacao: R$ %.2f", total_100);
    printf("\nValor total com 70%% de ocupacao: R$ %.2f", total_70);
    printf("\nValor que o hotel deixa de arrecadar com a promocao: R$ %.2f\n", valor_desconto);

    return 0;
}
