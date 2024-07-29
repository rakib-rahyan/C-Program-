//Write the code to fill the array square as show
#include<stdio.h>
void main()
{
    int n, p=1;
    printf("Enter your N for column and row: ");
    scanf("%d",&n);
    int i, j, data[n][n];
    for(i=0; i<n; i++)
    {
        for(j=0; j<n; j++)
        {
            data[i][j]=p;
            p++;
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

