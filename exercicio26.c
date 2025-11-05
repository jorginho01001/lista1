#include <stdio.h>

int main() {
    float a, b, c, d, e, f;
    float x, y, denominador;

    // Leitura dos coeficientes
    printf("Digite os valores de a, b e c (da primeira equacao ax + by = c): ");
    scanf("%f %f %f", &a, &b, &c);

    printf("Digite os valores de d, e e f (da segunda equacao dx + ey = f): ");
    scanf("%f %f %f", &d, &e, &f);

    // Cálculo do denominador comum (ae - bd)
    denominador = a * e - b * d;

    // Verifica se o sistema tem solução única
    if (denominador == 0) {
        printf("\nO sistema nao possui solucao unica (divisao por zero).\n");
    } else {
       
        x = (c * e - b * f) / denominador;
        y = (a * f - c * d) / denominador;

        // Exibe os resultados
        printf("\nValor de x = %.2f", x);
        printf("\nValor de y = %.2f\n", y);
    }

    return 0;
}
