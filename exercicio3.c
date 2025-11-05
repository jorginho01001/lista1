#include <stdio.h>


int num1;
int num2;
float resultado;

int main() {
     
      int num1;
      int num2;
      float resultado;


    printf("Digite o dividendo: ");
    scanf("%f", &num1);

    printf("Digite o divisor: ");
    scanf("%f", &num2);

    
    resultado = num1 / num2;

    printf("O resultado da divisao e: %.2f\n", resultado);

    return 0;

}