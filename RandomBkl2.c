#define __USE_MINGW_ANSI_STDIO 1
#include <stdio.h>

int main(){
    float var1 = 3.14159265359f;
    double var2 = 3.14159265359;
    long double var3 = 3.14159265359646783894L;
    printf("%zu\n", sizeof(float));
    printf("%zu\n", sizeof(double));
    printf("%zu\n", sizeof(long double));
    printf("%.12f\n", var1);
    printf("%.12f\n", var2);
    printf("%.35Lf\n", var3);
    return 0;
}