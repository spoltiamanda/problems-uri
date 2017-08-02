#include <stdio.h>

int main(){

  float salario;

  scanf("%f", &salario);

  if(salario >= 0 && salario<= 2000)
    printf("Isento\n");
  else if (salario > 2000 && salario <= 3000){
    salario = (salario - 2000) * 0.08;
    printf("R$ %.2f\n", salario);
  }
  else if (salario > 3000 && salario <= 4500){
    salario = (salario - 3000) * 0.18 + 80;
    printf("R$ %.2f\n", salario);
  }
  else{
    salario = (salario - 4500) * 0.28 + 80 + 270;
    printf("R$ %.2f\n", salario);
  }
  return 0;
}
