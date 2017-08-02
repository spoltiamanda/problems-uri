#include <stdio.h>
 
int main() {
    int n, horas, minutos, segundos;
    scanf("%d", &n);

// 1 hora = 3600 seg

    horas = n/3600;
    minutos = (n - horas * 3600)/60;
    segundos = (n - (horas * 3600 + minutos * 60));

    printf("%d:%d:%d\n", horas, minutos, segundos);
    
    return 0;
}