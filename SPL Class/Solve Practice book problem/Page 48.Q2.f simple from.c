//page 48.Q.2.f in simple form for n*n array
#include<stdio.h>
void main()
{
    int n,sum1=0, sum=0;
    printf("Enter N for column and row: ");
    scanf("%d",&n);
    printf("Enter %d element: ",n*n);
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
                data[j][i]=sum1;
                sum1=0;
            }
            else{
                sum+=data[i][j];
                sum1+=data[j][i];
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
