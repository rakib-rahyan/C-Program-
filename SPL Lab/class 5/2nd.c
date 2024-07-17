//2D array
//input 2 square shape array and print the 2 array
//last print 1st array - 2nd array
#include<stdio.h>
int main()
{
    int n;
    printf("Enter square matrix size: ");
    scanf("%d",&n);
    int a[n][n], i,j;
    int b[n][n];
    printf("Enter matrix elements for A: ");
    for(i=0; i<n; i++)
    {
        for(j=0; j<n; j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("Enter matrix elements for B: ");
    for(i=0; i<n; i++)
    {
        for(j=0; j<n; j++)
        {
            scanf("%d",&b[i][j]);
        }
    }
    printf("Matrix a:\n");
    for(i=0; i<n; i++)
    {
        for(j=0; j<n; j++)
        {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
    printf("Matrix b:\n");
    for(i=0; i<n; i++)
    {
        for(j=0; j<n; j++)
        {
            printf("%d ",b[i][j]);
        }
        printf("\n");
    }
    printf("Matrix a-b\n");
    for(i=0; i<n; i++)
    {
        for(j=0; j<n; j++)
        {
            printf("%d ",a[i][j]-b[i][j]);
        }
        printf("\n");
    }
    return 0;
}


