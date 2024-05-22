// find area of a triangle
#include<stdio.h>
int main()
{
    float base, height, area;
    printf("Enter base of the triangle: ");
    scanf("%f",&base);
    printf("Enter height of the triangle: ");
    scanf("%f",&height);

    area=0.5*base*height;

    printf("Area of the triangle = %0.2f sq.unit\n", area);

    main(); //if you want to many times run program than write main()
    return 0;
}
