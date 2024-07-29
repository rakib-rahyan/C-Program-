//write the output of the following code. if the user inputs are 1,2,3,4,5,6,7,8,9,... ... sequentially.
#include<stdio.h>
void main()
{
    int n;
    printf("Enter your N for column and row: ");
    scanf("%d",&n);
    int i, j, data[n][n];
    for(i=0; i<n; i++)
    {
        for(j=i; j<n; j++)
        {
            data[i][j]=0;
        }
        for(j=i+1; j<n; j++)
        {
            scanf("%d ",&data[i][j]);
        }
    }
    printf("Your output: \n");
    for(i=0; i<n; i++)
    {
        for(j=i; j<n; j++)
        {
            printf("%d ",data[i][j]);
        }
        printf("\n");
    }
}
