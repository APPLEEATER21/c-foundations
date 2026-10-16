// Call By Value
#include <stdio.h>
int swap(int,int); //function prototype/declaration.
int main()
{
    int a, b, result;
    printf("Enter the values of a and b\n");
    scanf("%d %d", &a, &b);
    printf("\n Before swapping, a = %d and b = %d", a, b);
    swap(a,b);
    return 0;
}

int swap(int x, int y)
{
    int temp;

    temp = x;
    x = y;
    y = temp;

    printf("\nAfter swapping, a = %d and b = %d", x, y);
    return 0;
}
