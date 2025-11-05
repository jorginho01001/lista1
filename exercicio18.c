#include <stdio.h>

int main() {
    float largura, comprimento, area;

    printf("Digite a largura do lote (em metros): ");
    scanf("%f", &largura);

    printf("Digite o comprimento do lote (em metros): ");
    scanf("%f", &comprimento);

    // Cálculo da área
    area = largura * comprimento;

    printf("\nA area total do lote e: %.2f metros quadrados\n", area);

    return 0;
}