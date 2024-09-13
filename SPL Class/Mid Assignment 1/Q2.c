#include <stdio.h>

int main()
{
    int a= 492/7;
    int b= 492%7;
    float c= (float)492/7;
    float d= (float)(492/7);
    int e= (a-b)<0&&c;

    printf("%d  %d %f %f %d",a,b,c,d,e);
}
