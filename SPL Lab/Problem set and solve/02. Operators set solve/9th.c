#include<stdio.h>
int main()
{
    int a, b ,c , X,Y,Z;
    printf("Input integer a, b,c ");

    scanf("%d%d%d",&a,&b,&c);
    X=a-b/3+c*2-1;
    Y=a-(b/(3+c)*2)-1;
    Z=a-((b/3)+c*2)-1;
    printf("X = a - b / 3 + c * 2 - 1 =%d\n",X);
    printf("Y = a - ( b / ( 3 + c ) * 2) -1=%d\n",Y);
    printf("Z = a - ( ( b / 3) + c * 2) - 1=%d\n",Z);
    return 0;
}
