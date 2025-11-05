#include <stdio.h>

int main() {
    float base, altura, lado, raio, base_maior, base_menor, diagonal_maior, diagonal_menor;
    float area_triangulo, area_quadrado, area_circulo, area_trapezio, area_retangulo, area_losango;
    float pi = 3.14159;

    // triângulo
    printf("Digite a base do triangulo: ");
    scanf("%f", &base);
    printf("Digite a altura do triangulo: ");
    scanf("%f", &altura);
    area_triangulo = (base * altura) / 2;
    printf("Area do triangulo = %.2f\n\n", area_triangulo);

    // quadrado
    printf("Digite o lado do quadrado: ");
    scanf("%f", &lado);
    area_quadrado = lado * lado;
    printf("Area do quadrado = %.2f\n\n", area_quadrado);

    // circulo
    printf("Digite o raio do circulo: ");
    scanf("%f", &raio);
    area_circulo = pi * raio * raio;
    printf("Area do circulo = %.2f\n\n", area_circulo);

    // trapezio
    printf("Digite a base maior do trapezio: ");
    scanf("%f", &base_maior);
    printf("Digite a base menor do trapezio: ");
    scanf("%f", &base_menor);
    printf("Digite a altura do trapezio: ");
    scanf("%f", &altura);
    area_trapezio = ((base_maior + base_menor) * altura) / 2;
    printf("Area do trapezio = %.2f\n\n", area_trapezio);

    // retangulo
    printf("Digite a base do retangulo: ");
    scanf("%f", &base);
    printf("Digite a altura do retangulo: ");
    scanf("%f", &altura);
    area_retangulo = base * altura;
    printf("Àrea do retangulo = %.2f\n\n", area_retangulo);

    // losango
    printf("Digite a diagonal maior do losango: ");
    scanf("%f", &diagonal_maior);
    printf("Digite a diagonal menor do losango: ");
    scanf("%f", &diagonal_menor);
    area_losango = (diagonal_maior * diagonal_menor) / 2;
    printf("Àrea do losango = %.2f\n\n", area_losango);

    return 0;
}
