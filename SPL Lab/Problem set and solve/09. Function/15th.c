#include<stdio.h>
int MinimumValue(int n, int b[],int q);
int main()
{
    int n,q;
    printf("Enter integer number for memory: ");
    scanf("%d",&n);
    printf("Enter your numbers: ");
    int a[n];
    for(int i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
        q=a[i];
    }
    printf("Minimum Value: %d",MinimumValue(n,a,q));
    return 0;
}
MinimumValue(int n, int b[],int q)
{
    for(int i=0; i<n; i++)
    {
        if(q>b[i])
        {
            q=b[i];
        }
    }
    return q;
}
