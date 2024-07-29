#include<stdio.h>
void main()
{
    int n,sum1=0, sum=0;
    printf("Enter your N for column and row: ");
    scanf("%d",&n);
    int i, j, data[n][n];
    for(i=0; i<n; i++)
    {
        for(j=0; j<n; j++)
        {
            if(j==n-1 || i==n-1)
            {
                data[i][j]=0;
            }
            else
            {
                scanf("%d",&data[i][j]);
            }
        }
    }
    for(i=0; i<n; i++)
    {
        for(j=0; j<n; j++)
        {
            if(j==n-1){
                data[i][j]=sum;
                sum=0;
            }
            else{
                sum+=data[i][j];
           }
        }
    }
    for(j=0; j<n; j++)
    {
        for(i=0; i<n; i++)
        {
            if(i==n){
                data[i][j]=sum;
                sum=0;
            }
            else{
                sum+=data[i][j];
           }
        }
    }
    printf("Your output: \n");
    for(i=0; i<n; i++)
    {
        for(j=0; j<n; j++)
        {
            printf("%d ",data[i][j]);
        }
        printf("\n");
    }
}
