#include <stdio.h>

int main(){

  int n, x, i, dentro = 0, fora = 0;

  scanf("%d", &n);
  for(i = 0; i < n; i++){
    scanf("%d", &x);
    if(x == 0)
      printf("NULL\n");
    else if(x % 2 == 0){
      printf("EVEN ");
      if(x > 0)
        printf("POSITIVE\n");
      else
        printf("NEGATIVE\n");
    }else if(x != 0){
      printf("ODD ");
      if(x > 0)
        printf("POSITIVE\n");
      else
        printf("NEGATIVE\n");
    }
  }

  return 0;
}
