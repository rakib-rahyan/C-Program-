#include<stdio.h>
int main()
{
    float a, b, x;
    printf("Input 2 numbers (a,b): ");
    scanf("%f %f",&a, &b);

    x=(3.31*a*a+2.01*b*b*b)/(7.16*b*b+2.01*a*a*a);

    printf("Output: %f",x);

    return 0;
}
