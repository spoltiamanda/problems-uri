#include <stdio.h>

int main(){

  int dia_i, h_i, m_i, s_i, dia_f, h_f, m_f, s_f, segundos_in, segundos_fi, dur;
  int dias, horas, minutos, segundos;
  char a[4], b[2], c[2];
  scanf("%s%d", &a,&dia_i);
  scanf("%d%s%d%s%d", &h_i,&b,&m_i,&c,&s_i);
  scanf("%s%d", &a,&dia_f);
  scanf("%d%s%d%s%d", &h_f,&b,&m_f,&c,&s_f);

  segundos_in = s_i + 3600*h_i + 60*m_i + dia_i*24*3600;
  segundos_fi = s_f + 3600*h_f + 60*m_f + dia_f*24*3600;
  dur = segundos_fi - segundos_in;
  dias =
  printf("%d dia(s)\n", dur/(24*3600));
  dur = dur%(24*3600);
  printf("%d hora(s)\n", dur/3600);
  dur = dur%3600;
  printf("%d minuto(s)\n", dur/60);
  dur = dur%60;
  printf("%d segundo(s)\n", dur);

  return 0;
}
