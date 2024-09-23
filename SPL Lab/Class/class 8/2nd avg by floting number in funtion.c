// this program for inter 3 integer number but sum is odd to avage output is flot
#include<stdio.h>
float avg(int a, int b, int d)
{
    float c;
    // if you can output is float number then you should be divided by float number on integer numbers
    c=(a+b+d)/3.0;
    /* or
    c=(a+b+d)/(float)3.0;
    */
    return c;
}
int main()
{
    int a,b,d;
    printf("Enter 3 integer number: ");
    scanf("%d %d %d",&a, &b,&d);
    float res;
    res= avg(a,b,d);
    printf("Result is: %f",res);
    return 0;
}

