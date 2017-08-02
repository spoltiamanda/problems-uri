#include <stdio.h>

int main() {

    float n1, n2, n3, n4, nota, exame;

    scanf("%f %f %f %f", &n1, &n2, &n3, &n4);
    nota = (n1*2 + n2*3 + n3*4 + n4)/10;
    printf("Media: %.1f\n", nota);

    if(nota > 7.0)
        printf("Aluno aprovado.\n");
    else if(nota < 5.0)
            printf("Aluno reprovado.\n");
        else{
            printf("Aluno em exame.\n");
            scanf("%f", &exame);
            printf("Nota do exame: %.1f\n", exame);
            nota = (nota + exame)/2;
            if(nota > 5)
                printf("Aluno aprovado.\n");
            else
                printf("Aluno reprovado.");
            printf("Media final: %.1f\n", nota);

        }

    return 0;
}
