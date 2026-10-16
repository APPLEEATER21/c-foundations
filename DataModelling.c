#include <stdio.h>

int main() {
    // 1. Correct array initialization syntax: use [] and {}
    int numbers[] = {10, 20, 30, 40, 50};
    int total = 0;
    int length = 5;

    // 2. Correct for loop syntax: use ; instead of ,
    for (int i = 0; i < length; i++) {
        total = total + numbers[i];
    }

    printf("Average: %.2f\n", (float)total / length);

    // 3. Add missing semicolon
    return 0;
}
