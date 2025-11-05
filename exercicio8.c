#include <stdio.h>

int main()
{
      float sl_minimo;
      float sl_funcionario;  
      
      //salarios recebidos//

      float salarios;

      printf("Digite o salario do funcionario: ");
      scanf("%f", &sl_funcionario);

      printf("Digite valor do salario minimo virgente");
      scanf("%f", &sl_minimo);

      salarios = sl_funcionario/sl_minimo;


      printf("o funcionario recebe cerca de %.f", salarios);
     







}