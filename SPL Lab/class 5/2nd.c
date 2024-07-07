//2D array
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
    printf("Enter matrix elements for b: ");
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


