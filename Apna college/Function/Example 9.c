#include<stdio.h>
float squareArea(float side);
float circleArea(float red, float r);
float rectangleArea(float a, float b);

int main()
{
    float a=5.0;
    float b=10.0;

    printf("area is: %f", rectangleArea(a,b));
    return 0;
}
float squareArea(float side)
{
    return side*side;
}
float circleArea(float red, float r)
{
    return 3.14 * red *r;
}
float rectangleArea(float a, float b)
{
    return a*b;
}
