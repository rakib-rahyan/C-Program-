#include<stdio.h>
void main()
{
    int n,m, sum=0;
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
    for(i=0; i<n; i++)
    {
        for(j=0; j<m; j++)
        {
            if(j==m-1){
                data[i][j]=sum;
                sum=0;
            }
            else{
                sum+=data[i][j];
           }
        }
    }
    for(int j=0; j<m; j++){
        for(int i=0; i<n; i++){
            if(i==n-1){
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
        for(j=0; j<m; j++)
        {
            printf("%5d ",data[i][j]);
        }
        printf("\n");
    }
}

