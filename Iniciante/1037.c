#include <stdio.h>
 
int main() {
     double valor = 0.0f;

     scanf("%lf", &valor);

     if(valor >= 0 && valor <= 25)
        printf("Intervalo [0,25]");
     else
        if(valor > 25 && valor <= 50)
            printf("Intervalo (25,50]");
        else
            if(valor > 50 && valor <= 75)
                printf("Intervalo (50,75]");
            else
                if(valor > 75 && valor <= 100)
                    printf("Intervalo (75,100]");
                else
                    printf("Fora de intervalo");

    printf("\n");
    return 0;
}