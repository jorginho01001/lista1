#include <stdio.h>

int main() {
    float distancia_km, velocidade_kmh;
    float tempo_horas, velocidade_ms;

    printf("Digite a distancia entre os dois pontos (em km): ");
    scanf("%f", &distancia_km);

    printf("Digite a velocidade (em km/h): ");
    scanf("%f", &velocidade_kmh);

    tempo_horas = distancia_km / velocidade_kmh;
    
    velocidade_ms = velocidade_kmh * 1000 / 3600;

    printf("\ntempo medio de viagem: %.2f horas", tempo_horas);
    printf("\nvelocidade em metros por segundo: %.2f m/s\n", velocidade_ms);

    return 0;
}
