#include <stdio.h>

int reverseNumber(int num) {
    int rev = 0;
    while (num != 0) {
        rev = rev * 10 + num % 10;
        num /= 10;
    }
    return rev;
}

int main() {
    int num;
    printf("Input any number: ");
    scanf("%d", &num);
    printf("Reverse of the number %d is %d\n", num, reverseNumber(num));
    return 0;
}
