#include <stdio.h>
int add(int,int); //function prototype or declaration
int main()
{
    int a, b, result;
    printf("Enter the valuse of a and b \n");
    scanf(%d %d, &a, &b);
    result = add(a,b)  //function calling
    printf("%d is the sum of %d and %d", result, a, b);

}
  int add(x,y) //function definition
  {
      int sum;
      sum = x + y;
      return sum;
  }                                                                                                      i

