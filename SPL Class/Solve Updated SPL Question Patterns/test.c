#include<stdio.h>
int main()
{
    int n, l=1;
    printf("Enter N for this pattern: ");
    scanf("%d",&n);
    for(int i=0; i<n; i++)
    {
        for(int j=i; j<n-1; j++)printf(".");
        for(int j=0; j<=i; j++)
        {
            printf("%d",l);
            if(l==n)
            {
                l=1;
            }
            l++;
        }
        printf("\n");
    }
    return 0;
}


