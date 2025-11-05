#include <stdio.h>
int main() {
     
      float nota1;
      float nota2;
      float nota3;
      float media;

    printf("Digite o primeiro nota: ");
    scanf("%f", &nota1);

    printf("Digite o segundo nota: ");
    scanf("%f", &nota2);

    printf("Digite o terceira nota: ");
    scanf("%f", &nota3);

    media = nota1  + nota2 + nota3*3;

    printf("A meida do aluno é: %.2f\n", media);

    return 0;

}