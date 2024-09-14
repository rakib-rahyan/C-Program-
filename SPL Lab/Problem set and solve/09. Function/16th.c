#include<stdio.h>
void MultiElements(int n,int b[]);
int main()
{
    int n;
    printf("Enter integer number for memory: ");
    scanf("%d",&n);
    printf("Enter your numbers: ");
    int a[n];
    for(int i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }
    MultiElements(n,a);
    return 0;
}
MultiElements(int n, int b[])
{
    int p;
    printf("Enter multipli elements: ");
    scanf("%d",&p);
    printf("Multipli by %d of array elements: ");
    for(int i=0; i<n; i++)
    {
        printf("%d ",b[i]*=p);
    }
}
