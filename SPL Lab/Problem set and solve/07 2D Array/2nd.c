/*WAP that will take 9 integers into a 3 by 3 array (2D) and show them as traditional matrix
view.*/
#include<stdio.h>
int main()
{
    int n, m;
    printf("Enter N for row wise in array: ");
    scanf("%d",&n);
    printf("Enter M for colume wise in array: ");
    scanf("%d",&m);
    int a[n][m];
    printf("Enter %d element for this array: ",n*m);

    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("\nRow-wise: ");
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            printf("%d ",a[i][j]);
        }
    }
    printf("\nColumn-wise: ");
    for(int i=0; i<m; i++)
    {
        for(int j=0; j<n; j++)
        {
            printf("%d ",a[j][i]);
        }
    }


}
