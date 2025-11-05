#include <stdio.h>

int main() {
    int peso;  
    float peso_gramas, novo_peso_gramas;

    printf("Digite o peso da pessoa (em kg, valor inteiro): ");
    scanf("%d", &peso);

    
    peso_gramas = peso * 1000;

    
    novo_peso_gramas = peso_gramas + (peso_gramas * 0.05);

  
    printf("\nPeso em gramas: %.2f g\n", peso_gramas);
    printf("Novo peso em gramas (com 5%% a mais): %.2f g\n", novo_peso_gramas);

    return 0;
}
