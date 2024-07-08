#include<stdio.h>
int main()
{
    int n, m=1;
    printf("Enter N integer number: ");
    scanf("%d",&n);
    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=n-i; j++)
        {
            printf(".");
        }
        for(int k=1; k<=m; k++)
        {
            printf("*");
        }
        printf("\n");
        m+=2;
    }
    n--;
    m-=4;
    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=i; j++)
        {
            printf(".");
        }
        for(int k=1; k<=m; k++)
        {
            printf("*");
        }
        printf("\n");
        m-=2;
    }
}
