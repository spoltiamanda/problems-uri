#include <stdio.h>

int main(){

  int x, i, cont = 1;

  scanf("%d", &x);

  i = 1;

  while(i <= 6){
        if(((x+cont)%2) != 0){
          printf("%d\n", (x+cont));
          i++;
        }
        cont++;
  }

  return 0;
}
