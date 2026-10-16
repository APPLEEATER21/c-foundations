#include <stdio.h>

long long expon(int base, int exp) {
    long long result = 1;
    for (int i = 0; i < exp; ++i) {
        result *= base;
    }
    return result;
}

int main() {
    int base, exp;
    printf("Input any number: base: ");
    scanf("%d", &base);
    printf("exponent: ");
    scanf("%d", &exp);
    printf("expon(%d,%d)=%lld\n", base, exp, expon(base, exp));
    return 0;
}
