#include <stdio.h>

int main() {
    int ano_nascimento, ano_atual, idade, idade_2028;

    printf("Digite o ano de nascimento: ");
    scanf("%d", &ano_nascimento);

    printf("Digite o ano atual: ");
    scanf("%d", &ano_atual);

    // Calcula a idade atual
    idade = ano_atual - ano_nascimento;

    // Calcula quantos anos terá em 2028
    idade_2028 = 2028 - ano_nascimento;

    printf("\nIdade atual: %d anos", idade);
    printf("\nIdade em 2028: %d anos\n", idade_2028);

    return 0;
}
