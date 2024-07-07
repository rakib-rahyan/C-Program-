//2D array
#include<stdio.h>
int main()
{
    int n,m,sum=0,row=0;
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
      printf("Enter your row number you want to sum: ");
      scanf("%d",&row);
       for(i=0; i<n; i++)
    {
        for(j=0; j<n; j++)
        {
            if(row==i){
                  sum=sum+a[i][j];
            }
        }
    }
    printf("sum of row is %d",sum);

    return 0;
}

