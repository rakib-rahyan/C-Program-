#include<stdio.h>
int main()
{
    int i=0, n, value=0;
    scanf("%d",&n);
    for(i=n-4;i<=n; i++)
    {
        value+=i*i;
        printf("%d",value);
        ++i;
        printf(" %d\n",i);
    }
}
