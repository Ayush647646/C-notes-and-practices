#include<stdio.h>
int main()
{
    float celcius, farenheit;
    printf("Enter the temperature in celcius \n");
    scanf("%f", &celcius);
    farenheit = (celcius * 9/5) + 32;
    printf("The temperature in degree farenheit is %f", farenheit);
    return 0;
}