  #include <stdio.h>

int main() {
   
    int num1;
    int num2;
    int soma;
    
    printf("Digite o primeiro numero inteiro: ");
    scanf("%d", &num1);

    printf("Digite o segundo numero inteiro: ");
    scanf("%d", &num2);

    soma = num1 + num2;

    printf("Resultado: %d", soma);

    return 0;

}