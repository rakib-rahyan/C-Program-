// Find diameter. circumference and area of the circle.
#include<stdio.h>
int main()
{
    float radius; //for store
    printf("Enter radius: ");
    scanf("%f",&radius); //for input

    float Diameter, Circumference, Area;
    // for calculation
    Diameter= 2*radius;
    Circumference= 2*3.1416*radius;
    Area= 3.1416*radius*radius;
    //for print
    printf("Diameter: %f\n",Diameter);
    printf("Circumference: %f\n",Circumference);
    printf("Area: %f\n",Area);

    return 0;

}
