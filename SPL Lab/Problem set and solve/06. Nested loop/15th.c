#include<stdio.h>
int main()
{
    int n;
    printf("Enter your N odd number: ");
    scanf("%d",&n);
    if(n%2==1)
    {
        for(int i=0; i<n; i++){
            for(int j=0; j<n; j++){
                if(i==0 || i==n-1 || i+j==n-1)printf("Z");
                else printf(" ");
            }
            printf("\n");
        }
    }
    else
    {
        printf("you enter number is not odd place run again and enter odd number");
    }
}

