/*WAP that will take (n x n) integer inputs into a square matrix of dimension n. Now
determine whether the matrix is symmetric or not.
Reference: http://en.wikipedia.org/wiki/Symmetric_matrix*/
#include<stdio.h>
int main()
{
    int n, flag=0;
    printf("Enter N for n*n index in array: ");
    scanf("%d",&n);
    int a[n][n];
    printf("Enter %d element for this array: ",n*n);
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            if(i!=j){
                if(a[i][j]!=a[j][i]){
                    flag= 1;
                    }
                }
            }
        }
    if(flag==0){
        printf("Yes");
    }
    else{
        printf("No");
    }
}
