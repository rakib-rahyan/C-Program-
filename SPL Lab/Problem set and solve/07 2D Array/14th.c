/*WAP that will take (m x n) positive integer inputs into a matrix of dimension m x n. Now
replace all the duplicate integers by -1 in that matrix. Finally display it.
*/
#include<stdio.h>
int main()
{
    printf("Uncomplite program");
    int n,m, flag=0;
    printf("Enter N and M for n*m index in array: ");
    scanf("%d %d",&n,&m);
    int a[n][m];
    printf("Enter %d element for this array: ",n*m);
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++){
            for(int k=i; k<n; k++){
                for(int l=j; j<m; j++){
                    if(i!=j)
                    if(a[i][j]==a[k][l]){
                        a[k][l]=-1;
                    }
                }
            }
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
}
