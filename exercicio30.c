#include <stdio.h>

int main() {
    float custo_fabrica, custo_final;

    // Leitura do custo de fábrica
    printf("Digite o custo de fabrica do carro: ");
    scanf("%f", &custo_fabrica);

    // Aplica os 45% de impostos sobre o custo de fábrica
    custo_final = custo_fabrica + (custo_fabrica * 0.45);

    // Aplica 28% de margem do distribuidor sobre o resultado
    custo_final = custo_final + (custo_final * 0.28);

    // Exibe o resultado final
    printf("\nO custo ao consumidor e: R$ %.2f\n", custo_final);

    return 0;
}
