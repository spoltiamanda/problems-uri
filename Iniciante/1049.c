#include <stdio.h>

int main() {

    char a[22], b[22], c[22];
    scanf("%s %s %s", &a, &b, &c);



    if(a[0] =='v'){
        if(b[0]=='a'){
            if(c[0]=='c')
                printf("aguia\n");
            else if(c[0]=='o')
                printf("pomba\n");
        }
        if(b[0]=='m'){
            if(c[0]=='o')
                printf("homem\n");
            if(c[0]=='h')
                printf("vaca\n");
        }
    }
    else if(a[0]=='i'){
        if(b[0]=='i'){
            if(c[2]=='m')
                printf("pulga\n");
            if(c[2]=='r')
                printf("lagarta\n");
        }
        if(b[0]=='a'){
            if(c[0]=='h')
                printf("sanguessuga\n");
            if(c[0]=='o')
                printf("minhoca\n");
        }
    }

    return 0;
}
