#include <stdio.h>

int main(){

  int x = 1, i;

  while (x != 0) {
    scanf("%d", &x);
    if(x != 0){
      for(i = 1; i < x; i++){
        printf("%d ", i);
      }
      printf("%d\n", x);
    }
  }
  return 0;
}
