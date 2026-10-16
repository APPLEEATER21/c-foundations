#include <stdio.h>
int Addition(int var1, int var2)
{
    int sum;
    sum = var1 + var2;
    return sum;
}
int main()
{
   int var1, var2;

   printf("Enter first varialble: ");
   scanf("%d", &var1);

   printf("\nEnter second varialble: ");
   scanf("%d", &var2);

   printf("\nThe sum of %d and %d is: %d.", var1, var2, Addition(var1, var2));
   return 0;

}
