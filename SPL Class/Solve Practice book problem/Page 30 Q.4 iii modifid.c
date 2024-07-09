#include<stdio.h>
int main()
{
    int n;
    printf("Enter N integer number for show pattern: ");
    scanf("%d",&n);
    for(int i=0; i<n;){
        for(int j=1; j<n-i; j++)printf(".");
        i++;
        for(int k=1; k<=i; k++)printf("%d",k);
        printf("\n");
        }
}

