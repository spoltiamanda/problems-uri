#include <stdio.h>

int main(){

  int i, num, cont = 0;

  for(i = 0; i < 5; i++){
    scanf("%d", &num);
    if(num % 2 == 0)
      cont++;
  }

  printf("%d valores pares\n", cont);

  return 0;
}
