/*
n=3
1
23
345
*/
#include<stdio.h>
int main()
{
    int n,i,j,m=1;
    printf("Enter your N number: ");
    scanf("%d",&n);
    for(i=1; i<=n; i++)
    {
        for(j=i; j<=m; j++){
            printf("%d",j);
        }
        printf("\n");
        m+=2;
    }
}
