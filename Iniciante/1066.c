#include <stdio.h>

int main(){

  int i, num, cont_par = 0, cont_impar = 0, cont_pos = 0, cont_neg = 0;

  for(i = 0; i < 5; i++){
    scanf("%d", &num);
    if(num >= 0){
      if(num != 0)
        cont_pos++;
      if(num % 2 == 0)
        cont_par++;
      else
        cont_impar++;
    }else{
      if(num != 0)
        cont_neg++;
      if(num % 2 == 0)
        cont_par++;
      else
        cont_impar++;
    }
  }

  printf("%d valor(es) par(es)\n", cont_par);
  printf("%d valor(es) impar(es)\n", cont_impar);
  printf("%d valor(es) positivo(s)\n", cont_pos);
  printf("%d valor(es) negativo(s)\n", cont_neg);

  return 0;
}
