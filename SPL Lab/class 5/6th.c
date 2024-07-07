//2D array
//major, minor diagonal
#include<stdio.h>
int main()
{
    int n,m,sum=0,column=0;
    printf("Enter square matrix size: ");
    scanf("%d",&n);
    int a[n][n], i,j;
    printf("Enter matrix elements: ");
    for(i=0; i<n; i++)
    {
        for(j=0; j<n; j++)
        {
            scanf("%d",&a[i][j]);
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
    printf("Major diagonal: ");
       for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            if(i+j==n-1){
                  printf("%d ",a[i][j]);
            }

        }
    }
    //printf("sum of column is %d",sum);

    return 0;
}


