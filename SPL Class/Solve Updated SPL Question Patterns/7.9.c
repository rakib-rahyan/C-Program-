#include<stdio.h>
int main()
{
    int n;
    printf("Enter you integer odd number for this pattern: ");
    scanf("%d",&n);
    for(int i=0; i<n; i++)
    {
        for(int j=i; j<n-1; j++)printf(" ");
        for(int j=0; j<n; j++)printf("*");
        printf("\n");
    }
}
