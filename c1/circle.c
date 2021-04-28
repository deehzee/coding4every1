/**
 * Circle and Area
 * Debajyoti Nandi
 * 2021-04-28
 **/

#include <stdio.h>

#define PI 3.14159

int main(void)
{
    double area=0.0, radius=0.0;

    printf("Enter radius: ");
    scanf("%lf", &radius);
    area = PI * radius * radius;
    printf("Area of a circle of radius %lf meters is %lf sq meters\n",
           radius, area);
           
    return 0;
}