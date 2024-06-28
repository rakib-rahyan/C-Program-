/*
   1
  22
 333
4444
*/
#include<stdio.h>
int main()
{
    int n, i, j,l,k,m;
    printf("Enter your N number: ");
    scanf("%d",&n);
    l--;
    m=n;
    m--;
    for(i=1; i<=n; i++){
        for(k=1; k<=m; k++){
            printf(" ");
        }
        for(j=1; j<=i; j++){
            printf("%d",i);
        }
        printf("\n");
        m--;
    }
}
