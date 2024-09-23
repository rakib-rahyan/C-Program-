//This function for input array element and output the array element in funciton.
#include<stdio.h>
void p(int a[][3],int n)
{
    for(int x=0; x<n; x++)
    {
        for(int y=0; y<3; y++)
        {
            printf("%d ",a[x][y]);
        }
        printf("\n");
    }
}
int main()
{
    int n, a[3][3];
    printf("Enter n for 2d array cloumesize: ")
    scanf("%d",&n);
    for(int x=0; x<n; x++)
    {
        for(int y=0; y<3; y++)
        {
            scanf("%d",&a[x][y]);
        }
    }
    p(a,n);
    return 0;
}

