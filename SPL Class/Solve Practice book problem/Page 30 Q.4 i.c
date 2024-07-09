#include<stdio.h>
int main()
{
    int n;
    printf("Enter even N integer number for show pattern: ");
    scanf("%d",&n);
    for(int i=0; i<n; i++){
        for(int j=0; j<=i; j++)printf("*");
        for(int k=i+1; k<=n-i-1; k++)printf("*");
        printf("\n");
        }
}
