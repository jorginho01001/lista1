#include <stdio.h>

int main() {
    float comprimento, largura, profundidade, volume, valor_total;
    float preco_m3 = 45.00; // preço por metro cúbico

    printf("Digite o comprimento da piscina: ");
    scanf("%f", &comprimento);

    printf("Digite a largura da piscina: ");
    scanf("%f", &largura);

    printf("Digite a profundidade da piscin: ");
    scanf("%f", &profundidade);

    // Calcula o volume da piscina em metros cúbicos
    volume = comprimento * largura * profundidade;

    // Calcula o valor total da construção
    valor_total = volume * preco_m3;

    printf("\nVolume da piscina: %.2fm3\n", volume);
    printf("Valor da construcao: R$ %.2f\n", valor_total);

    return 0;
}
