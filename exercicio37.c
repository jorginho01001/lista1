#include <stdio.h>
#include <locale.h>

int main() {
    float tempo, velocidade, distancia, litros_usados;

    printf("Digite o tempo gasto na viagem (em horas): ");
    scanf("%f", &tempo);

    printf("Digite a velocidade média (em km/h): ");
    scanf("%f", &velocidade);

    // Cálculo da distância percorrida
    distancia = tempo * velocidade;

    // Cálculo da quantidade de combustível (12 km por litro)
    litros_usados = distancia / 12;

    printf("\nDistancia percorrida: %.2f km", distancia);
    printf("\nQuantidade de combustivel gasto: %.2f litros\n", litros_usados);

    return 0;
}
