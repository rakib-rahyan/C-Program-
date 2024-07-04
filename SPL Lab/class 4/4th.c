#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n],i,sum=0;
    for(i=0; i<n; i++)
    {
        scanf("%d",&arr[i]);
        sum=sum+arr[i];
    }
    printf("Array: ");
    for(i=0; i<n; i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\nSum: %d",sum);
    return 0;
}
