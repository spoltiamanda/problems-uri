#include <stdio.h>

int main(){

  int cont = 0, i;
  float num;

  for(i = 0; i < 6; i++){
    scanf("%f", &num);
    if(num >=0)
      cont++;
  }

  printf("%d valores positivos\n", cont);

  return 0;
}
