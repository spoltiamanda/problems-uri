#include <stdio.h>

int main(){

  float salario, novo_salario, reajuste_ganho;
  int reajuste;

  scanf("%f", &salario);

  if(salario <= 400.00){
    reajuste_ganho = salario * 0.15;
    novo_salario = salario + reajuste_ganho;
    reajuste = 15;
  }else if (salario > 400.00 && salario <= 800.00){
    reajuste_ganho = salario * 0.12;
    novo_salario = salario + reajuste_ganho;
    reajuste = 12;
  }else if(salario > 800.00 && salario <= 1200.00){
    reajuste_ganho = salario * 0.1;
    novo_salario = salario + reajuste_ganho;
    reajuste = 10;
  }else if(salario > 1200.00 && salario <= 2000.00){
    reajuste_ganho = salario * 0.07;
    novo_salario = salario + reajuste_ganho;
    reajuste = 7;
  }else{
    reajuste_ganho = salario * 0.04;
    novo_salario = salario + reajuste_ganho;
    reajuste = 4;
  }

  printf("Novo Salario: %.2f\n", novo_salario);
  printf("Reajuste ganho: %.2f\n", reajuste_ganho);
  printf("Em percentual: %d %\n", reajuste);
  return 0;
}
