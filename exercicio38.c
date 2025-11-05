#include <stdio.h>

int main() {
    int total_eleitores, votos1, votos2, votos_nulos;
    float perc1, perc2, perc_nulos;

    printf("Digite o total de eleitores: ");
    scanf("%d", &total_eleitores);

    printf("Digite o numero de votos do primeiro candidato: ");
    scanf("%d", &votos1);

    printf("Digite o numero de votos do segundo candidato: ");
    scanf("%d", &votos2);

    votos_nulos = total_eleitores - (votos1 + votos2);

    perc1 = (votos1 * 100.0) / total_eleitores;
    perc2 = (votos2 * 100.0) / total_eleitores;
    perc_nulos = (votos_nulos * 100.0) / total_eleitores;

    printf("\nPercentual de votos do 1º candidato: %.2f%%", perc1);
    printf("\nPercentual de votos do 2º candidato: %.2f%%", perc2);
    printf("\nPercentual de votos nulos: %.2f%%\n", perc_nulos);

    return 0;
}
