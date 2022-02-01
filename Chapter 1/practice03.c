#include<stdio.h>
int main()
{
    // Practice Sheet Question No. 3
    float celcius;
    printf("What is the temperature in Celcius?\n");
    scanf("f", &celcius);
    float far = (celcius*9/5) + 32;
    printf("Celcius into Farenheit is %f",far);
    return 0;
}