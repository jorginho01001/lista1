#include <stdio.h>

int main() {
    float altura_degrau, altura_desejada;
    int quantidade_degraus;

    printf("Digite a altura de cada degrau (em metros): ");
    scanf("%f", &altura_degrau);

    printf("Digite a altura que deseja alcancar (em metros): ");
    scanf("%f", &altura_desejada);

    // Calcula a quantidade de degraus necessária
    quantidade_degraus = altura_desejada / altura_degrau;

    printf("\nVoce devera subir aproximadamente %d degraus para alcancar essa altura.\n", quantidade_degraus);

    return 0;
}
