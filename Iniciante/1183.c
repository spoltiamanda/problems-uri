#include <stdio.h>

int main(){

  int i, j, aux = 1;
  double media, matriz[12][12], soma = 0.0;
  char op[2];

  scanf("%s", &op);

  for(i = 0; i < 12; i++){
    for(j = 0; j < 12; j++)
      scanf("%lf", &matriz[i][j]);
  }

  for(i = 0; i < 12; i++){
    for(j = aux; j < 12; j++){
      soma = soma + matriz[i][j];
    }
    aux++;
  }
  if(op[0] == 'S'){
    printf("%.1lf\n", soma);
  }
  else if(op[0] == 'M'){
    media = soma/66.0;
    printf("%.1lf\n", media);
  }

  return 0;
}
