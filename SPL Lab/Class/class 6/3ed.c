//Printing Y using nested loop
#include<stdio.h>
int main()
{
    int n,i,j;
    printf("Enter even N size for this pattern: ");
    scanf("%d",&n);
    for(i=1; i<=n; i++)
    {
        for(j=1;j<=n; j++)
        {
            if(i+j==n || (i==j && i<=n/2)){
                printf("*");
            }
            else printf(" ");
        }
        printf("\n");
    }
}
