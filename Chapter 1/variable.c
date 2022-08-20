#include <stdio.h>
int main()
{
    int a = 5;
    // int a= 8.5 is not a fair method to execute because 8.5 is not an integer
    float b = 8.5;
    char c = 'A';
    printf("The value of a and b is %d %f \n", a, b);
    printf("the value of c is %c \n", c);
    printf("the sum of a and b is %f", a+b);
    return 0;
}