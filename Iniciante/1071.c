#include <stdio.h>

int main(){

  int x, y, soma = 0;

  scanf("%d %d", &x, &y);

  if( x == y)
    printf("0\n");
  else if (x < y){
    for(x = x + 1; x < y; x++){
      if(x % 2 == 1 || x % 2 == -1)
        soma+= x;
    }
  }
  else if (x > y){
    for(y = y + 1; y < x; y++){
      if(y % 2 == 1 || y % 2 == -1)
        soma+=y;
    }
  }

  printf("%d\n", soma);

  return 0;
}
