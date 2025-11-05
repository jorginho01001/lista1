#include <stdio.h>

int main() {
    float salario, novo_salario;

    printf("Digite o salario atual: ");
    scanf("%f", &salario);

    // Calcula o novo salário 
    novo_salario = salario + (salario * 0.37);

    printf("\nO novo salario com 37%% de aumento e: R$ %.2f\n", novo_salario);

    return 0;
}
