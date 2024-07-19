/*
n=3
3
32
321
*/
#include<stdio.h>
int main()
{
    int n,i,j,k;
    printf("Enter your N number: ");
    scanf("%d",&n);
    for(i=1; i<=n; i++)
    {
        k=n;
        for(j=1; j<=i; j++)
        {
            printf("%d",k);
            k--;
        }
        printf("\n");
    }
}
