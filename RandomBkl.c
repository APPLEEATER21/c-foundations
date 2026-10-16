#include <stdio.h>
int reverseChar(int var1){
    int var2 = 0;
    while (var1 != 0){
        var2 = var2 * 10 + var1 % 10;
        var1 = var1 / 10;
    }
    return var2;
} 
int main() {
    int var1;
    printf("Enter an integer: ");
    scanf("%d", &var1);
    int reversed = reverseChar(var1);
    printf("Reversed integer: %d\n", reversed);
    return 0;
}