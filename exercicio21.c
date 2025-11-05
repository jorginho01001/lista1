#include <stdio.h>

int main() {
    float p1, p2, p3, p4, p5; // preços dos produtos
    float total, pagamento, troco;

    printf("Digite o valor do primeiro produto: ");
    scanf("%f", &p1);

    printf("Digite o valor do segundo produto: ");
    scanf("%f", &p2);

    printf("Digite o valor do terceiro produto: ");
    scanf("%f", &p3);

    printf("Digite o valor do quarto produto: ");
    scanf("%f", &p4);

    printf("Digite o valor do quinto produto: ");
    scanf("%f", &p5);

    // Soma dos valores
    total = p1 + p2 + p3 + p4 + p5;

    printf("\nValor total da compra: R$ %.2f\n", total);

    // Valor pago pelo cliente
    printf("Digite o valor do pagamento: ");
    scanf("%f", &pagamento);

    // Calcula o troco
    troco = pagamento - total;

    printf("\nTroco a ser devolvido: R$ %.2f\n", troco);

    return 0;
}
