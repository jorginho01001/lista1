#include <stdio.h>

int main() {
    float salario, imposto;

    printf("Digite o salario do funcionario: ");
    scanf("%f", &salario);

    //imposto = 5% do salário
    
    imposto = salario * 0.05;

    printf("O valor do imposto de renda a ser pago e: %.2f\n", imposto);

    return 0;
}
