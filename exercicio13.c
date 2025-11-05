#include <stdio.h>
#include <locale.h>

int main() {
    float salario_minimo, quilowatts, valor_quilowatt;
    float valor_total, valor_com_desconto;

    printf("Digite o valor do salário minimo: ");
    scanf("%f", &salario_minimo);

    printf("Digite a quantidade de quilowatts gasta: ");
    scanf("%f", &quilowatts);

    // 1 kW custa 1/5 do salário mínimo
    valor_quilowatt = salario_minimo / 5;

    // Valor total a pagar
    valor_total = valor_quilowatt * quilowatts;

    // Valor com desconto de 15%
    valor_com_desconto = valor_total - (valor_total * 0.15);

    printf("\nValor de cada quilowatt: R$ %.2f\n", valor_quilowatt);
    printf("Valor a ser pago pela residência: R$ %.2f\n", valor_total);
    printf("Valor com desconto de 15%%: R$ %.2f\n", valor_com_desconto);

    return 0;
}
