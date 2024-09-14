#include<stdio.h>
void FunSwap(int x, int y);
int main()
{
    int a,b;
    printf("Enter X, Y for swap: ");
    scanf("%d%d",&a,&b);
    FunSwap(a,b);
    return 0;
}
FunSwap(int x, int y)
{
    int tamp = y;
    y=x;
    x=tamp;
    printf("X= %d \nY= %d",x,y);
}
