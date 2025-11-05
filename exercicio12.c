#include <stdio.h>

int main() {
    float salario, novo_salario;

    printf("Digite o salario do funcionario: ");
    scanf("%f", &salario);

    // Cálculo: aumento de 25%
    novo_salario = salario + (salario * 0.25);

    printf("O novo salario do funcionario e: %.2f\n", novo_salario);

    return 0;
}
