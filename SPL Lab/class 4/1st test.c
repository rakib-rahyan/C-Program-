#include<stdio.h>
int main()
{
    int n, i, j,l,k=1;
    printf("Enter your N number: ");
    scanf("%d",&n);
    for(i=1; i<=n; i++){
            for(l=1; l<=n-i; l++){
                printf("_");
            }
        for(j=1; j<=k; j++){
            printf("*");
        }
        printf("\n");
        k=k+2;
    }
}
