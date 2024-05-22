//calculate area of a rectangle in C programming.
#include<stdio.h>
int main()
{
    int length, withd, area;
    printf("Enter rectangle lenght: ");
    scanf("%d",&length);
    printf("Enter rectangle withd: ");
    scanf("%d",&withd);

    area= length*withd;

    printf("Area of rectangle= %d sq.units",area);
    return 0;
}
