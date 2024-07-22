/*WAP that will take (m x n) integer inputs into a matrix of dimension m x n. Now just
simply add all the integers in that matrix and show the result.
*/
#include<stdio.h>
int main()
{
    int n,m, sum;
    printf("Enter N and M for n*m index in array: ");
    scanf("%d %d",&n,&m);
    int a[n][m];
    printf("Enter %d element for this array: ",n*m);
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            scanf("%d",&a[i][j]);
            sum+=a[i][j];
        }
    }
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            printf("%3d",a[i][j]);
        }
        printf("\n");
    }
    printf("Sum: %d",sum);
}
