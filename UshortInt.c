#include <stdio.h>
#include <limits.h>
int main(){
    short unsigned var1 = 0;
    short unsigned var2 = USHRT_MAX;
    printf("The range of an unsigned short integer is from %u to %u.\n", var1, var2);
    return 0;
}