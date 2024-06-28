/*
  *
 ***
*****
*/
#include<stdio.h>
int main()
{
    int n, i, j, k,m,l=1;
    printf("Enter your N number: ");
    scanf("%d",&n);
    m=n;
    m--;
    for(i=1; i<=n; i++){
        for(j=i; j<=m; j++){
            printf(" ");
        }
        for(k=1; k<=l; k++){
            printf("*");
        }
        l=l+2;
        printf("\n");
    }
}
