/*WAP that will take n integers into an array A. Now sort them in ascending order within
that array. Finally show all elements of array A. */

// Uncompte program
#include<stdio.h>
int main()
{
    printf("Uncomplet program");
    int n, max=0, in=0;
    scanf("%d",&n);
    int a[n];
    for(int i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }
    for(int i=0; i<n; i++)
    {
        for(int j=i; j<n; j++)
        {
            if(max<=a[j])
            {
                max=a[j];
                in=j;
            }
        for(int j=in; j>0; j--)
        {
            a[j]=a[j-1];
        }
        a[0]=max;
        }
    }
    for(int i=0; i<n; i++)
    {
        printf("%d ",a[i]);
    }

}
