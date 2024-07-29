//Write the code to fill the array square as show
#include<stdio.h>
void main()
{
    int n;
    printf("Enter your N for column and row: ");
    scanf("%d",&n);
    int i, j, p=n, data[n][n];
    for(i=0; i<n; i++)
    {
        for(j=0; j<n; j++)
        {
            data[i][j]=0;
            if(i+j==n-1)
            {
                data[i][j]=p;
                p=data[i][j]*2;
            }
        }
    }
    printf("Your output: \n");
    for(i=0; i<n; i++)
    {
        for(j=0; j<n; j++)
        {
            printf("%d  ",data[i][j]);
        }
        printf("\n");
    }
}

