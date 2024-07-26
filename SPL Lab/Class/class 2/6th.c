//serial n+2, n+2 =?
#include<stdio.h>
int main()
{
    int i, series=3,n;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        printf("%d ",series);
        series=series+2;
    }
}

