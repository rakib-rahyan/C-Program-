#include<stdio.h>
int main()
{
    int n;
    printf("Enter you integer odd number for this pattern: ");
    scanf("%d",&n);
    for(int i=0; i<n*2-1; i++)
    {
        if(i<n)
        {
            for(int j=0; j<=i; j++)printf("*");
        }
        else for(int j=i; j<n*2-1; j++)printf("*");
        printf("\n");
    }
}
