#include <stdio.h>
#include <math.h> // Necessário para usar pow()

int main() {
    float P, i, valor_acumulado;
    int n;

    printf("Digite o valor da aplicacao mensal (P): ");
    scanf("%f", &P);

    printf("Digite a taxa de rendimento (em %%): ");
    scanf("%f", &i);

    printf("Digite o numero de meses (n): ");
    scanf("%d", &n);

    // Converte taxa percentual para decimal
    i = i / 100;

    // Fórmula: Valor acumulado = P * ((pow(1 + i, n) - 1) / i)
    valor_acumulado = P * ((pow(1 + i, n) - 1) / i);

    printf("\nValor acumulado apos %d meses: R$ %.2f\n", n, valor_acumulado);

    return 0;
}
