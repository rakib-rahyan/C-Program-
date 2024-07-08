#include<stdio.h>
int main()
{
    int n;
    printf("Enter N integer number: ");
    scanf("%d",&n);
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n-i; j++)printf(".");
        for(int k=1; k<=i; k++)printf("*");
        for(int l=1; l<i; l++)printf("*");
        printf("\n");
    }
    for(int i=1; i<n; i++){
        for(int j=1; j<=i; j++)printf(".");
        for(int k=1; k<=n-i; k++)printf("*");
        for(int l=1; l<=n-i-1; l++)printf("*");
        printf("\n");
    }
}
