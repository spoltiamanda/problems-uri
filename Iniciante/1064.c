#include <stdio.h>

int main(){

  int cont = 0, i;
  float num, soma = 0;

  for(i = 0; i < 6; i++){
    scanf("%f", &num);
    if(num >=0){
        cont++;
        soma+= num;
    }
  }

  printf("%d valores positivos\n", cont);
  printf("%.1f\n", soma/cont);
  return 0;
}
