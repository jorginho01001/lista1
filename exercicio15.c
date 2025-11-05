#include <stdio.h>

int main() {
    int ano_nascimento, ano_atual, idade, idade_semanas;

    printf("Digite o ano de nascimento: ");
    scanf("%d", &ano_nascimento);

    printf("Digite o ano atual: ");
    scanf("%d", &ano_atual);

 
    idade = ano_atual - ano_nascimento;

    
    idade_semanas = idade * 52;

    printf("\nIdade: %d anos\n", idade);
    printf("Idade em semanas: %d semanas\n", idade_semanas);

    return 0;
}
