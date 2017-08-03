#include <stdio.h>

int main(){

  int h_inicio, h_final, horas;

  scanf("%d %d", &h_inicio, &h_final);

  if(h_inicio >= h_final){
    horas = 24 - h_inicio + h_final;
  }else{
    horas = h_final - h_inicio;
  }
  printf("O JOGO DUROU %d HORA(S)\n", horas);

  return 0;
}
