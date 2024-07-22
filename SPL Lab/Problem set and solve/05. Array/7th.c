#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n],b;
    for(int i; i<n; i++)
    {
        scanf("%d",&a[i]);
    }
    for(int i; i<n/n; i++)
    {
        b=a[i];
        a[i]=a[n-1-i];
        a[n-1-i]=b;
    }
    for(int i; i<n; i++)
    {
        printf("%d ",a[i]);
    }
}
