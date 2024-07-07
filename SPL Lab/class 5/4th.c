//2D array
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
      printf("Enter your column number you want to sum: ");
      scanf("%d",&column);
       for(j=0; j<n; j++)
    {
        for(i=0; i<n; i++)
        {
            if(column==j){
                  sum=sum+a[i][j];
            }
        }
    }
    printf("sum of column is %d",sum);

    return 0;
}

