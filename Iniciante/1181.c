#include <stdio.h>

int main(){

  int linha, i, j;
  double media, matriz[12][12], soma = 0.0;
  char op[2];

  scanf("%d", &linha);
  scanf("%c", &op);

  for(i = 0; i < 12; i++){
    for(j = 0; j < 12; j++){
      scanf("%lf", &matriz[i][j]);
      if(i == linha)
        soma = soma + matriz[i][j];
    }
  }
  if(op[0] == 'S'){
    printf("%.1lf\n", soma);
  }
  else if(op[0] == 'M'){
    media = soma/12.0;
    printf("%.1lf\n", media);
  }

  return 0;
}
