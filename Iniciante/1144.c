#include <stdio.h>

int main(){

  int entr, i, a, b, c, d;

  scanf("%d", &entr);

  for(i = 1; i <= entr; i++){
    a = i * i;
    b = a * i;
    printf("%d %d %d\n", i, a, b);
    c = a + 1;
    d = b + 1;
    printf("%d %d %d\n", i, c, d);
  }
  return 0;
}
