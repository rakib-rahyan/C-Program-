#include<stdio.h>
int main()
{
    int n=50,i,j, m=1;
    for(i=1; i<=n; i++){
        for(j=1; j<=n-i; j++){
                printf(",");
                }
        for(j=1;j<=m; j++)printf("*");
        printf("\n");
        m+=2;

        }
}
