/*
  *
 ***
*****
*/
#include<stdio.h>
int main()
{
    int n,l=1;
    printf("Enter your N number: ");
    scanf("%d",&n);
    for(int i=1; i<=n; i++){
        for(int j=i; j<n; j++)printf(".");
        for(int j=1; j<=l; j++)printf("*");
        printf("\n");
        l+=2;
    }
}
