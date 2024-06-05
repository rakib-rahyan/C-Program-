// calculate the cirumference of a circle having radius r. (Area, A=2*Pi*r)
#include<stdio.h>
#define PI 3.1415

int main()
{
    double radius, circumference;

    printf("Enter the radius of the circle: ");
    scanf("%lf",&radius);

    circumference = 2*PI*radius;

    printf("The circumference of the circle is: %0.2lf\n",circumference);

    return 0;
}
