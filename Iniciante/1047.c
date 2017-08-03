#include <stdio.h>

int main(){

  int h_inicio, h_final, m_inicio, m_final, inicio, final, dura;

  scanf("%d %d %d %d", &h_inicio, &m_inicio, &h_final, &m_final);

  inicio = h_inicio * 60 + m_inicio;
  final = h_final * 60 + m_final;

  if(h_inicio <= h_final){
    dura = final - inicio;
    if(dura == 0){
          printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", 24, dura%60);
    }
    else{
      printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", (dura - dura%60)/60, dura%60);
    }
  }else{
    dura = (24 * 60 - inicio ) + final;
    printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", (dura - dura%60)/60, dura%60);
  }
  return 0;
}
