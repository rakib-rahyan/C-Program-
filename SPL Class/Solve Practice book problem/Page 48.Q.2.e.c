/*The partially initialized array "table" can be viewed as a parimitive spreadsheet, in which the last
colum and bottom row ave been left blank. write the code to fill in this row and column with
the totals of each column, each row and the reand total.*/
#include<stdio.h>
void main()
{
    int n,m;
    printf("Enter N for row: ");
    scanf("%d",&n);
    printf("Enter M for column : ");
    scanf("%d",&m);
    int i, j, data[n][m];
    printf("Enter %d element: \n",(n-1)*(m-1));
    for(i=0; i<n; i++)
    {
        for(j=0; j<m; j++)
        {
            if(j==m-1 || i==n-1){
                data[i][j]=0;
            }
            else scanf("%d",&data[i][j]);
        }
    }
    printf("Your output: ");
    for(i=0; i<n; i++)
    {
        for(j=0; j<m; j++)
        {
            printf("%5d ",data[i][j]);
        }
        printf("\n");
    }
}


