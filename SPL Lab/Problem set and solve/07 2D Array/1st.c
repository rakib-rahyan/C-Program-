/*WAP that will take 9 integers into a 3 by 3 array (2D) and show them as traditional matrix
view.*/
#include<stdio.h>
int main()
{
    int n;
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
    printf("The array is: ");
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
}
