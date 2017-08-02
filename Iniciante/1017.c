#include <stdio.h>

int main() {

    double temp_horas, vel_media, qtde_comb;

    scanf("%lf %lf", &temp_horas, &vel_media);
    qtde_comb = vel_media*temp_horas/12;

    printf("%.3lf\n", qtde_comb);

    return 0;
}
