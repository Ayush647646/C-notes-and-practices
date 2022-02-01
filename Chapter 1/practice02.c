#include<stdio.h>
int main()
{
    // Practice Sheet Question No. 2
    float pi= 3.14, radius;
    printf("what is the radius of the circle?\n");
    scanf("%f", &radius);
    printf("The Area of the circle is %f \n", pi*radius*radius);
    int height;
    printf("What is the Height of the required Cyllinder?\n");
    scanf("%f", &height);
    printf("The Volume of the Cyllinder is %f", pi*radius*radius*height);
    return 0;
}