#include <stdio.h>

int main(void) {
    float var1 = 3.14159265359f;
    double var2 = 3.14159265359;
    long double var3 = 3.14159265359375783778487375883L;

    printf("%zu\n", sizeof(float));
    printf("%zu\n", sizeof(double));
    printf("%zu\n", sizeof(long double));

    printf("%.2f\n", var1);
    printf("%.12f\n", var2);
    printf("%.36Lf\n", var3);

    return 0;
}
