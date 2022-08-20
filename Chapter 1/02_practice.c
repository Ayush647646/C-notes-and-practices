#include<stdio.h>
int main()
{
    float radius,height, area_of_a_circle, volume_of_a_cyllinder;
    printf("Enter the radius of the circle \n");
    scanf("%f",&radius);
    area_of_a_circle= 3.14*radius*radius;
    printf("The area of the circle is %f \n", area_of_a_circle);
    printf("Enter the height of the rectangle \n");
    scanf("%f", &height);
    volume_of_a_cyllinder= area_of_a_circle*height;
    printf("The volume of the cyllinder is %f \n", volume_of_a_cyllinder);
    return 0;
}