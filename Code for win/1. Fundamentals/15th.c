
// Find area of an equilateral
#include<stdio.h>
#include<math.h>
int main()
{
    float side, area;
    printf("Enter side of the equilateral triangle: ");
    scanf("%f",&side);

    area= (sqrt(3)/4)*pow(side,2);

    printf("Area of equilateral triangle = %0.2f sq. units\n", area);

    main(); //if you want to many times run program than write main()
    return 0;
}
