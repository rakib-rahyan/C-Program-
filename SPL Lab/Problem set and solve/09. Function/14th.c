#include<stdio.h>
void FunEvenArray(int n, int b[]);
void FunOddArray(int n, int b[]);
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
    FunEvenArray(n,a);
    printf("\n");
    FunOddArray(n,a);
}
FunEvenArray(int n, int b[])
{
    printf("Even number in array: ");
    for(int i=0; i<n; i++)
    {
        if(b[i]%2==0)
        {
            printf("%d ",b[i]);
        }
    }
}
FunOddArray(int n, int b[])
{
    printf("Even number in array: ");
    for(int i=0; i<n; i++)
    {
        if(b[i]%2==1)
        {
            printf("%d ",b[i]);
        }
    }
}
