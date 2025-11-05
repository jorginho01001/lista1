#include <stdio.h>

int main() {
    float peso, altura, imc;

    printf("Digite o peso (em kg): ");
    scanf("%f", &peso);

    printf("Digite a altura (em metros): ");
    scanf("%f", &altura);

    // Calcula o IMC: peso dividido pelo quadrado da altura
    imc = peso / (altura * altura);

    printf("\nO indice de massa corporea (IMC) e: %.2f\n", imc);

    return 0;
}
