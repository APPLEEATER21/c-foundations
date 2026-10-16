#include <stdio.h>

void checkArmstrong(int num) {
    int originalNum = num, remainder, result = 0;

    while (originalNum != 0) {
        remainder = originalNum % 10;
        result += remainder * remainder * remainder;
        originalNum /= 10;
    }

    if (result == num)
        printf("The number %d is an Armstrong number.\n", num);
    else
        printf("The number %d is not an Armstrong number.\n", num);
}

int main() {
    int num;
    printf("Input any number: ");
    scanf("%d", &num);
    checkArmstrong(num);
    return 0;
}

