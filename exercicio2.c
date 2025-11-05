
int main() {
    float num1;
    float num2;
    float resultado;

    printf("Digite o primeiro numero: ");
    scanf("%f", &num1);

    printf("Digite o segundo numero: ");
    scanf("%f", &num2);

    resultado = num1 - num2;

    printf("O resultado da subtracao e: %.2f\n", resultado);

    return 0;
}