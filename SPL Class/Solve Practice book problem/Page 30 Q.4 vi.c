#include<stdio.h>
int main()
{
    int n;
    printf("Enter N integer number for show pattern: ");
    scanf("%d",&n);
    for(int i=0; i<n;i++){
        for(int j=0; j<i; j++)printf(".");
        for(int k=i; k<n; k++)printf("*");
        for(int l=1; l<n-i; l++)printf("*");
        printf("\n");
        }
}

