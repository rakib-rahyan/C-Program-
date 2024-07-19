/*
   1
  22
 333
4444
*/
#include<stdio.h>
int main()
{
    int n,i,j,k;
    printf("Enter your N number: ");
    scanf("%d",&n);
    for(i=1; i<=n; i++)
    {
        for(k=i; k<n; k++)
        {
            printf(" ");
        }
        for(j=1; j<=i; j++)
        {
            printf("%d",i);
        }
        printf("\n");
    }
}
