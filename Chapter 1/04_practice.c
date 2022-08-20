#include<stdio.h>
int main()
{
    float principal, rate, time, simple_interst;
    printf("Enter the principal amount \n");
    scanf("%f", &principal);
    printf("Enter the rate at which loan was given \n");
    scanf("%f", &rate);
    printf("Enter the time for which the loan was given \n");
    scanf("%f", &time);
    simple_interst= (principal*rate*time)/100;
    printf("The calculated simple interst is given by %f \n", simple_interst);
    return 0;
}