#include<stdio.h>
int main()
{
    int n;
    printf("Enter you integer odd number for this pattern: ");
    scanf("%d",&n);
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            if(j==1 || i==n/2)
            {
                printf("*");
            }
            else printf(" ");
        }
        printf("\n");
    }
}
