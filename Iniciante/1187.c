#include <stdio.h>

int main(){

  int i, j, aux = 1, aux_2 = 10;
  double media, matriz[12][12], soma = 0.0;
  char op[2];

  scanf("%s", &op);

  for(i = 0; i < 12; i++){
    for(j = 0; j < 12; j++)
      scanf("%lf", &matriz[i][j]);
  }
//Aqui
  for(i = 0; i < 5; i++){
    for(j = aux; j <= aux_2; j++){
      soma = soma + matriz[i][j];
    }
    aux++;
    aux_2--;
  }
//ate aqui

  if(op[0] == 'S'){
    printf("%.1lf\n", soma);
  }
  else if(op[0] == 'M'){
    media = soma/30.0;
    printf("%.1lf\n", media);
  }

  return 0;
}
