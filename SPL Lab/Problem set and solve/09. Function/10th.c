#include<stdio.h>
int CalPow(int n, int m);
int main()
{
    int x, y;
    scanf("%d%d",&x,&y);
    printf("%d to the power %d is %d",x,y,CalPow(x,y));
    return 0;
}

CalPow(int n, int m)
{
    int pow=1;
    for(int i=0; i<m ;i++){
        pow*=n;
    }
    return pow;
}



