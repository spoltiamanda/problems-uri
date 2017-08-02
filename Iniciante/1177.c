#include <stdio.h>

int main(){

  int t, n[1000], i, aux;

  scanf("%d", &t);

  for(i = 0, aux = 0; i < 1000; i++){
    printf("N[%d] = %d\n", i, aux);
    aux++;
    if(aux == t)
      aux = 0;
  }

  return 0;
}
