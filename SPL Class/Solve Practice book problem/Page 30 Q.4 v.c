#include<stdio.h>
int main()
{
    int n,l=1;
    printf("Enter N integer number for show pattern: ");
    scanf("%d",&n);
    for(int i=0; i<n;i++){
        for(int j=i+1; j<n; j++)printf(".");
        for(int k=0; k<l; k++)printf("*");
        printf("\n");
        l+=2;
        }
}

