#include<stdio.h>
int main()
{
    int n;
    printf("Enter N integer number for show pattern: ");
    scanf("%d",&n);
    for(int i=0; i<n; i++){
        for(int j=1; j<n-i; j++)printf(".");
        for(int k=1; k<=i+1; k++)printf("%d",k);
        printf("\n");
        }
}

