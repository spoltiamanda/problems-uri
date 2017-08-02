#include <stdio.h>

int main() {

    int num, hrs_trab;
    float sal_hora, sal_total;

    scanf("%d %d %f", &num, &hrs_trab, &sal_hora);

    sal_total = hrs_trab * sal_hora;

    printf("NUMBER = %d\n", num);
    printf("SALARY = U$ %.2f\n", sal_total);

    return 0;
}
