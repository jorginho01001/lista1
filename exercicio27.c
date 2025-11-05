#include <stdio.h>

int main() {
    float celsius, fahrenheit;

    printf("Digite a temperatura em graus Celsius: ");
    scanf("%f", &celsius);

    // Fórmula de conversão: F = (9 * C + 160) / 5
    fahrenheit = (9 * celsius + 160) / 5;

    printf("\nA temperatura em Fahrenheit e: %.2f°F\n", fahrenheit);

    return 0;
}
