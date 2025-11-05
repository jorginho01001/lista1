#include <stdio.h>

int main() {
    float n1, n2, n3, soma, media;
    
    printf("Digite o primeiro valor: ");
    scanf("%f", &n1);

    printf("Digite o segundo valor: ");
    scanf("%f", &n2);

    printf("Digite o terceiro valor: ");
    scanf("%f", &n3);

    // alcula o somatório e a média
    soma = n1 + n2 + n3;
    media = soma / 3;

    // exibe resultados
    printf("\nSomatorio = %.2f\n", soma);
    printf("Media = %.2f\n", media);

    // mostra  resto da divisão do somatório por cada valor
    printf("\nResto da divisao do somatorio por %.2f = %.2f\n", n1, (int)soma % (int)n1);
    printf("Resto da divisao do somatorio por %.2f = %.2f\n", n2, (int)soma % (int)n2);
    printf("Resto da divisao do somatorio por %.2f = %.2f\n", n3, (int)soma % (int)n3);

    return 0;
}
