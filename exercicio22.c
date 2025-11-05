#include <stdio.h>

int main() {
    int A, B, C, temp; 

    printf("Digite o valor de A: ");
    scanf("%d", &A);

    printf("Digite o valor de B: ");
    scanf("%d", &B);

    printf("Digite o valor de C: ");
    scanf("%d", &C);

    // Exibe os valores originais
    printf("\nAntes da troca:\nA = %d, B = %d, C = %d\n", A, B, C);

    // Troca os valores
    temp = A; // guarda o valor de A
    A = B;    // A recebe o valor de B
    B = C;    // B recebe o valor de C
    C = temp; // C recebe o valor original de A

   
    printf("\nDepois da troca:\nA = %d, B = %d, C = %d\n", A, B, C);

    return 0;
}
