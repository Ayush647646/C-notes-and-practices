#include<stdio.h>
int main()
{
    // Practice Sheet Question No. 4
    float principal, rate, time, Simple_Interest;
    printf("What was the principal amount?\n");
    scanf("%f", &principal);
    printf("What was the rate of inerest?\n");
    scanf("%f", &rate);
    printf("What was the duration of loan?\n");
    scanf("%f", &time);
    Simple_Interest= (principal*rate*time)/100;
    printf("The value of Simple Intersest is %f", Simple_Interest);
    return 0;
}