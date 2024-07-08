#include<stdio.h>
int main()
{
    int n, l=1;
    printf("Enter N integer number: ");
    scanf("%d",&n);
    for(int i=0; i<n; i++)
    {
        for(int j=i; j<n-1; j++)
        {
            printf(".");
        }
        for(int k=0; k<l; k++)
        {
            printf("*");
        }
        printf("\n");
        l+=2;
    }
    l=l-4;
    for(int i=0; i<n-1; i++)
    {
        for(int j=0; j<=i; j++)
        {
            printf(".");
        }
        for(int k=0; k<l; k++)
        {
            printf("*");
        }
        printf("\n");
        l-=2;
    }
}

